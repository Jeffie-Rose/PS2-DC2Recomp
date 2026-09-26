#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCursorPosition__9CShopMenuFv
// Address: 0x293f10 - 0x2940a0
void CalcCursorPosition__9CShopMenuFv_0x293f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCursorPosition__9CShopMenuFv_0x293f10");
#endif

    switch (ctx->pc) {
        case 0x293f6cu: goto label_293f6c;
        case 0x293fa8u: goto label_293fa8;
        case 0x293fc0u: goto label_293fc0;
        case 0x294008u: goto label_294008;
        case 0x294068u: goto label_294068;
        case 0x294074u: goto label_294074;
        case 0x294088u: goto label_294088;
        default: break;
    }

    ctx->pc = 0x293f10u;

    // 0x293f10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x293f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x293f14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x293f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293f18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x293f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x293f1c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x293f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293f20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x293f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x293f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x293f28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x293f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293f30: 0x27918428  addiu       $s1, $gp, -0x7BD8
    ctx->pc = 0x293f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935592));
    // 0x293f34: 0xdf829888  ld          $v0, -0x6778($gp)
    ctx->pc = 0x293f34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940808)));
    // 0x293f38: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x293f38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x293f3c: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x293f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x293f40: 0x1047001b  beq         $v0, $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x293F40u;
    {
        const bool branch_taken_0x293f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x293F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293F40u;
            // 0x293f44: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f40) {
            ctx->pc = 0x293FB0u;
            goto label_293fb0;
        }
    }
    ctx->pc = 0x293F48u;
    // 0x293f48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293F48u;
    {
        const bool branch_taken_0x293f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f48) {
            ctx->pc = 0x293F58u;
            goto label_293f58;
        }
    }
    ctx->pc = 0x293F50u;
    // 0x293f50: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x293F50u;
    {
        const bool branch_taken_0x293f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293F50u;
            // 0x293f54: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f50) {
            ctx->pc = 0x293FE4u;
            goto label_293fe4;
        }
    }
    ctx->pc = 0x293F58u;
label_293f58:
    // 0x293f58: 0xc64101d8  lwc1        $f1, 0x1D8($s2)
    ctx->pc = 0x293f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293f5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293f64: 0xc0a248c  jal         func_289230
    ctx->pc = 0x293F64u;
    SET_GPR_U32(ctx, 31, 0x293F6Cu);
    ctx->pc = 0x293F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293F64u;
            // 0x293f68: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293F6Cu; }
        if (ctx->pc != 0x293F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293F6Cu; }
        if (ctx->pc != 0x293F6Cu) { return; }
    }
    ctx->pc = 0x293F6Cu;
label_293f6c:
    // 0x293f6c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x293f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x293f70: 0x8e4301bc  lw          $v1, 0x1BC($s2)
    ctx->pc = 0x293f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x293f74: 0xc64001dc  lwc1        $f0, 0x1DC($s2)
    ctx->pc = 0x293f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293f78: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x293f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x293f7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x293f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293f80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x293f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x293f84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293f88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x293f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x293f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293f90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293f98: 0x0  nop
    ctx->pc = 0x293f98u;
    // NOP
    // 0x293f9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x293f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293fa0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x293FA0u;
    SET_GPR_U32(ctx, 31, 0x293FA8u);
    ctx->pc = 0x293FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293FA0u;
            // 0x293fa4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293FA8u; }
        if (ctx->pc != 0x293FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293FA8u; }
        if (ctx->pc != 0x293FA8u) { return; }
    }
    ctx->pc = 0x293FA8u;
label_293fa8:
    // 0x293fa8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x293FA8u;
    {
        const bool branch_taken_0x293fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293FA8u;
            // 0x293fac: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293fa8) {
            ctx->pc = 0x294008u;
            goto label_294008;
        }
    }
    ctx->pc = 0x293FB0u;
label_293fb0:
    // 0x293fb0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x293fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x293fb4: 0x8e4601b4  lw          $a2, 0x1B4($s2)
    ctx->pc = 0x293fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x293fb8: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x293FB8u;
    SET_GPR_U32(ctx, 31, 0x293FC0u);
    ctx->pc = 0x293FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293FB8u;
            // 0x293fbc: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293FC0u; }
        if (ctx->pc != 0x293FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293FC0u; }
        if (ctx->pc != 0x293FC0u) { return; }
    }
    ctx->pc = 0x293FC0u;
