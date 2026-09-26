#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Reference__12CSceneObjSeqFPfi
// Address: 0x25ce80 - 0x25cedc
void Reference__12CSceneObjSeqFPfi_0x25ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reference__12CSceneObjSeqFPfi_0x25ce80");
#endif

    switch (ctx->pc) {
        case 0x25cea0u: goto label_25cea0;
        case 0x25cec0u: goto label_25cec0;
        default: break;
    }

    ctx->pc = 0x25ce80u;

    // 0x25ce80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ce84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25ce88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ce8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ce90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25ce90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25ce94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce98: 0xc097118  jal         func_25C460
    ctx->pc = 0x25CE98u;
    SET_GPR_U32(ctx, 31, 0x25CEA0u);
    ctx->pc = 0x25CE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CE98u;
            // 0x25ce9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C460u;
    if (runtime->hasFunction(0x25C460u)) {
        auto targetFn = runtime->lookupFunction(0x25C460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEA0u; }
        if (ctx->pc != 0x25CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextRotSeq__12CSceneObjSeqFv_0x25c460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEA0u; }
        if (ctx->pc != 0x25CEA0u) { return; }
    }
    ctx->pc = 0x25CEA0u;
label_25cea0:
    // 0x25cea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cea4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CEA4u;
    {
        const bool branch_taken_0x25cea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cea4) {
            ctx->pc = 0x25CEC4u;
            goto label_25cec4;
        }
    }
    ctx->pc = 0x25CEACu;
    // 0x25ceac: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x25ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x25ceb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25ceb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ceb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25ceb8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25CEB8u;
    SET_GPR_U32(ctx, 31, 0x25CEC0u);
    ctx->pc = 0x25CEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CEB8u;
            // 0x25cebc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEC0u; }
        if (ctx->pc != 0x25CEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CEC0u; }
        if (ctx->pc != 0x25CEC0u) { return; }
    }
    ctx->pc = 0x25CEC0u;
label_25cec0:
    // 0x25cec0: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x25cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_25cec4:
    // 0x25cec4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25cec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25cec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ceccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ced0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ced0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ced4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CED4u;
            // 0x25ced8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CEDCu;
}
