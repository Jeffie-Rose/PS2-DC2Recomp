#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuEquipCameraSetEnv__FP12CActionCharaP9mgCCameraii
// Address: 0x23f350 - 0x23f510
void MenuEquipCameraSetEnv__FP12CActionCharaP9mgCCameraii_0x23f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuEquipCameraSetEnv__FP12CActionCharaP9mgCCameraii_0x23f350");
#endif

    switch (ctx->pc) {
        case 0x23f408u: goto label_23f408;
        case 0x23f420u: goto label_23f420;
        case 0x23f458u: goto label_23f458;
        case 0x23f470u: goto label_23f470;
        case 0x23f484u: goto label_23f484;
        case 0x23f494u: goto label_23f494;
        case 0x23f4bcu: goto label_23f4bc;
        case 0x23f4d0u: goto label_23f4d0;
        case 0x23f4e0u: goto label_23f4e0;
        default: break;
    }

    ctx->pc = 0x23f350u;

    // 0x23f350: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23f354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23f358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f360: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23f360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f364: 0x10a00065  beqz        $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x23F364u;
    {
        const bool branch_taken_0x23f364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F364u;
            // 0x23f368: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f364) {
            ctx->pc = 0x23F4FCu;
            goto label_23f4fc;
        }
    }
    ctx->pc = 0x23F36Cu;
    // 0x23f36c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F36Cu;
    {
        const bool branch_taken_0x23f36c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f36c) {
            ctx->pc = 0x23F37Cu;
            goto label_23f37c;
        }
    }
    ctx->pc = 0x23F374u;
    // 0x23f374: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x23F374u;
    {
        const bool branch_taken_0x23f374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F374u;
            // 0x23f378: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f374) {
            ctx->pc = 0x23F500u;
            goto label_23f500;
        }
    }
    ctx->pc = 0x23F37Cu;
label_23f37c:
    // 0x23f37c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f380: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F380u;
    {
        const bool branch_taken_0x23f380 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F380u;
            // 0x23f384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f380) {
            ctx->pc = 0x23F38Cu;
            goto label_23f38c;
        }
    }
    ctx->pc = 0x23F388u;
    // 0x23f388: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x23f388u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23f38c:
    // 0x23f38c: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F38Cu;
    {
        const bool branch_taken_0x23f38c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x23f38c) {
            ctx->pc = 0x23F3B4u;
            goto label_23f3b4;
        }
    }
    ctx->pc = 0x23F394u;
    // 0x23f394: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x23f394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f398: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F398u;
    {
        const bool branch_taken_0x23f398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f398) {
            ctx->pc = 0x23F3B4u;
            goto label_23f3b4;
        }
    }
    ctx->pc = 0x23F3A0u;
    // 0x23f3a0: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F3A0u;
    {
        const bool branch_taken_0x23f3a0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x23f3a0) {
            ctx->pc = 0x23F3B4u;
            goto label_23f3b4;
        }
    }
    ctx->pc = 0x23F3A8u;
    // 0x23f3a8: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x23f3a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23f3ac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F3ACu;
    {
        const bool branch_taken_0x23f3ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3ACu;
            // 0x23f3b0: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3ac) {
            ctx->pc = 0x23F3C0u;
            goto label_23f3c0;
        }
    }
    ctx->pc = 0x23F3B4u;
label_23f3b4:
    // 0x23f3b4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x23f3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f3b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23f3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23f3c0:
    // 0x23f3c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23f3c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x23f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x23f3c8: 0x24420c80  addiu       $v0, $v0, 0xC80
    ctx->pc = 0x23f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x23f3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f3d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f3d4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F3D4u;
    {
        const bool branch_taken_0x23f3d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3D4u;
            // 0x23f3d8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3d4) {
            ctx->pc = 0x23F3F4u;
            goto label_23f3f4;
        }
    }
    ctx->pc = 0x23F3DCu;
    // 0x23f3dc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23f3e0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x23f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x23f3e4: 0x24420c8c  addiu       $v0, $v0, 0xC8C
    ctx->pc = 0x23f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3212));
    // 0x23f3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f3ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f3f0: 0x0  nop
    ctx->pc = 0x23f3f0u;
    // NOP
label_23f3f4:
    // 0x23f3f4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x23f3f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f3f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F3F8u;
    {
        const bool branch_taken_0x23f3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F3F8u;
            // 0x23f3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3f8) {
            ctx->pc = 0x23F408u;
            goto label_23f408;
        }
    }
    ctx->pc = 0x23F400u;
    // 0x23f400: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x23F400u;
    SET_GPR_U32(ctx, 31, 0x23F408u);
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F408u; }
        if (ctx->pc != 0x23F408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F408u; }
        if (ctx->pc != 0x23F408u) { return; }
    }
    ctx->pc = 0x23F408u;
label_23f408:
    // 0x23f408: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F408u;
    {
        const bool branch_taken_0x23f408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F408u;
            // 0x23f40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f408) {
            ctx->pc = 0x23F42Cu;
            goto label_23f42c;
        }
    }
    ctx->pc = 0x23F410u;
    // 0x23f410: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23f414: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f418: 0xc08d150  jal         func_234540
    ctx->pc = 0x23F418u;
    SET_GPR_U32(ctx, 31, 0x23F420u);
    ctx->pc = 0x234540u;
    if (runtime->hasFunction(0x234540u)) {
        auto targetFn = runtime->lookupFunction(0x234540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F420u; }
        if (ctx->pc != 0x23F420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCamInit__Ff_0x234540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F420u; }
        if (ctx->pc != 0x23F420u) { return; }
    }
    ctx->pc = 0x23F420u;
