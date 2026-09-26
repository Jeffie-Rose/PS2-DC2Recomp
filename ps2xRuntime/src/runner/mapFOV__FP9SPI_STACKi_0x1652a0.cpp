#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFOV__FP9SPI_STACKi
// Address: 0x1652a0 - 0x165300
void mapFOV__FP9SPI_STACKi_0x1652a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFOV__FP9SPI_STACKi_0x1652a0");
#endif

    switch (ctx->pc) {
        case 0x1652d0u: goto label_1652d0;
        default: break;
    }

    ctx->pc = 0x1652a0u;

    // 0x1652a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1652a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1652a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1652a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1652a8: 0x8f84896c  lw          $a0, -0x7694($gp)
    ctx->pc = 0x1652a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1652ac: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1652ACu;
    {
        const bool branch_taken_0x1652ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1652B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1652ACu;
            // 0x1652b0: 0x3c023ee8  lui         $v0, 0x3EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652ac) {
            ctx->pc = 0x1652BCu;
            goto label_1652bc;
        }
    }
    ctx->pc = 0x1652B4u;
    // 0x1652b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1652B4u;
    {
        const bool branch_taken_0x1652b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1652B4u;
            // 0x1652b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652b4) {
            ctx->pc = 0x1652F4u;
            goto label_1652f4;
        }
    }
    ctx->pc = 0x1652BCu;
label_1652bc:
    // 0x1652bc: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1652bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1652c0: 0x34425697  ori         $v0, $v0, 0x5697
    ctx->pc = 0x1652c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22167);
    // 0x1652c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1652c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1652c8: 0xc047a7e  jal         func_11E9F8
    ctx->pc = 0x1652C8u;
    SET_GPR_U32(ctx, 31, 0x1652D0u);
    ctx->pc = 0x1652CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1652C8u;
            // 0x1652cc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E9F8u;
    if (runtime->hasFunction(0x11E9F8u)) {
        auto targetFn = runtime->lookupFunction(0x11E9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652D0u; }
        if (ctx->pc != 0x1652D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tanf_0x11e9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1652D0u; }
        if (ctx->pc != 0x1652D0u) { return; }
    }
    ctx->pc = 0x1652D0u;
label_1652d0:
    // 0x1652d0: 0xc7828780  lwc1        $f2, -0x7880($gp)
    ctx->pc = 0x1652d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1652d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1652d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1652d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1652d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1652dc: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x1652dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1652e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1652e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1652e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1652e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1652e8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1652e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1652ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1652ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1652f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1652f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1652f4:
    // 0x1652f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1652f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1652f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1652F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1652FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1652F8u;
            // 0x1652fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165300u;
}
