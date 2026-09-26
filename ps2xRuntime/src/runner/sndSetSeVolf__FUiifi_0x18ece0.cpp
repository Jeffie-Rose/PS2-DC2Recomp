#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSeVolf__FUiifi
// Address: 0x18ece0 - 0x18ed5c
void sndSetSeVolf__FUiifi_0x18ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSeVolf__FUiifi_0x18ece0");
#endif

    switch (ctx->pc) {
        case 0x18ed0cu: goto label_18ed0c;
        case 0x18ed20u: goto label_18ed20;
        case 0x18ed40u: goto label_18ed40;
        default: break;
    }

    ctx->pc = 0x18ece0u;

    // 0x18ece0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ece4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18ece8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18ecec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18ececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18ecf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ecf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ecf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18ecf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18ecfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18ed00: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18ed00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed04: 0xc063624  jal         func_18D890
    ctx->pc = 0x18ED04u;
    SET_GPR_U32(ctx, 31, 0x18ED0Cu);
    ctx->pc = 0x18ED08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED04u;
            // 0x18ed08: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED0Cu; }
        if (ctx->pc != 0x18ED0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeDefVol__FUii_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED0Cu; }
        if (ctx->pc != 0x18ED0Cu) { return; }
    }
    ctx->pc = 0x18ED0Cu;
label_18ed0c:
    // 0x18ed0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ed0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ed10: 0x0  nop
    ctx->pc = 0x18ed10u;
    // NOP
    // 0x18ed14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ed14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18ed18: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18ED18u;
    SET_GPR_U32(ctx, 31, 0x18ED20u);
    ctx->pc = 0x18ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED18u;
            // 0x18ed1c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED20u; }
        if (ctx->pc != 0x18ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED20u; }
        if (ctx->pc != 0x18ED20u) { return; }
    }
    ctx->pc = 0x18ED20u;
label_18ed20:
    // 0x18ed20: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x18ed20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18ed24: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18ED24u;
    {
        const bool branch_taken_0x18ed24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED24u;
            // 0x18ed28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed24) {
            ctx->pc = 0x18ED30u;
            goto label_18ed30;
        }
    }
    ctx->pc = 0x18ED2Cu;
    // 0x18ed2c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x18ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18ed30:
    // 0x18ed30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ed30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18ed34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed38: 0xc063a7c  jal         func_18E9F0
    ctx->pc = 0x18ED38u;
    SET_GPR_U32(ctx, 31, 0x18ED40u);
    ctx->pc = 0x18ED3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED38u;
            // 0x18ed3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E9F0u;
    if (runtime->hasFunction(0x18E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED40u; }
        if (ctx->pc != 0x18ED40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVol__FUiiii_0x18e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED40u; }
        if (ctx->pc != 0x18ED40u) { return; }
    }
    ctx->pc = 0x18ED40u;
label_18ed40:
    // 0x18ed40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18ed40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ed44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18ed48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18ed48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ed4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18ed4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ed50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ed50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ed54: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ED58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED54u;
            // 0x18ed58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ED5Cu;
}
