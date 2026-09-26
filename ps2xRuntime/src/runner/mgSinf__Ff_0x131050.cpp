#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSinf__Ff
// Address: 0x131050 - 0x1310e8
void mgSinf__Ff_0x131050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSinf__Ff_0x131050");
#endif

    switch (ctx->pc) {
        case 0x131074u: goto label_131074;
        case 0x1310b0u: goto label_1310b0;
        default: break;
    }

    ctx->pc = 0x131050u;

    // 0x131050: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131054: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131058: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x131058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13105c: 0x0  nop
    ctx->pc = 0x13105cu;
    // NOP
    // 0x131060: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x131060u;
    {
        const bool branch_taken_0x131060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131060u;
            // 0x131064: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131060) {
            ctx->pc = 0x1310A0u;
            goto label_1310a0;
        }
    }
    ctx->pc = 0x131068u;
    // 0x131068: 0xc7808014  lwc1        $f0, -0x7FEC($gp)
    ctx->pc = 0x131068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13106c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13106Cu;
    SET_GPR_U32(ctx, 31, 0x131074u);
    ctx->pc = 0x131070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13106Cu;
            // 0x131070: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131074u; }
        if (ctx->pc != 0x131074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131074u; }
        if (ctx->pc != 0x131074u) { return; }
    }
    ctx->pc = 0x131074u;
label_131074:
    // 0x131074: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131074u;
    {
        const bool branch_taken_0x131074 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x131078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131074u;
            // 0x131078: 0x304303ff  andi        $v1, $v0, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131074) {
            ctx->pc = 0x131088u;
            goto label_131088;
        }
    }
    ctx->pc = 0x13107Cu;
    // 0x13107c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13107Cu;
    {
        const bool branch_taken_0x13107c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13107c) {
            ctx->pc = 0x131088u;
            goto label_131088;
        }
    }
    ctx->pc = 0x131084u;
    // 0x131084: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x131084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
label_131088:
    // 0x131088: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x131088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13108c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13108cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131090: 0x2442fd40  addiu       $v0, $v0, -0x2C0
    ctx->pc = 0x131090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x131094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131098: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x131098u;
    {
        const bool branch_taken_0x131098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131098u;
            // 0x13109c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131098) {
            ctx->pc = 0x1310DCu;
            goto label_1310dc;
        }
    }
    ctx->pc = 0x1310A0u;
label_1310a0:
    // 0x1310a0: 0xc7808014  lwc1        $f0, -0x7FEC($gp)
    ctx->pc = 0x1310a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1310a4: 0x46006047  neg.s       $f1, $f12
    ctx->pc = 0x1310a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[12]);
    // 0x1310a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1310A8u;
    SET_GPR_U32(ctx, 31, 0x1310B0u);
    ctx->pc = 0x1310ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1310A8u;
            // 0x1310ac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1310B0u; }
        if (ctx->pc != 0x1310B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1310B0u; }
        if (ctx->pc != 0x1310B0u) { return; }
    }
    ctx->pc = 0x1310B0u;
label_1310b0:
    // 0x1310b0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1310B0u;
    {
        const bool branch_taken_0x1310b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1310B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1310B0u;
            // 0x1310b4: 0x304303ff  andi        $v1, $v0, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310b0) {
            ctx->pc = 0x1310C4u;
            goto label_1310c4;
        }
    }
    ctx->pc = 0x1310B8u;
    // 0x1310b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1310B8u;
    {
        const bool branch_taken_0x1310b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1310b8) {
            ctx->pc = 0x1310C4u;
            goto label_1310c4;
        }
    }
    ctx->pc = 0x1310C0u;
    // 0x1310c0: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
label_1310c4:
    // 0x1310c4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1310c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1310c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1310c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1310cc: 0x2442fd40  addiu       $v0, $v0, -0x2C0
    ctx->pc = 0x1310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x1310d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1310d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1310d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1310d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1310d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1310d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1310dc:
    // 0x1310dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1310dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1310e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1310E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1310E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1310E0u;
            // 0x1310e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1310E8u;
}
