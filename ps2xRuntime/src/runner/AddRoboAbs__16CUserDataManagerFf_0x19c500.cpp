#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddRoboAbs__16CUserDataManagerFf
// Address: 0x19c500 - 0x19c554
void AddRoboAbs__16CUserDataManagerFf_0x19c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddRoboAbs__16CUserDataManagerFf_0x19c500");
#endif

    ctx->pc = 0x19c500u;

    // 0x19c500: 0xc480468c  lwc1        $f0, 0x468C($a0)
    ctx->pc = 0x19c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 18060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c504: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19c504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c508: 0x0  nop
    ctx->pc = 0x19c508u;
    // NOP
    // 0x19c50c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x19c50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x19c510: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19c510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c514: 0x0  nop
    ctx->pc = 0x19c514u;
    // NOP
    // 0x19c518: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19C518u;
    {
        const bool branch_taken_0x19c518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C518u;
            // 0x19c51c: 0xe480468c  swc1        $f0, 0x468C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 18060), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c518) {
            ctx->pc = 0x19C524u;
            goto label_19c524;
        }
    }
    ctx->pc = 0x19C520u;
    // 0x19c520: 0xe481468c  swc1        $f1, 0x468C($a0)
    ctx->pc = 0x19c520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 18060), bits); }
label_19c524:
    // 0x19c524: 0xc480468c  lwc1        $f0, 0x468C($a0)
    ctx->pc = 0x19c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 18060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c528: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x19c52c: 0x34424f80  ori         $v0, $v0, 0x4F80
    ctx->pc = 0x19c52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20352);
    // 0x19c530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c534: 0x0  nop
    ctx->pc = 0x19c534u;
    // NOP
    // 0x19c538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c53c: 0x0  nop
    ctx->pc = 0x19c53cu;
    // NOP
    // 0x19c540: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19C540u;
    {
        const bool branch_taken_0x19c540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c540) {
            ctx->pc = 0x19C54Cu;
            goto label_19c54c;
        }
    }
    ctx->pc = 0x19C548u;
    // 0x19c548: 0xe481468c  swc1        $f1, 0x468C($a0)
    ctx->pc = 0x19c548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 18060), bits); }
label_19c54c:
    // 0x19c54c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C54Cu;
            // 0x19c550: 0xc480468c  lwc1        $f0, 0x468C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 18060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C554u;
}
