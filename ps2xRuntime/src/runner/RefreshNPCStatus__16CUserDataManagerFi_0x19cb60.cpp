#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RefreshNPCStatus__16CUserDataManagerFi
// Address: 0x19cb60 - 0x19ce98
void RefreshNPCStatus__16CUserDataManagerFi_0x19cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshNPCStatus__16CUserDataManagerFi_0x19cb60");
#endif

    switch (ctx->pc) {
        case 0x19cb90u: goto label_19cb90;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cc3cu: goto label_19cc3c;
        case 0x19cc48u: goto label_19cc48;
        case 0x19cc68u: goto label_19cc68;
        case 0x19cc70u: goto label_19cc70;
        case 0x19cc8cu: goto label_19cc8c;
        case 0x19ccc8u: goto label_19ccc8;
        case 0x19ccd8u: goto label_19ccd8;
        case 0x19cd08u: goto label_19cd08;
        case 0x19cd18u: goto label_19cd18;
        case 0x19cd30u: goto label_19cd30;
        case 0x19cd38u: goto label_19cd38;
        case 0x19cd44u: goto label_19cd44;
        case 0x19cde8u: goto label_19cde8;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce54u: goto label_19ce54;
        case 0x19ce5cu: goto label_19ce5c;
        default: break;
    }

    ctx->pc = 0x19cb60u;

    // 0x19cb60: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x19cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x19cb64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19cb68: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x19cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x19cb6c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19cb70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19cb74: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19cb74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19cb7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19cb80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19cb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19cb84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19cb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19cb88: 0xc064220  jal         func_190880
    ctx->pc = 0x19CB88u;
    SET_GPR_U32(ctx, 31, 0x19CB90u);
    ctx->pc = 0x19CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB88u;
            // 0x19cb8c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB90u; }
        if (ctx->pc != 0x19CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB90u; }
        if (ctx->pc != 0x19CB90u) { return; }
    }
    ctx->pc = 0x19CB90u;
label_19cb90:
    // 0x19cb90: 0xc064220  jal         func_190880
    ctx->pc = 0x19CB90u;
    SET_GPR_U32(ctx, 31, 0x19CB98u);
    ctx->pc = 0x19CB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB90u;
            // 0x19cb94: 0x8c561a14  lw          $s6, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB98u; }
        if (ctx->pc != 0x19CB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB98u; }
        if (ctx->pc != 0x19CB98u) { return; }
    }
    ctx->pc = 0x19CB98u;
label_19cb98:
    // 0x19cb98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x19cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x19cb9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cba0: 0x346651e0  ori         $a2, $v1, 0x51E0
    ctx->pc = 0x19cba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20960);
    // 0x19cba4: 0x346351e4  ori         $v1, $v1, 0x51E4
    ctx->pc = 0x19cba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20964);
    // 0x19cba8: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x19cba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x19cbac: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19cbb0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x19cbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19cbb4: 0xc4421a10  lwc1        $f2, 0x1A10($v0)
    ctx->pc = 0x19cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19cbb8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cbbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19cbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cbc0: 0x0  nop
    ctx->pc = 0x19cbc0u;
    // NOP
    // 0x19cbc4: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x19cbc4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x19cbc8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x19cbc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cbcc: 0x0  nop
    ctx->pc = 0x19cbccu;
    // NOP
    // 0x19cbd0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19CBD0u;
    {
        const bool branch_taken_0x19cbd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBD0u;
            // 0x19cbd4: 0x2c63023  subu        $a2, $s6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbd0) {
            ctx->pc = 0x19CBF0u;
            goto label_19cbf0;
        }
    }
    ctx->pc = 0x19CBD8u;
    // 0x19cbd8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x19cbdc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19cbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19cbe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19cbe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cbe4: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CBE4u;
    {
        const bool branch_taken_0x19cbe4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBE4u;
            // 0x19cbe8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbe4) {
            ctx->pc = 0x19CBF0u;
            goto label_19cbf0;
        }
    }
    ctx->pc = 0x19CBECu;
    // 0x19cbec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cbf0:
    // 0x19cbf0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19cbf0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cbf4: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x19cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x19cbf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19cbf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cbfc: 0x0  nop
    ctx->pc = 0x19cbfcu;
    // NOP
    // 0x19cc00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19cc04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19cc08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19cc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19cc0c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x19cc0cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x19cc10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19cc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cc14: 0x0  nop
    ctx->pc = 0x19cc14u;
    // NOP
    // 0x19cc18: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x19cc18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cc1c: 0x0  nop
    ctx->pc = 0x19cc1cu;
    // NOP
    // 0x19cc20: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19CC20u;
    {
        const bool branch_taken_0x19cc20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cc20) {
            ctx->pc = 0x19CC2Cu;
            goto label_19cc2c;
        }
    }
    ctx->pc = 0x19CC28u;
    // 0x19cc28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cc2c:
    // 0x19cc2c: 0x10e0008f  beqz        $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x19CC2Cu;
    {
        const bool branch_taken_0x19cc2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC2Cu;
            // 0x19cc30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc2c) {
            ctx->pc = 0x19CE6Cu;
            goto label_19ce6c;
        }
    }
    ctx->pc = 0x19CC34u;
    // 0x19cc34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19CC34u;
    SET_GPR_U32(ctx, 31, 0x19CC3Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC3Cu; }
        if (ctx->pc != 0x19CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC3Cu; }
        if (ctx->pc != 0x19CC3Cu) { return; }
    }
    ctx->pc = 0x19CC3Cu;
