#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _init_signal_r
// Address: 0x128498 - 0x128508
void _init_signal_r_0x128498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_init_signal_r_0x128498");
#endif

    switch (ctx->pc) {
        case 0x1284bcu: goto label_1284bc;
        case 0x1284d8u: goto label_1284d8;
        default: break;
    }

    ctx->pc = 0x128498u;

    // 0x128498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12849c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1284a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1284a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1284a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1284a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284a8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1284ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1284ACu;
    {
        const bool branch_taken_0x1284ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1284B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284ACu;
            // 0x1284b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284ac) {
            ctx->pc = 0x1284F8u;
            goto label_1284f8;
        }
    }
    ctx->pc = 0x1284B4u;
    // 0x1284b4: 0xc0499cc  jal         func_126730
    ctx->pc = 0x1284B4u;
    SET_GPR_U32(ctx, 31, 0x1284BCu);
    ctx->pc = 0x1284B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1284B4u;
            // 0x1284b8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126730u;
    if (runtime->hasFunction(0x126730u)) {
        auto targetFn = runtime->lookupFunction(0x126730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284BCu; }
        if (ctx->pc != 0x1284BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _malloc_r_0x126730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284BCu; }
        if (ctx->pc != 0x1284BCu) { return; }
    }
    ctx->pc = 0x1284BCu;
label_1284bc:
    // 0x1284bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1284BCu;
    {
        const bool branch_taken_0x1284bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1284C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284BCu;
            // 0x1284c0: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284bc) {
            ctx->pc = 0x1284CCu;
            goto label_1284cc;
        }
    }
    ctx->pc = 0x1284C4u;
    // 0x1284c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1284C4u;
    {
        const bool branch_taken_0x1284c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284C4u;
            // 0x1284c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284c4) {
            ctx->pc = 0x1284F8u;
            goto label_1284f8;
        }
    }
    ctx->pc = 0x1284CCu;
label_1284cc:
    // 0x1284cc: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x1284ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x1284d0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1284d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1284d4: 0x0  nop
    ctx->pc = 0x1284d4u;
    // NOP
label_1284d8:
    // 0x1284d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1284d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1284dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1284e0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1284e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1284e4: 0x0  nop
    ctx->pc = 0x1284e4u;
    // NOP
    // 0x1284e8: 0x0  nop
    ctx->pc = 0x1284e8u;
    // NOP
    // 0x1284ec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1284ECu;
    {
        const bool branch_taken_0x1284ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1284ec) {
            ctx->pc = 0x1284D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1284d8;
        }
    }
    ctx->pc = 0x1284F4u;
    // 0x1284f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1284f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1284f8:
    // 0x1284f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1284f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1284fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1284fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128500: 0x3e00008  jr          $ra
    ctx->pc = 0x128500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128500u;
            // 0x128504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128508u;
}