label_293fc0:
    // 0x293fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x293fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x293fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x293fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293fc8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x293fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x293fcc: 0x27918430  addiu       $s1, $gp, -0x7BD0
    ctx->pc = 0x293fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935600));
    // 0x293fd0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x293fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x293fd4: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x293fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x293fd8: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x293fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x293fdc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x293FDCu;
    {
        const bool branch_taken_0x293fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293FDCu;
            // 0x293fe0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293fdc) {
            ctx->pc = 0x294008u;
            goto label_294008;
        }
    }
    ctx->pc = 0x293FE4u;
label_293fe4:
    // 0x293fe4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293FE4u;
    {
        const bool branch_taken_0x293fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293fe4) {
            ctx->pc = 0x294008u;
            goto label_294008;
        }
    }
    ctx->pc = 0x293FECu;
    // 0x293fec: 0x864301c8  lh          $v1, 0x1C8($s2)
    ctx->pc = 0x293fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x293ff0: 0x27828438  addiu       $v0, $gp, -0x7BC8
    ctx->pc = 0x293ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935608));
    // 0x293ff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x293ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x293ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293ffc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x293ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294000: 0xc08974c  jal         func_225D30
    ctx->pc = 0x294000u;
    SET_GPR_U32(ctx, 31, 0x294008u);
    ctx->pc = 0x294004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294000u;
            // 0x294004: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294008u; }
        if (ctx->pc != 0x294008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294008u; }
        if (ctx->pc != 0x294008u) { return; }
    }
    ctx->pc = 0x294008u;
label_294008:
    // 0x294008: 0x9242020c  lbu         $v0, 0x20C($s2)
    ctx->pc = 0x294008u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x29400c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29400Cu;
    {
        const bool branch_taken_0x29400c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29400Cu;
            // 0x294010: 0x27a30044  addiu       $v1, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29400c) {
            ctx->pc = 0x294058u;
            goto label_294058;
        }
    }
    ctx->pc = 0x294014u;
    // 0x294014: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x294018: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x294018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29401c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294020: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x294024: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x294024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29402c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x29402cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x294030: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x294030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x294034: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x294034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x294038: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x294038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29403c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294040: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x294040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x294044: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x294044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29404c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x29404cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x294050: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x294050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x294054: 0xa240020c  sb          $zero, 0x20C($s2)
    ctx->pc = 0x294054u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 524), (uint8_t)GPR_U32(ctx, 0));
label_294058:
    // 0x294058: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x294058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x29405c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29405cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294060: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x294060u;
    SET_GPR_U32(ctx, 31, 0x294068u);
    ctx->pc = 0x294064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294060u;
            // 0x294064: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294068u; }
        if (ctx->pc != 0x294068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294068u; }
        if (ctx->pc != 0x294068u) { return; }
    }
    ctx->pc = 0x294068u;
label_294068:
    // 0x294068: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x294068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x29406c: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x29406Cu;
    SET_GPR_U32(ctx, 31, 0x294074u);
    ctx->pc = 0x294070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29406Cu;
            // 0x294070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294074u; }
        if (ctx->pc != 0x294074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294074u; }
        if (ctx->pc != 0x294074u) { return; }
    }
    ctx->pc = 0x294074u;
label_294074:
    // 0x294074: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x294074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x294078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29407c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x29407cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x294080: 0xc08f058  jal         func_23C160
    ctx->pc = 0x294080u;
    SET_GPR_U32(ctx, 31, 0x294088u);
    ctx->pc = 0x294084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294080u;
            // 0x294084: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C160u;
    if (runtime->hasFunction(0x23C160u)) {
        auto targetFn = runtime->lookupFunction(0x23C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294088u; }
        if (ctx->pc != 0x294088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuWH__12CMenuKeyFuncFiii_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294088u; }
        if (ctx->pc != 0x294088u) { return; }
    }
    ctx->pc = 0x294088u;
label_294088:
    // 0x294088: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29408c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29408cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294098: 0x3e00008  jr          $ra
    ctx->pc = 0x294098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294098u;
            // 0x29409c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2940A0u;
}