label_19cc3c:
    // 0x19cc3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19cc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc40: 0xc06724c  jal         func_19C930
    ctx->pc = 0x19CC40u;
    SET_GPR_U32(ctx, 31, 0x19CC48u);
    ctx->pc = 0x19CC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC40u;
            // 0x19cc44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C930u;
    if (runtime->hasFunction(0x19C930u)) {
        auto targetFn = runtime->lookupFunction(0x19C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC48u; }
        if (ctx->pc != 0x19CC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPartyCharaID__16CUserDataManagerFv_0x19c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC48u; }
        if (ctx->pc != 0x19CC48u) { return; }
    }
    ctx->pc = 0x19CC48u;
label_19cc48:
    // 0x19cc48: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x19cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19cc4c: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x19CC4Cu;
    {
        const bool branch_taken_0x19cc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC4Cu;
            // 0x19cc50: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc4c) {
            ctx->pc = 0x19CD28u;
            goto label_19cd28;
        }
    }
    ctx->pc = 0x19CC54u;
    // 0x19cc54: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x19CC54u;
    {
        const bool branch_taken_0x19cc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC54u;
            // 0x19cc58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc54) {
            ctx->pc = 0x19CD28u;
            goto label_19cd28;
        }
    }
    ctx->pc = 0x19CC5Cu;
    // 0x19cc5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19cc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19cc60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19cc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cc68:
    // 0x19cc68: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19CC68u;
    SET_GPR_U32(ctx, 31, 0x19CC70u);
    ctx->pc = 0x19CC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC68u;
            // 0x19cc6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC70u; }
        if (ctx->pc != 0x19CC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC70u; }
        if (ctx->pc != 0x19CC70u) { return; }
    }
    ctx->pc = 0x19CC70u;
label_19cc70:
    // 0x19cc70: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x19cc70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19cc74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19cc74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19cc7c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC7Cu;
    {
        const bool branch_taken_0x19cc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC7Cu;
            // 0x19cc80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc7c) {
            ctx->pc = 0x19CCA0u;
            goto label_19cca0;
        }
    }
    ctx->pc = 0x19CC84u;
    // 0x19cc84: 0xc066060  jal         func_198180
    ctx->pc = 0x19CC84u;
    SET_GPR_U32(ctx, 31, 0x19CC8Cu);
    ctx->pc = 0x198180u;
    if (runtime->hasFunction(0x198180u)) {
        auto targetFn = runtime->lookupFunction(0x198180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC8Cu; }
        if (ctx->pc != 0x19CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRepair__13CGameDataUsedFv_0x198180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC8Cu; }
        if (ctx->pc != 0x19CC8Cu) { return; }
    }
    ctx->pc = 0x19CC8Cu;
