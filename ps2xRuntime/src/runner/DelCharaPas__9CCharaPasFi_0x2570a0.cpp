#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DelCharaPas__9CCharaPasFi
// Address: 0x2570a0 - 0x257148
void DelCharaPas__9CCharaPasFi_0x2570a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DelCharaPas__9CCharaPasFi_0x2570a0");
#endif

    switch (ctx->pc) {
        case 0x2570d4u: goto label_2570d4;
        case 0x2570ecu: goto label_2570ec;
        case 0x257100u: goto label_257100;
        default: break;
    }

    ctx->pc = 0x2570a0u;

    // 0x2570a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2570a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2570a4: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2570a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2570a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2570a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2570ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2570acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2570b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2570b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2570b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2570b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2570b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2570B8u;
    {
        const bool branch_taken_0x2570b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2570BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2570B8u;
            // 0x2570bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570b8) {
            ctx->pc = 0x2570C8u;
            goto label_2570c8;
        }
    }
    ctx->pc = 0x2570C0u;
    // 0x2570c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2570C0u;
    {
        const bool branch_taken_0x2570c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2570C0u;
            // 0x2570c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570c0) {
            ctx->pc = 0x257130u;
            goto label_257130;
        }
    }
    ctx->pc = 0x2570C8u;
label_2570c8:
    // 0x2570c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2570c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2570CCu;
    {
        const bool branch_taken_0x2570cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2570CCu;
            // 0x2570d0: 0x59100  sll         $s2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570cc) {
            ctx->pc = 0x257108u;
            goto label_257108;
        }
    }
    ctx->pc = 0x2570D4u;
label_2570d4:
    // 0x2570d4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2570D4u;
    {
        const bool branch_taken_0x2570d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2570D4u;
            // 0x2570d8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570d4) {
            ctx->pc = 0x2570F4u;
            goto label_2570f4;
        }
    }
    ctx->pc = 0x2570DCu;
    // 0x2570dc: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x2570dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2570e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2570e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2570e4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2570E4u;
    SET_GPR_U32(ctx, 31, 0x2570ECu);
    ctx->pc = 0x2570E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2570E4u;
            // 0x2570e8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2570ECu; }
        if (ctx->pc != 0x2570ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2570ECu; }
        if (ctx->pc != 0x2570ECu) { return; }
    }
    ctx->pc = 0x2570ECu;
label_2570ec:
    // 0x2570ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2570ECu;
    {
        const bool branch_taken_0x2570ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2570ec) {
            ctx->pc = 0x257100u;
            goto label_257100;
        }
    }
    ctx->pc = 0x2570F4u;
label_2570f4:
    // 0x2570f4: 0x0  nop
    ctx->pc = 0x2570f4u;
    // NOP
    // 0x2570f8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2570F8u;
    SET_GPR_U32(ctx, 31, 0x257100u);
    ctx->pc = 0x2570FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2570F8u;
            // 0x2570fc: 0x2122021  addu        $a0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257100u; }
        if (ctx->pc != 0x257100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257100u; }
        if (ctx->pc != 0x257100u) { return; }
    }
    ctx->pc = 0x257100u;
label_257100:
    // 0x257100: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x257100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x257104: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_257108:
    // 0x257108: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x257108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x25710c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x25710cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x257110: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x257110u;
    {
        const bool branch_taken_0x257110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257110u;
            // 0x257114: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257110) {
            ctx->pc = 0x2570D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2570d4;
        }
    }
    ctx->pc = 0x257118u;
    // 0x257118: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x257118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25711c: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x25711cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x257120: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x257120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x257124: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257124u;
    {
        const bool branch_taken_0x257124 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x257128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257124u;
            // 0x257128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257124) {
            ctx->pc = 0x257130u;
            goto label_257130;
        }
    }
    ctx->pc = 0x25712Cu;
    // 0x25712c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x25712cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_257130:
    // 0x257130: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x257130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25713c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25713cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257140: 0x3e00008  jr          $ra
    ctx->pc = 0x257140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257140u;
            // 0x257144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257148u;
}
