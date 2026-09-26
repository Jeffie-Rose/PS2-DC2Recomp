#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetMasterVol__Fif
// Address: 0x18d1e0 - 0x18d270
void sndSetMasterVol__Fif_0x18d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetMasterVol__Fif_0x18d1e0");
#endif

    switch (ctx->pc) {
        case 0x18d254u: goto label_18d254;
        default: break;
    }

    ctx->pc = 0x18d1e0u;

    // 0x18d1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d1e8: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18D1E8u;
    {
        const bool branch_taken_0x18d1e8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18D1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1E8u;
            // 0x18d1ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1e8) {
            ctx->pc = 0x18D260u;
            goto label_18d260;
        }
    }
    ctx->pc = 0x18D1F0u;
    // 0x18d1f0: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x18d1f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18d1f4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1F4u;
    {
        const bool branch_taken_0x18d1f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d1f4) {
            ctx->pc = 0x18D204u;
            goto label_18d204;
        }
    }
    ctx->pc = 0x18D1FCu;
    // 0x18d1fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18D1FCu;
    {
        const bool branch_taken_0x18d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1FCu;
            // 0x18d200: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1fc) {
            ctx->pc = 0x18D264u;
            goto label_18d264;
        }
    }
    ctx->pc = 0x18D204u;
label_18d204:
    // 0x18d204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d208: 0x0  nop
    ctx->pc = 0x18d208u;
    // NOP
    // 0x18d20c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18d20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d210: 0x0  nop
    ctx->pc = 0x18d210u;
    // NOP
    // 0x18d214: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D214u;
    {
        const bool branch_taken_0x18d214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D214u;
            // 0x18d218: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d214) {
            ctx->pc = 0x18D224u;
            goto label_18d224;
        }
    }
    ctx->pc = 0x18D21Cu;
    // 0x18d21c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18d21cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x18d220: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d224:
    // 0x18d224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d228: 0x0  nop
    ctx->pc = 0x18d228u;
    // NOP
    // 0x18d22c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18d22cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d230: 0x0  nop
    ctx->pc = 0x18d230u;
    // NOP
    // 0x18d234: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D234u;
    {
        const bool branch_taken_0x18d234 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D234u;
            // 0x18d238: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d234) {
            ctx->pc = 0x18D244u;
            goto label_18d244;
        }
    }
    ctx->pc = 0x18D23Cu;
    // 0x18d23c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18d23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x18d240: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x18d240u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18d244:
    // 0x18d244: 0x27828040  addiu       $v0, $gp, -0x7FC0
    ctx->pc = 0x18d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934592));
    // 0x18d248: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18d24c: 0xc063410  jal         func_18D040
    ctx->pc = 0x18D24Cu;
    SET_GPR_U32(ctx, 31, 0x18D254u);
    ctx->pc = 0x18D250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D24Cu;
            // 0x18d250: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D040u;
    if (runtime->hasFunction(0x18D040u)) {
        auto targetFn = runtime->lookupFunction(0x18D040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D254u; }
        if (ctx->pc != 0x18D254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMasterVol__Fif_0x18d040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D254u; }
        if (ctx->pc != 0x18D254u) { return; }
    }
    ctx->pc = 0x18D254u;
label_18d254:
    // 0x18d254: 0x27838048  addiu       $v1, $gp, -0x7FB8
    ctx->pc = 0x18d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934600));
    // 0x18d258: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18d258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18d25c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_18d260:
    // 0x18d260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d264:
    // 0x18d264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d268: 0x3e00008  jr          $ra
    ctx->pc = 0x18D268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D268u;
            // 0x18d26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D270u;
}
