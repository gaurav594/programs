import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;

@SuppressWarnings("serial")
class SimpleTicTacToe1 extends JPanel {
   private static final int BUTTON_FONT_POINTS = 64;
   private static final Font TTT_BTN_FONT = new Font(Font.SANS_SERIF, Font.BOLD, BUTTON_FONT_POINTS);
   private static final String[] XO = {"X", "O"};
   private JButton[][] tttButtons = new JButton[3][3];
   private JFrame window = new JFrame("Tic-Tac-Toe");

   private int buttonCount = 0;





   public SimpleTicTacToe1() {
      TttButtonListener tttBtnListener = new TttButtonListener();

      /*Creates the menu bar*/

	  	JMenuBar menuBar = new JMenuBar();
	      window.setJMenuBar(menuBar);

	      /*Creates "File" Button to Menu*/

	       JMenu fileMenu = new JMenu("File");
     		menuBar.add(fileMenu);


     		JMenuItem aboutAction =  new JMenuItem("About");
				 JMenuItem exitAction =    new JMenuItem("Exit");
				 fileMenu.add(aboutAction);
				 fileMenu.addSeparator();
				 fileMenu.add(exitAction);





      JPanel tttPanel = new JPanel(new GridLayout(3, 3, 5, 5));
      for (int row = 0; row < tttButtons.length; row++) {
         for (int col = 0; col < tttButtons[row].length; col++) {
            JButton btn = new JButton("   ");
            btn.setFont(TTT_BTN_FONT);
            btn.addActionListener(tttBtnListener); // add listener to ttt button
            tttPanel.add(btn);
            tttButtons[row][col] = btn;
         }
      }

       //all other non tictactoe buttons use anonymous inner classes
      JButton resetButton = new JButton("Reset");
      resetButton.addActionListener(new ActionListener() {
         public void actionPerformed(ActionEvent e) {
            resetActionPerformed();
         }
      });

      JButton aboutButton = new JButton("About");
      aboutButton.addActionListener(new ActionListener() {
         public void actionPerformed(ActionEvent e) {
            aboutActionPerformed();
         }
      });

     JButton exitButton = new JButton("Exit");
     exitButton.addActionListener(new ActionListener() {
         public void actionPerformed(ActionEvent e) {
            Window win = SwingUtilities.getWindowAncestor(SimpleTicTacToe1.this);
           win.dispose();
         }
      });

      JPanel buttonPanel = new JPanel(new GridLayout(1, 0, 5, 0));
      buttonPanel.add(resetButton);
      buttonPanel.add(aboutButton);
      buttonPanel.add(exitButton);

      setBorder(BorderFactory.createEmptyBorder(5, 5, 5, 5));
      setLayout(new BorderLayout(5, 5));
      add(tttPanel, BorderLayout.CENTER);
      add(buttonPanel, BorderLayout.NORTH);
   }

   private void resetActionPerformed() {
      buttonCount = 0;
      for (JButton[] buttonRow : tttButtons) {
         for (JButton button : buttonRow) {
            button.setText("");
         }
      }
   }

   private void aboutActionPerformed() {
      // TODO: show about action

      String message = "Ryan's TicTacToe \nStructured Programming\nCopyright 2011\nAll rights reserved";
           JOptionPane.showMessageDialog(null,message,"About TicTacToe", JOptionPane.INFORMATION_MESSAGE);

   }

   public void checkForWin() {
      // TODO: complete this method



}


   // private listener class, only for the tictactoe buttons
   private class TttButtonListener implements ActionListener {
      public void actionPerformed(ActionEvent e) {
         JButton button = (JButton) e.getSource();
         if (button.getText().trim().isEmpty()) {
            button.setText(XO[buttonCount]);
            buttonCount++;
            buttonCount %= 2;

            checkForWin();
         }
      }
   }

   private static void createAndShowUI() {
      JFrame frame = new JFrame("Simple TicTacToe");
      frame.getContentPane().add(new SimpleTicTacToe());
      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      frame.pack();
      frame.setLocationRelativeTo(null);
      frame.setVisible(true);
   }

   public static void main(String[] args) {
      java.awt.EventQueue.invokeLater(new Runnable() {
         public void run() {
            createAndShowUI();
         }
      });
   }
}