#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckWalkToEdit__FP6CScenePf
// Address: 0x2dd9a0 - 0x2ddb6c
void CheckWalkToEdit__FP6CScenePf_0x2dd9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckWalkToEdit__FP6CScenePf_0x2dd9a0");
#endif

    switch (ctx->pc) {
        case 0x2dd9c8u: goto label_2dd9c8;
        case 0x2dd9e4u: goto label_2dd9e4;
        case 0x2dda68u: goto label_2dda68;
        case 0x2dda8cu: goto label_2dda8c;
        case 0x2ddac4u: goto label_2ddac4;
        case 0x2ddad8u: goto label_2ddad8;
        case 0x2ddafcu: goto label_2ddafc;
        default: break;
    }

    ctx->pc = 0x2dd9a0u;

    // 0x2dd9a0: 0x27bdd4f0  addiu       $sp, $sp, -0x2B10
    ctx->pc = 0x2dd9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956272));
    // 0x2dd9a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dd9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dd9a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2dd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dd9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd9b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd9b8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2dd9b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dd9bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2dd9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2dd9c0: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2DD9C0u;
    SET_GPR_U32(ctx, 31, 0x2DD9C8u);
    ctx->pc = 0x2DD9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9C0u;
            // 0x2dd9c4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD9C8u; }
        if (ctx->pc != 0x2DD9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD9C8u; }
        if (ctx->pc != 0x2DD9C8u) { return; }
    }
    ctx->pc = 0x2DD9C8u;
label_2dd9c8:
    // 0x2dd9c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD9CCu;
    {
        const bool branch_taken_0x2dd9cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9CCu;
            // 0x2dd9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9cc) {
            ctx->pc = 0x2DD9DCu;
            goto label_2dd9dc;
        }
    }
    ctx->pc = 0x2DD9D4u;
    // 0x2dd9d4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2DD9D4u;
    {
        const bool branch_taken_0x2dd9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9D4u;
            // 0x2dd9d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9d4) {
            ctx->pc = 0x2DDB54u;
            goto label_2ddb54;
        }
    }
    ctx->pc = 0x2DD9DCu;
label_2dd9dc:
    // 0x2dd9dc: 0xc0b7604  jal         func_2DD810
    ctx->pc = 0x2DD9DCu;
    SET_GPR_U32(ctx, 31, 0x2DD9E4u);
    ctx->pc = 0x2DD810u;
    if (runtime->hasFunction(0x2DD810u)) {
        auto targetFn = runtime->lookupFunction(0x2DD810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD9E4u; }
        if (ctx->pc != 0x2DD9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoCheckPts__FP4CMap_0x2dd810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD9E4u; }
        if (ctx->pc != 0x2DD9E4u) { return; }
    }
    ctx->pc = 0x2DD9E4u;
label_2dd9e4:
    // 0x2dd9e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD9E4u;
    {
        const bool branch_taken_0x2dd9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9E4u;
            // 0x2dd9e8: 0x27aa0040  addiu       $t2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9e4) {
            ctx->pc = 0x2DD9F4u;
            goto label_2dd9f4;
        }
    }
    ctx->pc = 0x2DD9ECu;
    // 0x2dd9ec: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2DD9ECu;
    {
        const bool branch_taken_0x2dd9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD9ECu;
            // 0x2dd9f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9ec) {
            ctx->pc = 0x2DDB54u;
            goto label_2ddb54;
        }
    }
    ctx->pc = 0x2DD9F4u;
label_2dd9f4:
    // 0x2dd9f4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2dd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2dd9f8: 0x79490000  lq          $t1, 0x0($t2)
    ctx->pc = 0x2dd9f8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2dd9fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dd9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dda00: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x2dda00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2dda04: 0x3c0841a0  lui         $t0, 0x41A0
    ctx->pc = 0x2dda04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16800 << 16));
    // 0x2dda08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dda08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dda0c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2dda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2dda10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dda10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda14: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2dda14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2dda18: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2dda18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2dda1c: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x2dda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x2dda20: 0x79490000  lq          $t1, 0x0($t2)
    ctx->pc = 0x2dda20u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2dda24: 0x7d690000  sq          $t1, 0x0($t3)
    ctx->pc = 0x2dda24u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 9));
    // 0x2dda28: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2dda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dda2c: 0xafa80044  sw          $t0, 0x44($sp)
    ctx->pc = 0x2dda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    // 0x2dda30: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2dda30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dda34: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x2dda34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x2dda38: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2dda38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2dda3c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2dda3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2dda40: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2dda40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2dda44: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2dda44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2dda48: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2dda48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dda4c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dda4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dda50: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2dda50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2dda54: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2dda54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dda58: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2dda58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2dda5c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dda5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2dda60: 0xc0b7610  jal         func_2DD840
    ctx->pc = 0x2DDA60u;
    SET_GPR_U32(ctx, 31, 0x2DDA68u);
    ctx->pc = 0x2DDA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDA60u;
            // 0x2dda64: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD840u;
    if (runtime->hasFunction(0x2DD840u)) {
        auto targetFn = runtime->lookupFunction(0x2DD840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA68u; }
        if (ctx->pc != 0x2DDA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoCheckCol__FP4CMapR9mgVu0FBOXP6CCPolyi_0x2dd840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA68u; }
        if (ctx->pc != 0x2DDA68u) { return; }
    }
    ctx->pc = 0x2DDA68u;
