#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMenuAdd__FPfff
// Address: 0x2515c0 - 0x251644
void CalcMenuAdd__FPfff_0x2515c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMenuAdd__FPfff_0x2515c0");
#endif

    ctx->pc = 0x2515c0u;

    // 0x2515c0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2515C0u;
    {
        const bool branch_taken_0x2515c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2515C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2515C0u;
            // 0x2515c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515c0) {
            ctx->pc = 0x2515D0u;
            goto label_2515d0;
        }
    }
    ctx->pc = 0x2515C8u;
    // 0x2515c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2515C8u;
    {
        const bool branch_taken_0x2515c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515c8) {
            ctx->pc = 0x25163Cu;
            goto label_25163c;
        }
    }
    ctx->pc = 0x2515D0u;
label_2515d0:
    // 0x2515d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2515d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2515d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2515d8: 0x0  nop
    ctx->pc = 0x2515d8u;
    // NOP
    // 0x2515dc: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x2515dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2515e0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2515e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2515e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2515E4u;
    {
        const bool branch_taken_0x2515e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2515E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2515E4u;
            // 0x2515e8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515e4) {
            ctx->pc = 0x251600u;
            goto label_251600;
        }
    }
    ctx->pc = 0x2515ECu;
    // 0x2515ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2515ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2515f0: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2515f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2515f4: 0x0  nop
    ctx->pc = 0x2515f4u;
    // NOP
    // 0x2515f8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2515F8u;
    {
        const bool branch_taken_0x2515f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2515f8) {
            ctx->pc = 0x25162Cu;
            goto label_25162c;
        }
    }
    ctx->pc = 0x251600u;
label_251600:
    // 0x251600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x251600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251604: 0x0  nop
    ctx->pc = 0x251604u;
    // NOP
    // 0x251608: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x251608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25160c: 0x0  nop
    ctx->pc = 0x25160cu;
    // NOP
    // 0x251610: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x251610u;
    {
        const bool branch_taken_0x251610 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251610u;
            // 0x251614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251610) {
            ctx->pc = 0x25163Cu;
            goto label_25163c;
        }
    }
    ctx->pc = 0x251618u;
    // 0x251618: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x251618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25161c: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x25161cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251620: 0x0  nop
    ctx->pc = 0x251620u;
    // NOP
    // 0x251624: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x251624u;
    {
        const bool branch_taken_0x251624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x251624) {
            ctx->pc = 0x251638u;
            goto label_251638;
        }
    }
    ctx->pc = 0x25162Cu;
label_25162c:
    // 0x25162c: 0xe48d0000  swc1        $f13, 0x0($a0)
    ctx->pc = 0x25162cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x251630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251630u;
    {
        const bool branch_taken_0x251630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251630u;
            // 0x251634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251630) {
            ctx->pc = 0x25163Cu;
            goto label_25163c;
        }
    }
    ctx->pc = 0x251638u;
label_251638:
    // 0x251638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25163c:
    // 0x25163c: 0x3e00008  jr          $ra
    ctx->pc = 0x25163Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251644u;
}
