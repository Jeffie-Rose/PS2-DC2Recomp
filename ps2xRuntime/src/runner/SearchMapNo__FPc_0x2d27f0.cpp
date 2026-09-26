#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchMapNo__FPc
// Address: 0x2d27f0 - 0x2d2880
void SearchMapNo__FPc_0x2d27f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMapNo__FPc_0x2d27f0");
#endif

    switch (ctx->pc) {
        case 0x2d2820u: goto label_2d2820;
        case 0x2d283cu: goto label_2d283c;
        default: break;
    }

    ctx->pc = 0x2d27f0u;

    // 0x2d27f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d27f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d27f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d27f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d27f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d27f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d27fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d27fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d2800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2804: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2804u;
    {
        const bool branch_taken_0x2d2804 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2804u;
            // 0x2d2808: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2804) {
            ctx->pc = 0x2D2814u;
            goto label_2d2814;
        }
    }
    ctx->pc = 0x2D280Cu;
    // 0x2d280c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D280Cu;
    {
        const bool branch_taken_0x2d280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D280Cu;
            // 0x2d2810: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d280c) {
            ctx->pc = 0x2D2868u;
            goto label_2d2868;
        }
    }
    ctx->pc = 0x2D2814u;
label_2d2814:
    // 0x2d2814: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d2814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2818: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D2818u;
    {
        const bool branch_taken_0x2d2818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2818u;
            // 0x2d281c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2818) {
            ctx->pc = 0x2D2854u;
            goto label_2d2854;
        }
    }
    ctx->pc = 0x2D2820u;
label_2d2820:
    // 0x2d2820: 0x8f829dc8  lw          $v0, -0x6238($gp)
    ctx->pc = 0x2d2820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942152)));
    // 0x2d2824: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d2824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d2828: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d2828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d282c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D282Cu;
    {
        const bool branch_taken_0x2d282c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D282Cu;
            // 0x2d2830: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d282c) {
            ctx->pc = 0x2D284Cu;
            goto label_2d284c;
        }
    }
    ctx->pc = 0x2D2834u;
    // 0x2d2834: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2D2834u;
    SET_GPR_U32(ctx, 31, 0x2D283Cu);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D283Cu; }
        if (ctx->pc != 0x2D283Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D283Cu; }
        if (ctx->pc != 0x2D283Cu) { return; }
    }
    ctx->pc = 0x2D283Cu;
label_2d283c:
    // 0x2d283c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D283Cu;
    {
        const bool branch_taken_0x2d283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D283Cu;
            // 0x2d2840: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d283c) {
            ctx->pc = 0x2D284Cu;
            goto label_2d284c;
        }
    }
    ctx->pc = 0x2D2844u;
    // 0x2d2844: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2844u;
    {
        const bool branch_taken_0x2d2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2844u;
            // 0x2d2848: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2844) {
            ctx->pc = 0x2D286Cu;
            goto label_2d286c;
        }
    }
    ctx->pc = 0x2D284Cu;
label_2d284c:
    // 0x2d284c: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x2d284cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x2d2850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d2850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d2854:
    // 0x2d2854: 0x0  nop
    ctx->pc = 0x2d2854u;
    // NOP
    // 0x2d2858: 0x8f829dc4  lw          $v0, -0x623C($gp)
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942148)));
    // 0x2d285c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d285cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d2860: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D2860u;
    {
        const bool branch_taken_0x2d2860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2860u;
            // 0x2d2864: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2860) {
            ctx->pc = 0x2D2820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2820;
        }
    }
    ctx->pc = 0x2D2868u;
label_2d2868:
    // 0x2d2868: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d286c:
    // 0x2d286c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d286cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2878: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D287Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2878u;
            // 0x2d287c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2880u;
}
