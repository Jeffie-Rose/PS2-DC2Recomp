#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdataScrlBar__9CShopMenuFv
// Address: 0x292040 - 0x292134
void UpdataScrlBar__9CShopMenuFv_0x292040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdataScrlBar__9CShopMenuFv_0x292040");
#endif

    switch (ctx->pc) {
        case 0x292064u: goto label_292064;
        case 0x292078u: goto label_292078;
        case 0x29208cu: goto label_29208c;
        default: break;
    }

    ctx->pc = 0x292040u;

    // 0x292040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29204c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29204cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292050: 0x8c840138  lw          $a0, 0x138($a0)
    ctx->pc = 0x292050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x292054: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x292054u;
    {
        const bool branch_taken_0x292054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292054u;
            // 0x292058: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292054) {
            ctx->pc = 0x292124u;
            goto label_292124;
        }
    }
    ctx->pc = 0x29205Cu;
    // 0x29205c: 0xc089664  jal         func_225990
    ctx->pc = 0x29205Cu;
    SET_GPR_U32(ctx, 31, 0x292064u);
    ctx->pc = 0x292060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29205Cu;
            // 0x292060: 0x24a5d978  addiu       $a1, $a1, -0x2688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292064u; }
        if (ctx->pc != 0x292064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292064u; }
        if (ctx->pc != 0x292064u) { return; }
    }
    ctx->pc = 0x292064u;
label_292064:
    // 0x292064: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x292064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x292068: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29206c: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x29206cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x292070: 0xc089664  jal         func_225990
    ctx->pc = 0x292070u;
    SET_GPR_U32(ctx, 31, 0x292078u);
    ctx->pc = 0x292074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292070u;
            // 0x292074: 0x24a5d980  addiu       $a1, $a1, -0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292078u; }
        if (ctx->pc != 0x292078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292078u; }
        if (ctx->pc != 0x292078u) { return; }
    }
    ctx->pc = 0x292078u;
label_292078:
    // 0x292078: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x292078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x29207c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29207cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292080: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x292080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x292084: 0xc089664  jal         func_225990
    ctx->pc = 0x292084u;
    SET_GPR_U32(ctx, 31, 0x29208Cu);
    ctx->pc = 0x292088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292084u;
            // 0x292088: 0x24a5d988  addiu       $a1, $a1, -0x2678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29208Cu; }
        if (ctx->pc != 0x29208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29208Cu; }
        if (ctx->pc != 0x29208Cu) { return; }
    }
    ctx->pc = 0x29208Cu;
label_29208c:
    // 0x29208c: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x29208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x292090: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x292090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x292094: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x292094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292098: 0x8f839840  lw          $v1, -0x67C0($gp)
    ctx->pc = 0x292098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x29209c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x29209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2920a0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2920a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2920a4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2920a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2920a8: 0x0  nop
    ctx->pc = 0x2920a8u;
    // NOP
    // 0x2920ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2920ACu;
    {
        const bool branch_taken_0x2920ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2920B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2920ACu;
            // 0x2920b0: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920ac) {
            ctx->pc = 0x2920BCu;
            goto label_2920bc;
        }
    }
    ctx->pc = 0x2920B4u;
    // 0x2920b4: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2920b4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2920b8: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x2920b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_2920bc:
    // 0x2920bc: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x2920bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x2920c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2920c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2920c4: 0x0  nop
    ctx->pc = 0x2920c4u;
    // NOP
    // 0x2920c8: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x2920c8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x2920cc: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x2920ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x2920d0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2920d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2920d4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2920d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2920d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2920d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2920dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2920dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2920e0: 0x0  nop
    ctx->pc = 0x2920e0u;
    // NOP
    // 0x2920e4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2920e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2920e8: 0x0  nop
    ctx->pc = 0x2920e8u;
    // NOP
    // 0x2920ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2920ECu;
    {
        const bool branch_taken_0x2920ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2920F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2920ECu;
            // 0x2920f0: 0x46012082  mul.s       $f2, $f4, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920ec) {
            ctx->pc = 0x292104u;
            goto label_292104;
        }
    }
    ctx->pc = 0x2920F4u;
    // 0x2920f4: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x2920f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2920f8: 0x0  nop
    ctx->pc = 0x2920f8u;
    // NOP
    // 0x2920fc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2920fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x292100: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x292100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_292104:
    // 0x292104: 0x8e05012c  lw          $a1, 0x12C($s0)
    ctx->pc = 0x292104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x292108: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x29210c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x29210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x292110: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x292110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292114: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x292114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292118: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x292118u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x29211c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29211cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x292120: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x292120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_292124:
    // 0x292124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29212c: 0x3e00008  jr          $ra
    ctx->pc = 0x29212Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29212Cu;
            // 0x292130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x292134u;
}
