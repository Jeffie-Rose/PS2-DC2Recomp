#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsReference__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b890 - 0x25ba8c
void scsReference__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsReference__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b890");
#endif

    switch (ctx->pc) {
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b910u: goto label_25b910;
        case 0x25b94cu: goto label_25b94c;
        case 0x25b960u: goto label_25b960;
        default: break;
    }

    ctx->pc = 0x25b890u;

    // 0x25b890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25b894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25b898: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25b89c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25b8a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25b8a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b8a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25b8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25b8a8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x25b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25b8ac: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x25b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x25b8b0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x25b8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25b8b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B8B4u;
    {
        const bool branch_taken_0x25b8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8B4u;
            // 0x25b8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8b4) {
            ctx->pc = 0x25B8D8u;
            goto label_25b8d8;
        }
    }
    ctx->pc = 0x25B8BCu;
    // 0x25b8bc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B8BCu;
    {
        const bool branch_taken_0x25b8bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x25B8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8BCu;
            // 0x25b8c0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8bc) {
            ctx->pc = 0x25B8CCu;
            goto label_25b8cc;
        }
    }
    ctx->pc = 0x25B8C4u;
    // 0x25b8c4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25B8C4u;
    SET_GPR_U32(ctx, 31, 0x25B8CCu);
    ctx->pc = 0x25B8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8C4u;
            // 0x25b8c8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8CCu; }
        if (ctx->pc != 0x25B8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8CCu; }
        if (ctx->pc != 0x25B8CCu) { return; }
    }
    ctx->pc = 0x25B8CCu;
label_25b8cc:
    // 0x25b8cc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x25b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x25b8d0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x25B8D0u;
    {
        const bool branch_taken_0x25b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8D0u;
            // 0x25b8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b8d0) {
            ctx->pc = 0x25BA74u;
            goto label_25ba74;
        }
    }
    ctx->pc = 0x25B8D8u;
label_25b8d8:
    // 0x25b8d8: 0x1c800043  bgtz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x25B8D8u;
    {
        const bool branch_taken_0x25b8d8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x25b8d8) {
            ctx->pc = 0x25B9E8u;
            goto label_25b9e8;
        }
    }
    ctx->pc = 0x25B8E0u;
    // 0x25b8e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25b8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25b8e4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x25B8E4u;
    SET_GPR_U32(ctx, 31, 0x25B8ECu);
    ctx->pc = 0x25B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8E4u;
            // 0x25b8e8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8ECu; }
        if (ctx->pc != 0x25B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8ECu; }
        if (ctx->pc != 0x25B8ECu) { return; }
    }
    ctx->pc = 0x25B8ECu;
label_25b8ec:
    // 0x25b8ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b8f0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25b8f4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25B8F4u;
    SET_GPR_U32(ctx, 31, 0x25B8FCu);
    ctx->pc = 0x25B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B8F4u;
            // 0x25b8f8: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8FCu; }
        if (ctx->pc != 0x25B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B8FCu; }
        if (ctx->pc != 0x25B8FCu) { return; }
    }
    ctx->pc = 0x25B8FCu;
label_25b8fc:
    // 0x25b8fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b900: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x25b900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x25b904: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b908: 0xc041be0  jal         func_106F80
    ctx->pc = 0x25B908u;
    SET_GPR_U32(ctx, 31, 0x25B910u);
    ctx->pc = 0x25B90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B908u;
            // 0x25b90c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B910u; }
        if (ctx->pc != 0x25B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B910u; }
        if (ctx->pc != 0x25B910u) { return; }
    }
    ctx->pc = 0x25B910u;
label_25b910:
    // 0x25b910: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x25b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b914: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x25b914u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x25b918: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x25b918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b91c: 0x0  nop
    ctx->pc = 0x25b91cu;
    // NOP
    // 0x25b920: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25B920u;
    {
        const bool branch_taken_0x25b920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b920) {
            ctx->pc = 0x25B93Cu;
            goto label_25b93c;
        }
    }
    ctx->pc = 0x25B928u;
    // 0x25b928: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b92c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25b92cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b930: 0x0  nop
    ctx->pc = 0x25b930u;
    // NOP
    // 0x25b934: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25B934u;
    {
        const bool branch_taken_0x25b934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B934u;
            // 0x25b938: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b934) {
            ctx->pc = 0x25B954u;
            goto label_25b954;
        }
    }
    ctx->pc = 0x25B93Cu;
label_25b93c:
    // 0x25b93c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b940: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x25b940u;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
    // 0x25b944: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x25B944u;
    SET_GPR_U32(ctx, 31, 0x25B94Cu);
    ctx->pc = 0x25B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B944u;
            // 0x25b948: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B94Cu; }
        if (ctx->pc != 0x25B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B94Cu; }
        if (ctx->pc != 0x25B94Cu) { return; }
    }
    ctx->pc = 0x25B94Cu;
