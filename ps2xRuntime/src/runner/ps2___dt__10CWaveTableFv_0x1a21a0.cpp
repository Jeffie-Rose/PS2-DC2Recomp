#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __dt__10CWaveTableFv
// Address: 0x1a21a0 - 0x1a21ec
void ps2___dt__10CWaveTableFv_0x1a21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___dt__10CWaveTableFv_0x1a21a0");
#endif

    switch (ctx->pc) {
        case 0x1a21d8u: goto label_1a21d8;
        default: break;
    }

    ctx->pc = 0x1a21a0u;

    // 0x1a21a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a21a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a21a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a21a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a21ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a21acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21b0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A21B0u;
    {
        const bool branch_taken_0x1a21b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A21B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21B0u;
            // 0x1a21b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21b0) {
            ctx->pc = 0x1A21DCu;
            goto label_1a21dc;
        }
    }
    ctx->pc = 0x1A21B8u;
    // 0x1a21b8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1a21b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1a21bc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a21c0: 0x246359c8  addiu       $v1, $v1, 0x59C8
    ctx->pc = 0x1a21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22984));
    // 0x1a21c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a21c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a21c8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A21C8u;
    {
        const bool branch_taken_0x1a21c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A21CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21C8u;
            // 0x1a21cc: 0xae031204  sw          $v1, 0x1204($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21c8) {
            ctx->pc = 0x1A21D8u;
            goto label_1a21d8;
        }
    }
    ctx->pc = 0x1A21D0u;
    // 0x1a21d0: 0xc040110  jal         func_100440
    ctx->pc = 0x1A21D0u;
    SET_GPR_U32(ctx, 31, 0x1A21D8u);
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21D8u; }
        if (ctx->pc != 0x1A21D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___dl__FPv_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21D8u; }
        if (ctx->pc != 0x1A21D8u) { return; }
    }
    ctx->pc = 0x1A21D8u;
label_1a21d8:
    // 0x1a21d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a21d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a21dc:
    // 0x1a21dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a21dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a21e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a21e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a21e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A21E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21E4u;
            // 0x1a21e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A21ECu;
}
