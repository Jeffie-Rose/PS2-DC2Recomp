#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Move2__12CSceneCmrSeqFPfPfiif
// Address: 0x259dc0 - 0x259e54
void Move2__12CSceneCmrSeqFPfPfiif_0x259dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move2__12CSceneCmrSeqFPfPfiif_0x259dc0");
#endif

    switch (ctx->pc) {
        case 0x259df8u: goto label_259df8;
        case 0x259e18u: goto label_259e18;
        case 0x259e24u: goto label_259e24;
        default: break;
    }

    ctx->pc = 0x259dc0u;

    // 0x259dc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x259dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x259dc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x259dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x259dc8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x259dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x259dcc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x259dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x259dd0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x259dd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x259dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x259dd8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x259dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ddc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x259ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x259de0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x259de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259de4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259de8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x259de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x259decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259df0: 0xc096680  jal         func_259A00
    ctx->pc = 0x259DF0u;
    SET_GPR_U32(ctx, 31, 0x259DF8u);
    ctx->pc = 0x259DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259DF0u;
            // 0x259df4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259DF8u; }
        if (ctx->pc != 0x259DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259DF8u; }
        if (ctx->pc != 0x259DF8u) { return; }
    }
    ctx->pc = 0x259DF8u;
label_259df8:
    // 0x259df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259dfc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x259DFCu;
    {
        const bool branch_taken_0x259dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x259dfc) {
            ctx->pc = 0x259E30u;
            goto label_259e30;
        }
    }
    ctx->pc = 0x259E04u;
    // 0x259e04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x259e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259e08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x259e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x259e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x259e10: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259E10u;
    SET_GPR_U32(ctx, 31, 0x259E18u);
    ctx->pc = 0x259E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E10u;
            // 0x259e14: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E18u; }
        if (ctx->pc != 0x259E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E18u; }
        if (ctx->pc != 0x259E18u) { return; }
    }
    ctx->pc = 0x259E18u;
label_259e18:
    // 0x259e18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e1c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259E1Cu;
    SET_GPR_U32(ctx, 31, 0x259E24u);
    ctx->pc = 0x259E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259E1Cu;
            // 0x259e20: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E24u; }
        if (ctx->pc != 0x259E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259E24u; }
        if (ctx->pc != 0x259E24u) { return; }
    }
    ctx->pc = 0x259E24u;
label_259e24:
    // 0x259e24: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x259e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x259e28: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x259e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x259e2c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x259e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_259e30:
    // 0x259e30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x259e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259e34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x259e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259e38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x259e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259e3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x259e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259e40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x259e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259e44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x259e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259e48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x259e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x259E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259E4Cu;
            // 0x259e50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259E54u;
}
