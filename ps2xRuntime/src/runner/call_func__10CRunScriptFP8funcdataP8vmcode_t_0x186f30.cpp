#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: call_func__10CRunScriptFP8funcdataP8vmcode_t
// Address: 0x186f30 - 0x187020
void call_func__10CRunScriptFP8funcdataP8vmcode_t_0x186f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("call_func__10CRunScriptFP8funcdataP8vmcode_t_0x186f30");
#endif

    switch (ctx->pc) {
        case 0x186f6cu: goto label_186f6c;
        case 0x186f74u: goto label_186f74;
        case 0x186ff4u: goto label_186ff4;
        case 0x186ffcu: goto label_186ffc;
        default: break;
    }

    ctx->pc = 0x186f30u;

    // 0x186f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186f34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186f40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x186f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186f48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f4c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x186f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x186f50: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x186f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x186f54: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x186f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x186f58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186F58u;
    {
        const bool branch_taken_0x186f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F58u;
            // 0x186f5c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f58) {
            ctx->pc = 0x186F74u;
            goto label_186f74;
        }
    }
    ctx->pc = 0x186F60u;
    // 0x186f60: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x186f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x186f64: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x186F64u;
    SET_GPR_U32(ctx, 31, 0x186F6Cu);
    ctx->pc = 0x186F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F64u;
            // 0x186f68: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F6Cu; }
        if (ctx->pc != 0x186F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F6Cu; }
        if (ctx->pc != 0x186F6Cu) { return; }
    }
    ctx->pc = 0x186F6Cu;
label_186f6c:
    // 0x186f6c: 0xc04950e  jal         func_125438
    ctx->pc = 0x186F6Cu;
    SET_GPR_U32(ctx, 31, 0x186F74u);
    ctx->pc = 0x186F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F6Cu;
            // 0x186f70: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125438u;
    if (runtime->hasFunction(0x125438u)) {
        auto targetFn = runtime->lookupFunction(0x125438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F74u; }
        if (ctx->pc != 0x186F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x125438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F74u; }
        if (ctx->pc != 0x186F74u) { return; }
    }
    ctx->pc = 0x186F74u;
label_186f74:
    // 0x186f74: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x186f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x186f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f7c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x186f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x186f80: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x186f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x186f84: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x186f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x186f88: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x186f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x186f8c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x186f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x186f90: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x186f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x186f94: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x186f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x186f98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x186f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x186f9c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x186f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x186fa0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x186fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x186fa4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x186fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186fa8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x186fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x186fac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x186facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x186fb0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x186fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x186fb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x186fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186fbc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x186fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x186fc0: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x186fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x186fc4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x186fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x186fc8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x186fcc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x186fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x186fd0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x186fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x186fd4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x186fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x186fd8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x186fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x186fdc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x186fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x186fe0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x186fe4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186fe8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x186fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x186fec: 0xc049c86  jal         func_127218
    ctx->pc = 0x186FECu;
    SET_GPR_U32(ctx, 31, 0x186FF4u);
    ctx->pc = 0x186FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186FECu;
            // 0x186ff0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FF4u; }
        if (ctx->pc != 0x186FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FF4u; }
        if (ctx->pc != 0x186FF4u) { return; }
    }
    ctx->pc = 0x186FF4u;
label_186ff4:
    // 0x186ff4: 0xc061b54  jal         func_186D50
    ctx->pc = 0x186FF4u;
    SET_GPR_U32(ctx, 31, 0x186FFCu);
    ctx->pc = 0x186FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186FF4u;
            // 0x186ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D50u;
    if (runtime->hasFunction(0x186D50u)) {
        auto targetFn = runtime->lookupFunction(0x186D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FFCu; }
        if (ctx->pc != 0x186FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_stack__10CRunScriptFv_0x186d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FFCu; }
        if (ctx->pc != 0x186FFCu) { return; }
    }
    ctx->pc = 0x186FFCu;
label_186ffc:
    // 0x186ffc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x186ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187000: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x187004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x187004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18700c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18700cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187018: 0x3e00008  jr          $ra
    ctx->pc = 0x187018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187018u;
            // 0x18701c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187020u;
}