label_19cc8c:
    // 0x19cc8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CC8Cu;
    {
        const bool branch_taken_0x19cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CC8Cu;
            // 0x19cc90: 0x29d1021  addu        $v0, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc8c) {
            ctx->pc = 0x19CCA0u;
            goto label_19cca0;
        }
    }
    ctx->pc = 0x19CC94u;
    // 0x19cc94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19cc94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19cc98: 0xac530090  sw          $s3, 0x90($v0)
    ctx->pc = 0x19cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 19));
    // 0x19cc9c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x19cc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_19cca0:
    // 0x19cca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19cca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19cca4: 0x2a020090  slti        $v0, $s0, 0x90
    ctx->pc = 0x19cca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)144) ? 1 : 0);
    // 0x19cca8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19CCA8u;
    {
        const bool branch_taken_0x19cca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCA8u;
            // 0x19ccac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cca8) {
            ctx->pc = 0x19CC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19cc68;
        }
    }
    ctx->pc = 0x19CCB0u;
    // 0x19ccb0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x19ccb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19ccb4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x19CCB4u;
    {
        const bool branch_taken_0x19ccb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCB4u;
            // 0x19ccb8: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccb4) {
            ctx->pc = 0x19CD28u;
            goto label_19cd28;
        }
    }
    ctx->pc = 0x19CCBCu;
    // 0x19ccbc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x19CCBCu;
    {
        const bool branch_taken_0x19ccbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCBCu;
            // 0x19ccc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccbc) {
            ctx->pc = 0x19CCF8u;
            goto label_19ccf8;
        }
    }
    ctx->pc = 0x19CCC4u;
    // 0x19ccc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19ccc8:
    // 0x19ccc8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x19ccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19cccc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19ccccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ccd0: 0xc067288  jal         func_19CA20
    ctx->pc = 0x19CCD0u;
    SET_GPR_U32(ctx, 31, 0x19CCD8u);
    ctx->pc = 0x19CCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCD0u;
            // 0x19ccd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CA20u;
    if (runtime->hasFunction(0x19CA20u)) {
        auto targetFn = runtime->lookupFunction(0x19CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCD8u; }
        if (ctx->pc != 0x19CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseNpcAbility__16CUserDataManagerFiii_0x19ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCD8u; }
        if (ctx->pc != 0x19CCD8u) { return; }
    }
    ctx->pc = 0x19CCD8u;
label_19ccd8:
    // 0x19ccd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CCD8u;
    {
        const bool branch_taken_0x19ccd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ccd8) {
            ctx->pc = 0x19CCE8u;
            goto label_19cce8;
        }
    }
    ctx->pc = 0x19CCE0u;
    // 0x19cce0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CCE0u;
    {
        const bool branch_taken_0x19cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCE0u;
            // 0x19cce4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cce0) {
            ctx->pc = 0x19CCF8u;
            goto label_19ccf8;
        }
    }
    ctx->pc = 0x19CCE8u;
label_19cce8:
    // 0x19cce8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19ccec: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x19ccecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x19ccf0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19CCF0u;
    {
        const bool branch_taken_0x19ccf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCF0u;
            // 0x19ccf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccf0) {
            ctx->pc = 0x19CCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ccc8;
        }
    }
    ctx->pc = 0x19CCF8u;
label_19ccf8:
    // 0x19ccf8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x19ccf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19ccfc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19CCFCu;
    {
        const bool branch_taken_0x19ccfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CCFCu;
            // 0x19cd00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccfc) {
            ctx->pc = 0x19CD28u;
            goto label_19cd28;
        }
    }
    ctx->pc = 0x19CD04u;
    // 0x19cd04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19cd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cd08:
    // 0x19cd08: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x19cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x19cd0c: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x19cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x19cd10: 0xc06609c  jal         func_198270
    ctx->pc = 0x19CD10u;
    SET_GPR_U32(ctx, 31, 0x19CD18u);
    ctx->pc = 0x19CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD10u;
            // 0x19cd14: 0x112840  sll         $a1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD18u; }
        if (ctx->pc != 0x19CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD18u; }
        if (ctx->pc != 0x19CD18u) { return; }
    }
    ctx->pc = 0x19CD18u;
label_19cd18:
    // 0x19cd18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19cd18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19cd1c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x19cd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19cd20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19CD20u;
    {
        const bool branch_taken_0x19cd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD20u;
            // 0x19cd24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd20) {
            ctx->pc = 0x19CD08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19cd08;
        }
    }
    ctx->pc = 0x19CD28u;
