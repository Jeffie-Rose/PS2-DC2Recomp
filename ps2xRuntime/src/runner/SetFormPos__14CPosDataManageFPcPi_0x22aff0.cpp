#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFormPos__14CPosDataManageFPcPi
// Address: 0x22aff0 - 0x22b034
void SetFormPos__14CPosDataManageFPcPi_0x22aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFormPos__14CPosDataManageFPcPi_0x22aff0");
#endif

    switch (ctx->pc) {
        case 0x22b004u: goto label_22b004;
        default: break;
    }

    ctx->pc = 0x22aff0u;

    // 0x22aff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22aff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22aff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22affc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22AFFCu;
    SET_GPR_U32(ctx, 31, 0x22B004u);
    ctx->pc = 0x22B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFFCu;
            // 0x22b000: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B004u; }
        if (ctx->pc != 0x22B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B004u; }
        if (ctx->pc != 0x22B004u) { return; }
    }
    ctx->pc = 0x22B004u;
label_22b004:
    // 0x22b004: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B004u;
    {
        const bool branch_taken_0x22b004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b004) {
            ctx->pc = 0x22B024u;
            goto label_22b024;
        }
    }
    ctx->pc = 0x22B00Cu;
    // 0x22b00c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x22b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b014: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x22b014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x22b018: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x22b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b01c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b01cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22b020: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x22b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_22b024:
    // 0x22b024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B02Cu;
            // 0x22b030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B034u;
}
