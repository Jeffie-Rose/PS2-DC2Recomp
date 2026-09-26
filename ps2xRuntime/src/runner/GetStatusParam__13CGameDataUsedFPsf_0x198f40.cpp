#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStatusParam__13CGameDataUsedFPsf
// Address: 0x198f40 - 0x198fc0
void GetStatusParam__13CGameDataUsedFPsf_0x198f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStatusParam__13CGameDataUsedFPsf_0x198f40");
#endif

    switch (ctx->pc) {
        case 0x198f64u: goto label_198f64;
        case 0x198f7cu: goto label_198f7c;
        default: break;
    }

    ctx->pc = 0x198f40u;

    // 0x198f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198f44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x198f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x198f48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198f4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x198f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x198f58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x198f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f5c: 0xc066384  jal         func_198E10
    ctx->pc = 0x198F5Cu;
    SET_GPR_U32(ctx, 31, 0x198F64u);
    ctx->pc = 0x198F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198F5Cu;
            // 0x198f60: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x198E10u;
    if (runtime->hasFunction(0x198E10u)) {
        auto targetFn = runtime->lookupFunction(0x198E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F64u; }
        if (ctx->pc != 0x198F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatusParam__13CGameDataUsedFPs_0x198e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F64u; }
        if (ctx->pc != 0x198F64u) { return; }
    }
    ctx->pc = 0x198F64u;
label_198f64:
    // 0x198f64: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x198f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x198f68: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x198f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x198f6c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x198F6Cu;
    {
        const bool branch_taken_0x198f6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x198F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198F6Cu;
            // 0x198f70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f6c) {
            ctx->pc = 0x198FA8u;
            goto label_198fa8;
        }
    }
    ctx->pc = 0x198F74u;
    // 0x198f74: 0xc05831c  jal         func_160C70
    ctx->pc = 0x198F74u;
    SET_GPR_U32(ctx, 31, 0x198F7Cu);
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F7Cu; }
        if (ctx->pc != 0x198F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198F7Cu; }
        if (ctx->pc != 0x198F7Cu) { return; }
    }
    ctx->pc = 0x198F7Cu;
label_198f7c:
    // 0x198f7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198f80: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x198F80u;
    {
        const bool branch_taken_0x198f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198f80) {
            ctx->pc = 0x198F9Cu;
            goto label_198f9c;
        }
    }
    ctx->pc = 0x198F88u;
    // 0x198f88: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x198f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198f8c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x198f90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x198f94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198F94u;
    {
        const bool branch_taken_0x198f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198F94u;
            // 0x198f98: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f94) {
            ctx->pc = 0x198FA8u;
            goto label_198fa8;
        }
    }
    ctx->pc = 0x198F9Cu;
label_198f9c:
    // 0x198f9c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x198f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198fa0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x198fa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x198fa4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x198fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_198fa8:
    // 0x198fa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x198fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198fac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x198facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198fb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x198FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198FB8u;
            // 0x198fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198FC0u;
}
