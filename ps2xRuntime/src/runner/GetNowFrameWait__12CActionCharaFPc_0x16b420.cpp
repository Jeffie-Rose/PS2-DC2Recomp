#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowFrameWait__12CActionCharaFPc
// Address: 0x16b420 - 0x16b4a0
void GetNowFrameWait__12CActionCharaFPc_0x16b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowFrameWait__12CActionCharaFPc_0x16b420");
#endif

    switch (ctx->pc) {
        case 0x16b450u: goto label_16b450;
        case 0x16b458u: goto label_16b458;
        default: break;
    }

    ctx->pc = 0x16b420u;

    // 0x16b420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16b430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b434: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16b434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16b438: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16b438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16b43c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x16B43Cu;
    {
        const bool branch_taken_0x16b43c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B43Cu;
            // 0x16b440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b43c) {
            ctx->pc = 0x16B47Cu;
            goto label_16b47c;
        }
    }
    ctx->pc = 0x16B444u;
    // 0x16b444: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B444u;
    {
        const bool branch_taken_0x16b444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B444u;
            // 0x16b448: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b444) {
            ctx->pc = 0x16B488u;
            goto label_16b488;
        }
    }
    ctx->pc = 0x16B44Cu;
    // 0x16b44c: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_16b450:
    // 0x16b450: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16B450u;
    SET_GPR_U32(ctx, 31, 0x16B458u);
    ctx->pc = 0x16B454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B450u;
            // 0x16b454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B458u; }
        if (ctx->pc != 0x16B458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B458u; }
        if (ctx->pc != 0x16B458u) { return; }
    }
    ctx->pc = 0x16B458u;
label_16b458:
    // 0x16b458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B458u;
    {
        const bool branch_taken_0x16b458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b458) {
            ctx->pc = 0x16B468u;
            goto label_16b468;
        }
    }
    ctx->pc = 0x16B460u;
    // 0x16b460: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16B460u;
    {
        const bool branch_taken_0x16b460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B460u;
            // 0x16b464: 0xc600038c  lwc1        $f0, 0x38C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b460) {
            ctx->pc = 0x16B488u;
            goto label_16b488;
        }
    }
    ctx->pc = 0x16B468u;
label_16b468:
    // 0x16b468: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b46c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B46Cu;
    {
        const bool branch_taken_0x16b46c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B46Cu;
            // 0x16b470: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b46c) {
            ctx->pc = 0x16B450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b450;
        }
    }
    ctx->pc = 0x16B474u;
    // 0x16b474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B474u;
    {
        const bool branch_taken_0x16b474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b474) {
            ctx->pc = 0x16B484u;
            goto label_16b484;
        }
    }
    ctx->pc = 0x16B47Cu;
label_16b47c:
    // 0x16b47c: 0xc494038c  lwc1        $f20, 0x38C($a0)
    ctx->pc = 0x16b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b480: 0x0  nop
    ctx->pc = 0x16b480u;
    // NOP
label_16b484:
    // 0x16b484: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x16b484u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_16b488:
    // 0x16b488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b48c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b490: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b494: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b498: 0x3e00008  jr          $ra
    ctx->pc = 0x16B498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B498u;
            // 0x16b49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B4A0u;
}
