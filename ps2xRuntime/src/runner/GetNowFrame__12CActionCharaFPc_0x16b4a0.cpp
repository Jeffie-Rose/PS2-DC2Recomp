#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowFrame__12CActionCharaFPc
// Address: 0x16b4a0 - 0x16b520
void GetNowFrame__12CActionCharaFPc_0x16b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowFrame__12CActionCharaFPc_0x16b4a0");
#endif

    switch (ctx->pc) {
        case 0x16b4d0u: goto label_16b4d0;
        case 0x16b4d8u: goto label_16b4d8;
        default: break;
    }

    ctx->pc = 0x16b4a0u;

    // 0x16b4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b4a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b4a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b4ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b4b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16b4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16b4b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16b4b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16b4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16b4bc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x16B4BCu;
    {
        const bool branch_taken_0x16b4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4BCu;
            // 0x16b4c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4bc) {
            ctx->pc = 0x16B4FCu;
            goto label_16b4fc;
        }
    }
    ctx->pc = 0x16B4C4u;
    // 0x16b4c4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B4C4u;
    {
        const bool branch_taken_0x16b4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4C4u;
            // 0x16b4c8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c4) {
            ctx->pc = 0x16B508u;
            goto label_16b508;
        }
    }
    ctx->pc = 0x16B4CCu;
    // 0x16b4cc: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x16b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_16b4d0:
    // 0x16b4d0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16B4D0u;
    SET_GPR_U32(ctx, 31, 0x16B4D8u);
    ctx->pc = 0x16B4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4D0u;
            // 0x16b4d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4D8u; }
        if (ctx->pc != 0x16B4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4D8u; }
        if (ctx->pc != 0x16B4D8u) { return; }
    }
    ctx->pc = 0x16B4D8u;
label_16b4d8:
    // 0x16b4d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4D8u;
    {
        const bool branch_taken_0x16b4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b4d8) {
            ctx->pc = 0x16B4E8u;
            goto label_16b4e8;
        }
    }
    ctx->pc = 0x16B4E0u;
    // 0x16b4e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16B4E0u;
    {
        const bool branch_taken_0x16b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4E0u;
            // 0x16b4e4: 0xc6000388  lwc1        $f0, 0x388($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4e0) {
            ctx->pc = 0x16B508u;
            goto label_16b508;
        }
    }
    ctx->pc = 0x16B4E8u;
label_16b4e8:
    // 0x16b4e8: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b4ec: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B4ECu;
    {
        const bool branch_taken_0x16b4ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B4ECu;
            // 0x16b4f0: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4ec) {
            ctx->pc = 0x16B4D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b4d0;
        }
    }
    ctx->pc = 0x16B4F4u;
    // 0x16b4f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4F4u;
    {
        const bool branch_taken_0x16b4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4f4) {
            ctx->pc = 0x16B504u;
            goto label_16b504;
        }
    }
    ctx->pc = 0x16B4FCu;
label_16b4fc:
    // 0x16b4fc: 0xc4940388  lwc1        $f20, 0x388($a0)
    ctx->pc = 0x16b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b500: 0x0  nop
    ctx->pc = 0x16b500u;
    // NOP
label_16b504:
    // 0x16b504: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x16b504u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_16b508:
    // 0x16b508: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b50c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b510: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b518: 0x3e00008  jr          $ra
    ctx->pc = 0x16B518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B518u;
            // 0x16b51c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B520u;
}