label_19cd28:
    // 0x19cd28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cd2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19cd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cd30:
    // 0x19cd30: 0xc067278  jal         func_19C9E0
    ctx->pc = 0x19CD30u;
    SET_GPR_U32(ctx, 31, 0x19CD38u);
    ctx->pc = 0x19CD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD30u;
            // 0x19cd34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E0u;
    if (runtime->hasFunction(0x19C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD38u; }
        if (ctx->pc != 0x19CD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaInfo__16CUserDataManagerFi_0x19c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD38u; }
        if (ctx->pc != 0x19CD38u) { return; }
    }
    ctx->pc = 0x19CD38u;
label_19cd38:
    // 0x19cd38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19cd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd3c: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x19CD3Cu;
    SET_GPR_U32(ctx, 31, 0x19CD44u);
    ctx->pc = 0x19CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD3Cu;
            // 0x19cd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD44u; }
        if (ctx->pc != 0x19CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD44u; }
        if (ctx->pc != 0x19CD44u) { return; }
    }
    ctx->pc = 0x19CD44u;
label_19cd44:
    // 0x19cd44: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x19CD44u;
    {
        const bool branch_taken_0x19cd44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD44u;
            // 0x19cd48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd44) {
            ctx->pc = 0x19CE0Cu;
            goto label_19ce0c;
        }
    }
    ctx->pc = 0x19CD4Cu;
    // 0x19cd4c: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x19CD4Cu;
    {
        const bool branch_taken_0x19cd4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd4c) {
            ctx->pc = 0x19CE0Cu;
            goto label_19ce0c;
        }
    }
    ctx->pc = 0x19CD54u;
    // 0x19cd54: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x19cd54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19cd58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19cd5c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x19CD5Cu;
    {
        const bool branch_taken_0x19cd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cd5c) {
            ctx->pc = 0x19CE0Cu;
            goto label_19ce0c;
        }
    }
    ctx->pc = 0x19CD64u;
    // 0x19cd64: 0x8246002f  lb          $a2, 0x2F($s2)
    ctx->pc = 0x19cd64u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
    // 0x19cd68: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x19cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x19cd6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19cd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cd70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19cd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cd78: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x19cd78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19cd7c: 0x0  nop
    ctx->pc = 0x19cd7cu;
    // NOP
    // 0x19cd80: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19cd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19cd84: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x19cd84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x19cd88: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x19cd88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19cd8c: 0x0  nop
    ctx->pc = 0x19cd8cu;
    // NOP
    // 0x19cd90: 0x0  nop
    ctx->pc = 0x19cd90u;
    // NOP
    // 0x19cd94: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19cd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cd98: 0x0  nop
    ctx->pc = 0x19cd98u;
    // NOP
    // 0x19cd9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19CD9Cu;
    {
        const bool branch_taken_0x19cd9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cd9c) {
            ctx->pc = 0x19CDA8u;
            goto label_19cda8;
        }
    }
    ctx->pc = 0x19CDA4u;
    // 0x19cda4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x19cda4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_19cda8:
    // 0x19cda8: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x19cda8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19cdac: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x19cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x19cdb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cdb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19cdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cdb8: 0x0  nop
    ctx->pc = 0x19cdb8u;
    // NOP
    // 0x19cdbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19cdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cdc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19cdc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19cdc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19cdc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cdc8: 0x0  nop
    ctx->pc = 0x19cdc8u;
    // NOP
    // 0x19cdcc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19CDCCu;
    {
        const bool branch_taken_0x19cdcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDCCu;
            // 0x19cdd0: 0x6163c  dsll32      $v0, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdcc) {
            ctx->pc = 0x19CDE0u;
            goto label_19cde0;
        }
    }
    ctx->pc = 0x19CDD4u;
    // 0x19cdd4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19cdd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19cdd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19CDD8u;
    {
        const bool branch_taken_0x19cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDD8u;
            // 0x19cddc: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdd8) {
            ctx->pc = 0x19CDECu;
            goto label_19cdec;
        }
    }
    ctx->pc = 0x19CDE0u;
