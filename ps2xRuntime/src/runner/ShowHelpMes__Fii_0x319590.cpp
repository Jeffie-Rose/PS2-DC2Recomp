#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShowHelpMes__Fii
// Address: 0x319590 - 0x319614
void ShowHelpMes__Fii_0x319590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShowHelpMes__Fii_0x319590");
#endif

    switch (ctx->pc) {
        case 0x3195a0u: goto label_3195a0;
        default: break;
    }

    ctx->pc = 0x319590u;

    // 0x319590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319598: 0xc0c63e0  jal         func_318F80
    ctx->pc = 0x319598u;
    SET_GPR_U32(ctx, 31, 0x3195A0u);
    ctx->pc = 0x318F80u;
    if (runtime->hasFunction(0x318F80u)) {
        auto targetFn = runtime->lookupFunction(0x318F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3195A0u; }
        if (ctx->pc != 0x3195A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHepMesInfo__Fv_0x318f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3195A0u; }
        if (ctx->pc != 0x3195A0u) { return; }
    }
    ctx->pc = 0x3195A0u;
label_3195a0:
    // 0x3195a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3195A0u;
    {
        const bool branch_taken_0x3195a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3195a0) {
            ctx->pc = 0x319608u;
            goto label_319608;
        }
    }
    ctx->pc = 0x3195A8u;
    // 0x3195a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3195a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3195ac: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3195ACu;
    {
        const bool branch_taken_0x3195ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3195B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3195ACu;
            // 0x3195b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195ac) {
            ctx->pc = 0x3195D8u;
            goto label_3195d8;
        }
    }
    ctx->pc = 0x3195B4u;
    // 0x3195b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3195b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3195b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3195b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3195bc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3195bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3195c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3195c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3195c4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3195c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3195c8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3195cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3195ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3195d0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x3195d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x3195d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3195d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3195d8:
    // 0x3195d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3195d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3195dc: 0x18a00002  blez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3195DCu;
    {
        const bool branch_taken_0x3195dc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3195E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3195DCu;
            // 0x3195e0: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195dc) {
            ctx->pc = 0x3195E8u;
            goto label_3195e8;
        }
    }
    ctx->pc = 0x3195E4u;
    // 0x3195e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3195e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3195e8:
    // 0x3195e8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x3195e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x3195ec: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3195ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3195f0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3195f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x3195f4: 0x24030181  addiu       $v1, $zero, 0x181
    ctx->pc = 0x3195f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x3195f8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x3195f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x3195fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3195fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319600: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x319600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x319604: 0xaf80a328  sw          $zero, -0x5CD8($gp)
    ctx->pc = 0x319604u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943528), GPR_U32(ctx, 0));
label_319608:
    // 0x319608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31960c: 0x3e00008  jr          $ra
    ctx->pc = 0x31960Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31960Cu;
            // 0x319610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319614u;
}
