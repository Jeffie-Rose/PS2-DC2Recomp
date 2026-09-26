#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCtrlHelpId__8CAquaMesFi
// Address: 0x211620 - 0x2116a8
void SetCtrlHelpId__8CAquaMesFi_0x211620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCtrlHelpId__8CAquaMesFi_0x211620");
#endif

    switch (ctx->pc) {
        case 0x211644u: goto label_211644;
        case 0x21164cu: goto label_21164c;
        default: break;
    }

    ctx->pc = 0x211620u;

    // 0x211620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211624: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x211624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21162c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211630: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x211634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211638: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x211638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
    // 0x21163c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x21163Cu;
    SET_GPR_U32(ctx, 31, 0x211644u);
    ctx->pc = 0x211640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21163Cu;
            // 0x211640: 0x8c840044  lw          $a0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211644u; }
        if (ctx->pc != 0x211644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211644u; }
        if (ctx->pc != 0x211644u) { return; }
    }
    ctx->pc = 0x211644u;
label_211644:
    // 0x211644: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x211644u;
    SET_GPR_U32(ctx, 31, 0x21164Cu);
    ctx->pc = 0x211648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211644u;
            // 0x211648: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21164Cu; }
        if (ctx->pc != 0x21164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21164Cu; }
        if (ctx->pc != 0x21164Cu) { return; }
    }
    ctx->pc = 0x21164Cu;
label_21164c:
    // 0x21164c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x21164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x211650: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211654: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x211658: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x21165c: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x21165cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
    // 0x211660: 0x8d041e14  lw          $a0, 0x1E14($t0)
    ctx->pc = 0x211660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7700)));
    // 0x211664: 0x2467ffd8  addiu       $a3, $v1, -0x28
    ctx->pc = 0x211664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x211668: 0x24c30032  addiu       $v1, $a2, 0x32
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    // 0x21166c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x21166cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x211670: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x211670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x211674: 0xad041b94  sw          $a0, 0x1B94($t0)
    ctx->pc = 0x211674u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7060), GPR_U32(ctx, 4));
    // 0x211678: 0xad071b98  sw          $a3, 0x1B98($t0)
    ctx->pc = 0x211678u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7064), GPR_U32(ctx, 7));
    // 0x21167c: 0xad051c34  sw          $a1, 0x1C34($t0)
    ctx->pc = 0x21167cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 5));
    // 0x211680: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x211680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x211684: 0x8f848784  lw          $a0, -0x787C($gp)
    ctx->pc = 0x211684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x211688: 0xacc31b9c  sw          $v1, 0x1B9C($a2)
    ctx->pc = 0x211688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7068), GPR_U32(ctx, 3));
    // 0x21168c: 0x2483ffd8  addiu       $v1, $a0, -0x28
    ctx->pc = 0x21168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967256));
    // 0x211690: 0xacc31ba0  sw          $v1, 0x1BA0($a2)
    ctx->pc = 0x211690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7072), GPR_U32(ctx, 3));
    // 0x211694: 0xacc51c38  sw          $a1, 0x1C38($a2)
    ctx->pc = 0x211694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7224), GPR_U32(ctx, 5));
    // 0x211698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21169c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21169cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2116a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2116A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2116A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2116A0u;
            // 0x2116a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2116A8u;
}
