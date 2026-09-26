#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetShowHari__Fv
// Address: 0x310280 - 0x3102d8
void GetShowHari__Fv_0x310280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetShowHari__Fv_0x310280");
#endif

    switch (ctx->pc) {
        case 0x310294u: goto label_310294;
        case 0x31029cu: goto label_31029c;
        default: break;
    }

    ctx->pc = 0x310280u;

    // 0x310280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x310284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310288: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x310288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31028c: 0xc0c407c  jal         func_3101F0
    ctx->pc = 0x31028Cu;
    SET_GPR_U32(ctx, 31, 0x310294u);
    ctx->pc = 0x310290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31028Cu;
            // 0x310290: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3101F0u;
    if (runtime->hasFunction(0x3101F0u)) {
        auto targetFn = runtime->lookupFunction(0x3101F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310294u; }
        if (ctx->pc != 0x310294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHariPos__FPfPf_0x3101f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310294u; }
        if (ctx->pc != 0x310294u) { return; }
    }
    ctx->pc = 0x310294u;
label_310294:
    // 0x310294: 0xc0c3e78  jal         func_30F9E0
    ctx->pc = 0x310294u;
    SET_GPR_U32(ctx, 31, 0x31029Cu);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31029Cu; }
        if (ctx->pc != 0x31029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31029Cu; }
        if (ctx->pc != 0x31029Cu) { return; }
    }
    ctx->pc = 0x31029Cu;
label_31029c:
    // 0x31029c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3102a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3102a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3102a4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3102a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3102a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3102a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3102ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3102acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3102b0: 0x0  nop
    ctx->pc = 0x3102b0u;
    // NOP
    // 0x3102b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3102B4u;
    {
        const bool branch_taken_0x3102b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3102B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102B4u;
            // 0x3102b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102b4) {
            ctx->pc = 0x3102C4u;
            goto label_3102c4;
        }
    }
    ctx->pc = 0x3102BCu;
    // 0x3102bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3102BCu;
    {
        const bool branch_taken_0x3102bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102BCu;
            // 0x3102c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102bc) {
            ctx->pc = 0x3102D0u;
            goto label_3102d0;
        }
    }
    ctx->pc = 0x3102C4u;
label_3102c4:
    // 0x3102c4: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x3102c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x3102c8: 0x0  nop
    ctx->pc = 0x3102c8u;
    // NOP
    // 0x3102cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3102ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3102d0:
    // 0x3102d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3102D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3102D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3102D0u;
            // 0x3102d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3102D8u;
}