label_19cde0:
    // 0x19cde0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19CDE0u;
    SET_GPR_U32(ctx, 31, 0x19CDE8u);
    ctx->pc = 0x19CDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDE0u;
            // 0x19cde4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDE8u; }
        if (ctx->pc != 0x19CDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CDE8u; }
        if (ctx->pc != 0x19CDE8u) { return; }
    }
    ctx->pc = 0x19CDE8u;
label_19cde8:
    // 0x19cde8: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x19cde8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_19cdec:
    // 0x19cdec: 0x0  nop
    ctx->pc = 0x19cdecu;
    // NOP
    // 0x19cdf0: 0x8243002f  lb          $v1, 0x2F($s2)
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
    // 0x19cdf4: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x19cdf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19cdf8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19cdf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19cdfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CDFCu;
    {
        const bool branch_taken_0x19cdfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDFCu;
            // 0x19ce00: 0x3163c  dsll32      $v0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdfc) {
            ctx->pc = 0x19CE0Cu;
            goto label_19ce0c;
        }
    }
    ctx->pc = 0x19CE04u;
    // 0x19ce04: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19ce04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19ce08: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x19ce08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_19ce0c:
    // 0x19ce0c: 0x0  nop
    ctx->pc = 0x19ce0cu;
    // NOP
    // 0x19ce10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19ce10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19ce14: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x19ce14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19ce18: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x19CE18u;
    {
        const bool branch_taken_0x19ce18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE18u;
            // 0x19ce1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce18) {
            ctx->pc = 0x19CD30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19cd30;
        }
    }
    ctx->pc = 0x19CE20u;
    // 0x19ce20: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ce20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19ce24: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x19ce24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x19ce28: 0xdc244dc8  ld          $a0, 0x4DC8($at)
    ctx->pc = 0x19ce28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 19912)));
    // 0x19ce2c: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x19CE2Cu;
    SET_GPR_U32(ctx, 31, 0x19CE34u);
    ctx->pc = 0x19CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE2Cu;
            // 0x19ce30: 0x24050534  addiu       $a1, $zero, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE34u; }
        if (ctx->pc != 0x19CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE34u; }
        if (ctx->pc != 0x19CE34u) { return; }
    }
    ctx->pc = 0x19CE34u;
label_19ce34:
    // 0x19ce34: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19ce38: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x19ce3c: 0xfc224dc8  sd          $v0, 0x4DC8($at)
    ctx->pc = 0x19ce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 19912), GPR_U64(ctx, 2));
    // 0x19ce40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19ce40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19ce44: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ce44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19ce48: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x19ce4c: 0xc0945e0  jal         func_251780
    ctx->pc = 0x19CE4Cu;
    SET_GPR_U32(ctx, 31, 0x19CE54u);
    ctx->pc = 0x19CE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE4Cu;
            // 0x19ce50: 0xac3651e0  sw          $s6, 0x51E0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 20960), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251780u;
    if (runtime->hasFunction(0x251780u)) {
        auto targetFn = runtime->lookupFunction(0x251780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE54u; }
        if (ctx->pc != 0x19CE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloatCommaValue__Ff_0x251780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE54u; }
        if (ctx->pc != 0x19CE54u) { return; }
    }
    ctx->pc = 0x19CE54u;
label_19ce54:
    // 0x19ce54: 0xc064220  jal         func_190880
    ctx->pc = 0x19CE54u;
    SET_GPR_U32(ctx, 31, 0x19CE5Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE5Cu; }
        if (ctx->pc != 0x19CE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE5Cu; }
        if (ctx->pc != 0x19CE5Cu) { return; }
    }
    ctx->pc = 0x19CE5Cu;
label_19ce5c:
    // 0x19ce5c: 0xc4401a10  lwc1        $f0, 0x1A10($v0)
    ctx->pc = 0x19ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ce60: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19ce64: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x19ce68: 0xe42051e4  swc1        $f0, 0x51E4($at)
    ctx->pc = 0x19ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20964), bits); }
label_19ce6c:
    // 0x19ce6c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19ce6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19ce70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19ce74: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19ce74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ce78: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19ce78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ce7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19ce7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ce80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19ce80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ce84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19ce84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ce88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19ce88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ce8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ce8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ce90: 0x3e00008  jr          $ra
    ctx->pc = 0x19CE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE90u;
            // 0x19ce94: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CE98u;
}
