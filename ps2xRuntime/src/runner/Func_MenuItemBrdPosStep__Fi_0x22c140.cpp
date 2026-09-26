#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Func_MenuItemBrdPosStep__Fi
// Address: 0x22c140 - 0x22c268
void Func_MenuItemBrdPosStep__Fi_0x22c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Func_MenuItemBrdPosStep__Fi_0x22c140");
#endif

    switch (ctx->pc) {
        case 0x22c170u: goto label_22c170;
        case 0x22c18cu: goto label_22c18c;
        case 0x22c210u: goto label_22c210;
        case 0x22c218u: goto label_22c218;
        case 0x22c254u: goto label_22c254;
        default: break;
    }

    ctx->pc = 0x22c140u;

    // 0x22c140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22c144: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22c144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22c148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c14c: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x22c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x22c150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22c154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22c158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c15c: 0xdf8282f8  ld          $v0, -0x7D08($gp)
    ctx->pc = 0x22c15cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935288)));
    // 0x22c160: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x22c160u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x22c164: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x22c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x22c168: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22C168u;
    SET_GPR_U32(ctx, 31, 0x22C170u);
    ctx->pc = 0x22C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C168u;
            // 0x22c16c: 0x24a5a6d0  addiu       $a1, $a1, -0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C170u; }
        if (ctx->pc != 0x22C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C170u; }
        if (ctx->pc != 0x22C170u) { return; }
    }
    ctx->pc = 0x22C170u;
label_22c170:
    // 0x22c170: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C170u;
    {
        const bool branch_taken_0x22c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c170) {
            ctx->pc = 0x22C18Cu;
            goto label_22c18c;
        }
    }
    ctx->pc = 0x22C178u;
    // 0x22c178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c180: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x22c180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x22c184: 0xc08974c  jal         func_225D30
    ctx->pc = 0x22C184u;
    SET_GPR_U32(ctx, 31, 0x22C18Cu);
    ctx->pc = 0x22C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C184u;
            // 0x22c188: 0x27a7003c  addiu       $a3, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C18Cu; }
        if (ctx->pc != 0x22C18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C18Cu; }
        if (ctx->pc != 0x22C18Cu) { return; }
    }
    ctx->pc = 0x22C18Cu;
label_22c18c:
    // 0x22c18c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x22c18cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c190: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x22c190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x22c194: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x22c194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c198: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c19c: 0x0  nop
    ctx->pc = 0x22c19cu;
    // NOP
    // 0x22c1a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22c1a4: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x22c1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x22c1a8: 0x838293f8  lb          $v0, -0x6C08($gp)
    ctx->pc = 0x22c1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939640)));
    // 0x22c1ac: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x22c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x22c1b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22c1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22c1b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c1b8: 0x0  nop
    ctx->pc = 0x22c1b8u;
    // NOP
    // 0x22c1bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22c1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22c1c0: 0xe7819410  swc1        $f1, -0x6BF0($gp)
    ctx->pc = 0x22c1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939664), bits); }
    // 0x22c1c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c1c8: 0x2463001a  addiu       $v1, $v1, 0x1A
    ctx->pc = 0x22c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x22c1cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c1d0: 0x0  nop
    ctx->pc = 0x22c1d0u;
    // NOP
    // 0x22c1d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22c1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22c1d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22c1d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c1dc: 0xe7819408  swc1        $f1, -0x6BF8($gp)
    ctx->pc = 0x22c1dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939656), bits); }
    // 0x22c1e0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22C1E0u;
    {
        const bool branch_taken_0x22c1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C1E0u;
            // 0x22c1e4: 0xe7809408  swc1        $f0, -0x6BF8($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1e0) {
            ctx->pc = 0x22C22Cu;
            goto label_22c22c;
        }
    }
    ctx->pc = 0x22C1E8u;
    // 0x22c1e8: 0xc7839408  lwc1        $f3, -0x6BF8($gp)
    ctx->pc = 0x22c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22c1ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x22c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x22c1f0: 0xc7829414  lwc1        $f2, -0x6BEC($gp)
    ctx->pc = 0x22c1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22c1f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c1f8: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x22c1f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x22c1fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22c1fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x22c200: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x22c200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22c204: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x22c204u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x22c208: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22C208u;
    SET_GPR_U32(ctx, 31, 0x22C210u);
    ctx->pc = 0x22C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C208u;
            // 0x22c20c: 0xe7809414  swc1        $f0, -0x6BEC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939668), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C210u; }
        if (ctx->pc != 0x22C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C210u; }
        if (ctx->pc != 0x22C210u) { return; }
    }
    ctx->pc = 0x22C210u;
label_22c210:
    // 0x22c210: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x22C210u;
    SET_GPR_U32(ctx, 31, 0x22C218u);
    ctx->pc = 0x22C214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C210u;
            // 0x22c214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C218u; }
        if (ctx->pc != 0x22C218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C218u; }
        if (ctx->pc != 0x22C218u) { return; }
    }
    ctx->pc = 0x22C218u;
label_22c218:
    // 0x22c218: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x22c218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22c21c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C21Cu;
    {
        const bool branch_taken_0x22c21c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c21c) {
            ctx->pc = 0x22C22Cu;
            goto label_22c22c;
        }
    }
    ctx->pc = 0x22C224u;
    // 0x22c224: 0xc7809408  lwc1        $f0, -0x6BF8($gp)
    ctx->pc = 0x22c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c228: 0xe7809414  swc1        $f0, -0x6BEC($gp)
    ctx->pc = 0x22c228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939668), bits); }
label_22c22c:
    // 0x22c22c: 0x838693f8  lb          $a2, -0x6C08($gp)
    ctx->pc = 0x22c22cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939640)));
    // 0x22c230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c234: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C234u;
    {
        const bool branch_taken_0x22c234 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c234) {
            ctx->pc = 0x22C244u;
            goto label_22c244;
        }
    }
    ctx->pc = 0x22C23Cu;
    // 0x22c23c: 0xc7809408  lwc1        $f0, -0x6BF8($gp)
    ctx->pc = 0x22c23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c240: 0xe7809414  swc1        $f0, -0x6BEC($gp)
    ctx->pc = 0x22c240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939668), bits); }
label_22c244:
    // 0x22c244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c24c: 0xc08b02c  jal         func_22C0B0
    ctx->pc = 0x22C24Cu;
    SET_GPR_U32(ctx, 31, 0x22C254u);
    ctx->pc = 0x22C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C24Cu;
            // 0x22c250: 0x24450012  addiu       $a1, $v0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C0B0u;
    if (runtime->hasFunction(0x22C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x22C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C254u; }
        if (ctx->pc != 0x22C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdScrlBarStep__Fiii_0x22c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C254u; }
        if (ctx->pc != 0x22C254u) { return; }
    }
    ctx->pc = 0x22C254u;
label_22c254:
    // 0x22c254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c260: 0x3e00008  jr          $ra
    ctx->pc = 0x22C260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C260u;
            // 0x22c264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C268u;
}