label_23f420:
    // 0x23f420: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x23F420u;
    {
        const bool branch_taken_0x23f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f420) {
            ctx->pc = 0x23F4FCu;
            goto label_23f4fc;
        }
    }
    ctx->pc = 0x23F428u;
    // 0x23f428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f42c:
    // 0x23f42c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f430: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23f430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23f434: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x23f434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f438: 0x24420ce0  addiu       $v0, $v0, 0xCE0
    ctx->pc = 0x23f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3296));
    // 0x23f43c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23f43cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f440: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23f444: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x23f444u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x23f448: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x23f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x23f44c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x23f44cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f450: 0xc04ddf8  jal         func_1377E0
    ctx->pc = 0x23F450u;
    SET_GPR_U32(ctx, 31, 0x23F458u);
    ctx->pc = 0x23F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F450u;
            // 0x23f454: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F458u; }
        if (ctx->pc != 0x23F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F458u; }
        if (ctx->pc != 0x23F458u) { return; }
    }
    ctx->pc = 0x23F458u;
label_23f458:
    // 0x23f458: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f45c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23f460: 0x24a5acd0  addiu       $a1, $a1, -0x5330
    ctx->pc = 0x23f460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946000));
    // 0x23f464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f468: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x23F468u;
    SET_GPR_U32(ctx, 31, 0x23F470u);
    ctx->pc = 0x23F46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F468u;
            // 0x23f46c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F470u; }
        if (ctx->pc != 0x23F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F470u; }
        if (ctx->pc != 0x23F470u) { return; }
    }
    ctx->pc = 0x23F470u;
label_23f470:
    // 0x23f470: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23f470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23f474: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23f474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23f478: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x23f478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f47c: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x23F47Cu;
    SET_GPR_U32(ctx, 31, 0x23F484u);
    ctx->pc = 0x23F480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F47Cu;
            // 0x23f480: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F484u; }
        if (ctx->pc != 0x23F484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F484u; }
        if (ctx->pc != 0x23F484u) { return; }
    }
    ctx->pc = 0x23F484u;
label_23f484:
    // 0x23f484: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f488: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f48c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x23F48Cu;
    SET_GPR_U32(ctx, 31, 0x23F494u);
    ctx->pc = 0x23F490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F48Cu;
            // 0x23f490: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F494u; }
        if (ctx->pc != 0x23F494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F494u; }
        if (ctx->pc != 0x23F494u) { return; }
    }
    ctx->pc = 0x23F494u;
label_23f494:
    // 0x23f494: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x23f494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f498: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f49c: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x23f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x23f4a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4a4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x23f4a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f4a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23f4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23f4b0: 0x24a5ace0  addiu       $a1, $a1, -0x5320
    ctx->pc = 0x23f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946016));
    // 0x23f4b4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x23F4B4u;
    SET_GPR_U32(ctx, 31, 0x23F4BCu);
    ctx->pc = 0x23F4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F4B4u;
            // 0x23f4b8: 0x7c430080  sq          $v1, 0x80($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F4BCu; }
        if (ctx->pc != 0x23F4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F4BCu; }
        if (ctx->pc != 0x23F4BCu) { return; }
    }
    ctx->pc = 0x23F4BCu;
label_23f4bc:
    // 0x23f4bc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23f4c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23f4c4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x23f4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f4c8: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x23F4C8u;
    SET_GPR_U32(ctx, 31, 0x23F4D0u);
    ctx->pc = 0x23F4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F4C8u;
            // 0x23f4cc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F4D0u; }
        if (ctx->pc != 0x23F4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F4D0u; }
        if (ctx->pc != 0x23F4D0u) { return; }
    }
    ctx->pc = 0x23F4D0u;
label_23f4d0:
    // 0x23f4d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f4d4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x23f4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f4d8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x23F4D8u;
    SET_GPR_U32(ctx, 31, 0x23F4E0u);
    ctx->pc = 0x23F4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F4D8u;
            // 0x23f4dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F4E0u; }
        if (ctx->pc != 0x23F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F4E0u; }
        if (ctx->pc != 0x23F4E0u) { return; }
    }
    ctx->pc = 0x23F4E0u;
label_23f4e0:
    // 0x23f4e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f4e4: 0x8f8394f4  lw          $v1, -0x6B0C($gp)
    ctx->pc = 0x23f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x23f4e8: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x23f4e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23f4ec: 0x7c650090  sq          $a1, 0x90($v1)
    ctx->pc = 0x23f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 5));
    // 0x23f4f0: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x23f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
    // 0x23f4f4: 0x8f8394f4  lw          $v1, -0x6B0C($gp)
    ctx->pc = 0x23f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x23f4f8: 0xac6400a0  sw          $a0, 0xA0($v1)
    ctx->pc = 0x23f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
label_23f4fc:
    // 0x23f4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f500:
    // 0x23f500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f508: 0x3e00008  jr          $ra
    ctx->pc = 0x23F508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F508u;
            // 0x23f50c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23F510u;
}