label_25b94c:
    // 0x25b94c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25b94cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25b950: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x25b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_25b954:
    // 0x25b954: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25b958: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25B958u;
    SET_GPR_U32(ctx, 31, 0x25B960u);
    ctx->pc = 0x25B95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B958u;
            // 0x25b95c: 0xe7b40054  swc1        $f20, 0x54($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B960u; }
        if (ctx->pc != 0x25B960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B960u; }
        if (ctx->pc != 0x25B960u) { return; }
    }
    ctx->pc = 0x25B960u;
label_25b960:
    // 0x25b960: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x25b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b964: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b968: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x25b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b96c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b974: 0x0  nop
    ctx->pc = 0x25b974u;
    // NOP
    // 0x25b978: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x25b978u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x25b97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b980: 0x0  nop
    ctx->pc = 0x25b980u;
    // NOP
    // 0x25b984: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25B984u;
    {
        const bool branch_taken_0x25b984 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B984u;
            // 0x25b988: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b984) {
            ctx->pc = 0x25B9A0u;
            goto label_25b9a0;
        }
    }
    ctx->pc = 0x25B98Cu;
    // 0x25b98c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b990: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b998: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25B998u;
    {
        const bool branch_taken_0x25b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B998u;
            // 0x25b99c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b998) {
            ctx->pc = 0x25B9CCu;
            goto label_25b9cc;
        }
    }
    ctx->pc = 0x25B9A0u;
label_25b9a0:
    // 0x25b9a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b9a8: 0x0  nop
    ctx->pc = 0x25b9a8u;
    // NOP
    // 0x25b9ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b9b0: 0x0  nop
    ctx->pc = 0x25b9b0u;
    // NOP
    // 0x25b9b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25B9B4u;
    {
        const bool branch_taken_0x25b9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B9B4u;
            // 0x25b9b8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9b4) {
            ctx->pc = 0x25B9CCu;
            goto label_25b9cc;
        }
    }
    ctx->pc = 0x25B9BCu;
    // 0x25b9bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b9c4: 0x0  nop
    ctx->pc = 0x25b9c4u;
    // NOP
    // 0x25b9c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25b9c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25b9cc:
    // 0x25b9cc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x25b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b9d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b9d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25b9d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25b9d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25b9d8: 0x0  nop
    ctx->pc = 0x25b9d8u;
    // NOP
    // 0x25b9dc: 0x0  nop
    ctx->pc = 0x25b9dcu;
    // NOP
    // 0x25b9e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25B9E0u;
    {
        const bool branch_taken_0x25b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B9E0u;
            // 0x25b9e4: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9e0) {
            ctx->pc = 0x25BA64u;
            goto label_25ba64;
        }
    }
    ctx->pc = 0x25B9E8u;
label_25b9e8:
    // 0x25b9e8: 0xc60200a4  lwc1        $f2, 0xA4($s0)
    ctx->pc = 0x25b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b9ec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b9f0: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x25b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b9f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b9fc: 0x0  nop
    ctx->pc = 0x25b9fcu;
    // NOP
    // 0x25ba00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25ba00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25ba04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ba04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ba08: 0x0  nop
    ctx->pc = 0x25ba08u;
    // NOP
    // 0x25ba0c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25BA0Cu;
    {
        const bool branch_taken_0x25ba0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA0Cu;
            // 0x25ba10: 0xe6010084  swc1        $f1, 0x84($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba0c) {
            ctx->pc = 0x25BA30u;
            goto label_25ba30;
        }
    }
    ctx->pc = 0x25BA14u;
    // 0x25ba14: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25ba18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba20: 0x0  nop
    ctx->pc = 0x25ba20u;
    // NOP
    // 0x25ba24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ba24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25ba28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25BA28u;
    {
        const bool branch_taken_0x25ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA28u;
            // 0x25ba2c: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba28) {
            ctx->pc = 0x25BA64u;
            goto label_25ba64;
        }
    }
    ctx->pc = 0x25BA30u;
label_25ba30:
    // 0x25ba30: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x25ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x25ba34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba3c: 0x0  nop
    ctx->pc = 0x25ba3cu;
    // NOP
    // 0x25ba40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ba40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ba44: 0x0  nop
    ctx->pc = 0x25ba44u;
    // NOP
    // 0x25ba48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x25BA48u;
    {
        const bool branch_taken_0x25ba48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA48u;
            // 0x25ba4c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba48) {
            ctx->pc = 0x25BA64u;
            goto label_25ba64;
        }
    }
    ctx->pc = 0x25BA50u;
    // 0x25ba50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25ba50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25ba54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ba54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ba58: 0x0  nop
    ctx->pc = 0x25ba58u;
    // NOP
    // 0x25ba5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25ba5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25ba60: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x25ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_25ba64:
    // 0x25ba64: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x25ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25ba68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ba6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ba70: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x25ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_25ba74:
    // 0x25ba74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25ba74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ba78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25ba7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25ba7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ba80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25ba80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x25BA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BA84u;
            // 0x25ba88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BA8Cu;
}