label_2dda68:
    // 0x2dda68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dda68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2dda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2dda70: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2dda70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2dda74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dda74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dda78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dda7c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2dda7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dda80: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2dda80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dda84: 0xc053870  jal         func_14E1C0
    ctx->pc = 0x2DDA84u;
    SET_GPR_U32(ctx, 31, 0x2DDA8Cu);
    ctx->pc = 0x2DDA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDA84u;
            // 0x2dda88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1C0u;
    if (runtime->hasFunction(0x14E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA8Cu; }
        if (ctx->pc != 0x2DDA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA8Cu; }
        if (ctx->pc != 0x2DDA8Cu) { return; }
    }
    ctx->pc = 0x2DDA8Cu;
label_2dda8c:
    // 0x2dda8c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDA8Cu;
    {
        const bool branch_taken_0x2dda8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DDA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDA8Cu;
            // 0x2dda90: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda8c) {
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DDA94u;
    // 0x2dda94: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2DDA94u;
    {
        const bool branch_taken_0x2dda94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDA94u;
            // 0x2dda98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda94) {
            ctx->pc = 0x2DDB54u;
            goto label_2ddb54;
        }
    }
    ctx->pc = 0x2DDA9Cu;
label_2dda9c:
    // 0x2dda9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dda9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddaa0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2ddaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2ddaa4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ddaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ddaa8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2ddaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ddaac: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2ddaacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ddab0: 0x27a82a80  addiu       $t0, $sp, 0x2A80
    ctx->pc = 0x2ddab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10880));
    // 0x2ddab4: 0x27a92880  addiu       $t1, $sp, 0x2880
    ctx->pc = 0x2ddab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 10368));
    // 0x2ddab8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ddab8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddabc: 0xc053c80  jal         func_14F200
    ctx->pc = 0x2DDABCu;
    SET_GPR_U32(ctx, 31, 0x2DDAC4u);
    ctx->pc = 0x2DDAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDABCu;
            // 0x2ddac0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F200u;
    if (runtime->hasFunction(0x14F200u)) {
        auto targetFn = runtime->lookupFunction(0x14F200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDAC4u; }
        if (ctx->pc != 0x2DDAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsSphere__FP6CCPolyiPfiPiPA4_fii_0x14f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDAC4u; }
        if (ctx->pc != 0x2DDAC4u) { return; }
    }
    ctx->pc = 0x2DDAC4u;
label_2ddac4:
    // 0x2ddac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddac8: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2ddac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ddacc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DDACCu;
    {
        const bool branch_taken_0x2ddacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDACCu;
            // 0x2ddad0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddacc) {
            ctx->pc = 0x2DDB50u;
            goto label_2ddb50;
        }
    }
    ctx->pc = 0x2DDAD4u;
    // 0x2ddad4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ddad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddad8:
    // 0x2ddad8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2ddad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2ddadc: 0x27a42b00  addiu       $a0, $sp, 0x2B00
    ctx->pc = 0x2ddadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11008));
    // 0x2ddae0: 0x8c432a80  lw          $v1, 0x2A80($v0)
    ctx->pc = 0x2ddae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10880)));
    // 0x2ddae4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ddae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ddae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ddae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ddaec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ddaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ddaf0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ddaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ddaf4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2DDAF4u;
    SET_GPR_U32(ctx, 31, 0x2DDAFCu);
    ctx->pc = 0x2DDAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDAF4u;
            // 0x2ddaf8: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDAFCu; }
        if (ctx->pc != 0x2DDAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDAFCu; }
        if (ctx->pc != 0x2DDAFCu) { return; }
    }
    ctx->pc = 0x2DDAFCu;
label_2ddafc:
    // 0x2ddafc: 0xc7a12b04  lwc1        $f1, 0x2B04($sp)
    ctx->pc = 0x2ddafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddb00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ddb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddb04: 0x0  nop
    ctx->pc = 0x2ddb04u;
    // NOP
    // 0x2ddb08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ddb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddb0c: 0x0  nop
    ctx->pc = 0x2ddb0cu;
    // NOP
    // 0x2ddb10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDB10u;
    {
        const bool branch_taken_0x2ddb10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddb10) {
            ctx->pc = 0x2DDB1Cu;
            goto label_2ddb1c;
        }
    }
    ctx->pc = 0x2DDB18u;
    // 0x2ddb18: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ddb18u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2ddb1c:
    // 0x2ddb1c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ddb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ddb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ddb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddb24: 0x0  nop
    ctx->pc = 0x2ddb24u;
    // NOP
    // 0x2ddb28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ddb28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddb2c: 0x0  nop
    ctx->pc = 0x2ddb2cu;
    // NOP
    // 0x2ddb30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDB30u;
    {
        const bool branch_taken_0x2ddb30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB30u;
            // 0x2ddb34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb30) {
            ctx->pc = 0x2DDB40u;
            goto label_2ddb40;
        }
    }
    ctx->pc = 0x2DDB38u;
    // 0x2ddb38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDB38u;
    {
        const bool branch_taken_0x2ddb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB38u;
            // 0x2ddb3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb38) {
            ctx->pc = 0x2DDB58u;
            goto label_2ddb58;
        }
    }
    ctx->pc = 0x2DDB40u;
label_2ddb40:
    // 0x2ddb40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ddb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ddb44: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2ddb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ddb48: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2DDB48u;
    {
        const bool branch_taken_0x2ddb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB48u;
            // 0x2ddb4c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb48) {
            ctx->pc = 0x2DDAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ddad8;
        }
    }
    ctx->pc = 0x2DDB50u;
label_2ddb50:
    // 0x2ddb50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ddb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddb54:
    // 0x2ddb54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ddb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ddb58:
    // 0x2ddb58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ddb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddb5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddb60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ddb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddb64: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDB64u;
            // 0x2ddb68: 0x27bd2b10  addiu       $sp, $sp, 0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 11024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DDB6Cu;
}
