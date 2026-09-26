#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSubVillager__6CSceneFii
// Address: 0x2ca090 - 0x2ca3c8
void LoadSubVillager__6CSceneFii_0x2ca090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSubVillager__6CSceneFii_0x2ca090");
#endif

    switch (ctx->pc) {
        case 0x2ca0ccu: goto label_2ca0cc;
        case 0x2ca100u: goto label_2ca100;
        case 0x2ca110u: goto label_2ca110;
        case 0x2ca11cu: goto label_2ca11c;
        case 0x2ca138u: goto label_2ca138;
        case 0x2ca14cu: goto label_2ca14c;
        case 0x2ca170u: goto label_2ca170;
        case 0x2ca180u: goto label_2ca180;
        case 0x2ca1b0u: goto label_2ca1b0;
        case 0x2ca1c4u: goto label_2ca1c4;
        case 0x2ca1e4u: goto label_2ca1e4;
        case 0x2ca1f8u: goto label_2ca1f8;
        case 0x2ca238u: goto label_2ca238;
        case 0x2ca254u: goto label_2ca254;
        case 0x2ca260u: goto label_2ca260;
        case 0x2ca28cu: goto label_2ca28c;
        case 0x2ca2d8u: goto label_2ca2d8;
        case 0x2ca2e8u: goto label_2ca2e8;
        case 0x2ca2f8u: goto label_2ca2f8;
        case 0x2ca304u: goto label_2ca304;
        case 0x2ca320u: goto label_2ca320;
        case 0x2ca334u: goto label_2ca334;
        case 0x2ca360u: goto label_2ca360;
        case 0x2ca390u: goto label_2ca390;
        default: break;
    }

    ctx->pc = 0x2ca090u;

    // 0x2ca090: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x2ca090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x2ca094: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ca094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ca098: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ca098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2ca09c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ca09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2ca0a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ca0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ca0a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ca0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ca0a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ca0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ca0ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ca0acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ca0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ca0b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ca0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ca0b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ca0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ca0bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ca0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ca0c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ca0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0c4: 0xc0b2598  jal         func_2C9660
    ctx->pc = 0x2CA0C4u;
    SET_GPR_U32(ctx, 31, 0x2CA0CCu);
    ctx->pc = 0x2CA0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA0C4u;
            // 0x2ca0c8: 0xafa600fc  sw          $a2, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9660u;
    if (runtime->hasFunction(0x2C9660u)) {
        auto targetFn = runtime->lookupFunction(0x2C9660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA0CCu; }
        if (ctx->pc != 0x2CA0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSubVillager__6CSceneFv_0x2c9660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA0CCu; }
        if (ctx->pc != 0x2CA0CCu) { return; }
    }
    ctx->pc = 0x2CA0CCu;
label_2ca0cc:
    // 0x2ca0cc: 0x8ea2303c  lw          $v0, 0x303C($s5)
    ctx->pc = 0x2ca0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12348)));
    // 0x2ca0d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA0D0u;
    {
        const bool branch_taken_0x2ca0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA0D0u;
            // 0x2ca0d4: 0x3c1e0038  lui         $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0d0) {
            ctx->pc = 0x2CA0E8u;
            goto label_2ca0e8;
        }
    }
    ctx->pc = 0x2CA0D8u;
    // 0x2ca0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca0dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0e0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x2CA0E0u;
    {
        const bool branch_taken_0x2ca0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA0E0u;
            // 0x2ca0e4: 0xaea3303c  sw          $v1, 0x303C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0e0) {
            ctx->pc = 0x2CA398u;
            goto label_2ca398;
        }
    }
    ctx->pc = 0x2CA0E8u;
label_2ca0e8:
    // 0x2ca0e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0f0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2ca0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ca0f4: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2ca0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2ca0f8: 0xc0b2620  jal         func_2C9880
    ctx->pc = 0x2CA0F8u;
    SET_GPR_U32(ctx, 31, 0x2CA100u);
    ctx->pc = 0x2CA0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA0F8u;
            // 0x2ca0fc: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9880u;
    if (runtime->hasFunction(0x2C9880u)) {
        auto targetFn = runtime->lookupFunction(0x2C9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA100u; }
        if (ctx->pc != 0x2CA100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadVillagerList__6CSceneFiPiPP18CVillagerPlaceInfo_0x2c9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA100u; }
        if (ctx->pc != 0x2CA100u) { return; }
    }
    ctx->pc = 0x2CA100u;
label_2ca100:
    // 0x2ca100: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2ca100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2ca104: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca108: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x2CA108u;
    SET_GPR_U32(ctx, 31, 0x2CA110u);
    ctx->pc = 0x2CA10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA108u;
            // 0x2ca10c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA110u; }
        if (ctx->pc != 0x2CA110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA110u; }
        if (ctx->pc != 0x2CA110u) { return; }
    }
    ctx->pc = 0x2CA110u;
label_2ca110:
    // 0x2ca110: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca114: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x2CA114u;
    SET_GPR_U32(ctx, 31, 0x2CA11Cu);
    ctx->pc = 0x2CA118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA114u;
            // 0x2ca118: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA11Cu; }
        if (ctx->pc != 0x2CA11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA11Cu; }
        if (ctx->pc != 0x2CA11Cu) { return; }
    }
    ctx->pc = 0x2CA11Cu;
label_2ca11c:
    // 0x2ca11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ca120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca124: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2ca124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2ca128: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2ca128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ca12c: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x2CA12Cu;
    {
        const bool branch_taken_0x2ca12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA12Cu;
            // 0x2ca130: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca12c) {
            ctx->pc = 0x2CA358u;
            goto label_2ca358;
        }
    }
    ctx->pc = 0x2CA134u;
    // 0x2ca134: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ca134u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca138:
    // 0x2ca138: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x2ca138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x2ca13c: 0x24540100  addiu       $s4, $v0, 0x100
    ctx->pc = 0x2ca13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2ca140: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2ca140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ca144: 0xc0c65f4  jal         func_3197D0
    ctx->pc = 0x2CA144u;
    SET_GPR_U32(ctx, 31, 0x2CA14Cu);
    ctx->pc = 0x2CA148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA144u;
            // 0x2ca148: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3197D0u;
    if (runtime->hasFunction(0x3197D0u)) {
        auto targetFn = runtime->lookupFunction(0x3197D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA14Cu; }
        if (ctx->pc != 0x2CA14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerModelName__FiPc_0x3197d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA14Cu; }
        if (ctx->pc != 0x2CA14Cu) { return; }
    }
    ctx->pc = 0x2CA14Cu;
label_2ca14c:
    // 0x2ca14c: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2CA14Cu;
    {
        const bool branch_taken_0x2ca14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca14c) {
            ctx->pc = 0x2CA338u;
            goto label_2ca338;
        }
    }
    ctx->pc = 0x2CA154u;
    // 0x2ca154: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x2ca154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2ca158: 0x8eb7003c  lw          $s7, 0x3C($s5)
    ctx->pc = 0x2ca158u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2ca15c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ca15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ca160: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2ca160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2ca164: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2ca164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ca168: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2CA168u;
    SET_GPR_U32(ctx, 31, 0x2CA170u);
    ctx->pc = 0x2CA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA168u;
            // 0x2ca16c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA170u; }
        if (ctx->pc != 0x2CA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA170u; }
        if (ctx->pc != 0x2CA170u) { return; }
    }
    ctx->pc = 0x2CA170u;
label_2ca170:
    // 0x2ca170: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2ca170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ca174: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca178: 0xc0b2660  jal         func_2C9980
    ctx->pc = 0x2CA178u;
    SET_GPR_U32(ctx, 31, 0x2CA180u);
    ctx->pc = 0x2CA17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA178u;
            // 0x2ca17c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9980u;
    if (runtime->hasFunction(0x2C9980u)) {
        auto targetFn = runtime->lookupFunction(0x2C9980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA180u; }
        if (ctx->pc != 0x2CA180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCopyModel__6CSceneFi_0x2c9980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA180u; }
        if (ctx->pc != 0x2CA180u) { return; }
    }
    ctx->pc = 0x2CA180u;
label_2ca180:
    // 0x2ca180: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA180u;
    {
        const bool branch_taken_0x2ca180 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ca180) {
            ctx->pc = 0x2CA1CCu;
            goto label_2ca1cc;
        }
    }
    ctx->pc = 0x2CA188u;
    // 0x2ca188: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2ca188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ca18c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2ca18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca190: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2ca190u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ca194: 0x28631900  slti        $v1, $v1, 0x1900
    ctx->pc = 0x2ca194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6400) ? 1 : 0);
    // 0x2ca198: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA198u;
    {
        const bool branch_taken_0x2ca198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA198u;
            // 0x2ca19c: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca198) {
            ctx->pc = 0x2CA1B8u;
            goto label_2ca1b8;
        }
    }
    ctx->pc = 0x2CA1A0u;
    // 0x2ca1a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ca1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1a8: 0xc0a14f8  jal         func_2853E0
    ctx->pc = 0x2CA1A8u;
    SET_GPR_U32(ctx, 31, 0x2CA1B0u);
    ctx->pc = 0x2CA1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1A8u;
            // 0x2ca1ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853E0u;
    if (runtime->hasFunction(0x2853E0u)) {
        auto targetFn = runtime->lookupFunction(0x2853E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1B0u; }
        if (ctx->pc != 0x2CA1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyChara__6CSceneFiiP9mgCMemory_0x2853e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1B0u; }
        if (ctx->pc != 0x2CA1B0u) { return; }
    }
    ctx->pc = 0x2CA1B0u;
label_2ca1b0:
    // 0x2ca1b0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2CA1B0u;
    {
        const bool branch_taken_0x2ca1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1B0u;
            // 0x2ca1b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1b0) {
            ctx->pc = 0x2CA2D8u;
            goto label_2ca2d8;
        }
    }
    ctx->pc = 0x2CA1B8u;
label_2ca1b8:
    // 0x2ca1b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2ca1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2ca1bc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CA1BCu;
    SET_GPR_U32(ctx, 31, 0x2CA1C4u);
    ctx->pc = 0x2CA1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1BCu;
            // 0x2ca1c0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1C4u; }
        if (ctx->pc != 0x2CA1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1C4u; }
        if (ctx->pc != 0x2CA1C4u) { return; }
    }
    ctx->pc = 0x2CA1C4u;
label_2ca1c4:
    // 0x2ca1c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2CA1C4u;
    {
        const bool branch_taken_0x2ca1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca1c4) {
            ctx->pc = 0x2CA2D8u;
            goto label_2ca2d8;
        }
    }
    ctx->pc = 0x2CA1CCu;
label_2ca1cc:
    // 0x2ca1cc: 0x0  nop
    ctx->pc = 0x2ca1ccu;
    // NOP
    // 0x2ca1d0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2ca1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2ca1d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2ca1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1d8: 0x27a60308  addiu       $a2, $sp, 0x308
    ctx->pc = 0x2ca1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
    // 0x2ca1dc: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2CA1DCu;
    SET_GPR_U32(ctx, 31, 0x2CA1E4u);
    ctx->pc = 0x2CA1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1DCu;
            // 0x2ca1e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1E4u; }
        if (ctx->pc != 0x2CA1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1E4u; }
        if (ctx->pc != 0x2CA1E4u) { return; }
    }
    ctx->pc = 0x2CA1E4u;
label_2ca1e4:
    // 0x2ca1e4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2CA1E4u;
    {
        const bool branch_taken_0x2ca1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca1e4) {
            ctx->pc = 0x2CA338u;
            goto label_2ca338;
        }
    }
    ctx->pc = 0x2CA1ECu;
    // 0x2ca1ec: 0x8fa50308  lw          $a1, 0x308($sp)
    ctx->pc = 0x2ca1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
    // 0x2ca1f0: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2CA1F0u;
    SET_GPR_U32(ctx, 31, 0x2CA1F8u);
    ctx->pc = 0x2CA1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1F0u;
            // 0x2ca1f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (runtime->hasFunction(0x2C8A20u)) {
        auto targetFn = runtime->lookupFunction(0x2C8A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1F8u; }
        if (ctx->pc != 0x2CA1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChrFileSize__FPUii_0x2c8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1F8u; }
        if (ctx->pc != 0x2CA1F8u) { return; }
    }
    ctx->pc = 0x2CA1F8u;
label_2ca1f8:
    // 0x2ca1f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca1f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1fc: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2ca1fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2ca200: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2ca200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ca204: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2ca204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca208: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2ca208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ca20c: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA20Cu;
    {
        const bool branch_taken_0x2ca20c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2CA210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA20Cu;
            // 0x2ca210: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca20c) {
            ctx->pc = 0x2CA21Cu;
            goto label_2ca21c;
        }
    }
    ctx->pc = 0x2CA214u;
    // 0x2ca214: 0x2662000f  addiu       $v0, $s3, 0xF
    ctx->pc = 0x2ca214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x2ca218: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2ca218u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_2ca21c:
    // 0x2ca21c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2ca21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ca220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ca220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ca224: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2ca224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ca228: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA228u;
    {
        const bool branch_taken_0x2ca228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA228u;
            // 0x2ca22c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca228) {
            ctx->pc = 0x2CA240u;
            goto label_2ca240;
        }
    }
    ctx->pc = 0x2CA230u;
    // 0x2ca230: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CA230u;
    SET_GPR_U32(ctx, 31, 0x2CA238u);
    ctx->pc = 0x2CA234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA230u;
            // 0x2ca234: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA238u; }
        if (ctx->pc != 0x2CA238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA238u; }
        if (ctx->pc != 0x2CA238u) { return; }
    }
    ctx->pc = 0x2CA238u;
label_2ca238:
    // 0x2ca238: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2CA238u;
    {
        const bool branch_taken_0x2ca238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca238) {
            ctx->pc = 0x2CA338u;
            goto label_2ca338;
        }
    }
    ctx->pc = 0x2CA240u;
label_2ca240:
    // 0x2ca240: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ca240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ca244: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x2ca244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2ca248: 0x27a4030c  addiu       $a0, $sp, 0x30C
    ctx->pc = 0x2ca248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
    // 0x2ca24c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2CA24Cu;
    SET_GPR_U32(ctx, 31, 0x2CA254u);
    ctx->pc = 0x2CA250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA24Cu;
            // 0x2ca250: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA254u; }
        if (ctx->pc != 0x2CA254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA254u; }
        if (ctx->pc != 0x2CA254u) { return; }
    }
    ctx->pc = 0x2CA254u;
label_2ca254:
    // 0x2ca254: 0x27c401d8  addiu       $a0, $fp, 0x1D8
    ctx->pc = 0x2ca254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 472));
    // 0x2ca258: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2CA258u;
    SET_GPR_U32(ctx, 31, 0x2CA260u);
    ctx->pc = 0x2CA25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA258u;
            // 0x2ca25c: 0x27a5030c  addiu       $a1, $sp, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA260u; }
        if (ctx->pc != 0x2CA260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA260u; }
        if (ctx->pc != 0x2CA260u) { return; }
    }
    ctx->pc = 0x2CA260u;
label_2ca260:
    // 0x2ca260: 0x8fab00e0  lw          $t3, 0xE0($sp)
    ctx->pc = 0x2ca260u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ca264: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2ca264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x2ca268: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2ca268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca26c: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2ca26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2ca270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca274: 0x24e70038  addiu       $a3, $a3, 0x38
    ctx->pc = 0x2ca274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x2ca278: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2ca278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca27c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2ca27cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca280: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2ca280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca284: 0xc0a1458  jal         func_285160
    ctx->pc = 0x2CA284u;
    SET_GPR_U32(ctx, 31, 0x2CA28Cu);
    ctx->pc = 0x2CA288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA284u;
            // 0x2ca288: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA28Cu; }
        if (ctx->pc != 0x2CA28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA28Cu; }
        if (ctx->pc != 0x2CA28Cu) { return; }
    }
    ctx->pc = 0x2CA28Cu;
label_2ca28c:
    // 0x2ca28c: 0xa3c001d8  sb          $zero, 0x1D8($fp)
    ctx->pc = 0x2ca28cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca290: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ca290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca294: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2ca294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ca298: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2ca298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca29c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ca29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca2a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2ca2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ca2a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ca2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca2a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ca2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca2ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA2ACu;
    {
        const bool branch_taken_0x2ca2ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CA2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2ACu;
            // 0x2ca2b0: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2ac) {
            ctx->pc = 0x2CA2BCu;
            goto label_2ca2bc;
        }
    }
    ctx->pc = 0x2CA2B4u;
    // 0x2ca2b4: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2ca2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2ca2b8: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x2ca2b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_2ca2bc:
    // 0x2ca2bc: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA2BCu;
    {
        const bool branch_taken_0x2ca2bc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2CA2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2BCu;
            // 0x2ca2c0: 0x133283  sra         $a2, $s3, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2bc) {
            ctx->pc = 0x2CA2CCu;
            goto label_2ca2cc;
        }
    }
    ctx->pc = 0x2CA2C4u;
    // 0x2ca2c4: 0x266203ff  addiu       $v0, $s3, 0x3FF
    ctx->pc = 0x2ca2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1023));
    // 0x2ca2c8: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x2ca2c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_2ca2cc:
    // 0x2ca2cc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2ca2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2ca2d0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CA2D0u;
    SET_GPR_U32(ctx, 31, 0x2CA2D8u);
    ctx->pc = 0x2CA2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2D0u;
            // 0x2ca2d4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA2D8u; }
        if (ctx->pc != 0x2CA2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA2D8u; }
        if (ctx->pc != 0x2CA2D8u) { return; }
    }
    ctx->pc = 0x2CA2D8u;
label_2ca2d8:
    // 0x2ca2d8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2ca2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ca2dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2e0: 0xc0a0ec0  jal         func_283B00
    ctx->pc = 0x2CA2E0u;
    SET_GPR_U32(ctx, 31, 0x2CA2E8u);
    ctx->pc = 0x2CA2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2E0u;
            // 0x2ca2e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B00u;
    if (runtime->hasFunction(0x283B00u)) {
        auto targetFn = runtime->lookupFunction(0x283B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA2E8u; }
        if (ctx->pc != 0x2CA2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaNo__6CSceneFii_0x283b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA2E8u; }
        if (ctx->pc != 0x2CA2E8u) { return; }
    }
    ctx->pc = 0x2CA2E8u;
label_2ca2e8:
    // 0x2ca2e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ca2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2f0: 0xc0b26e0  jal         func_2C9B80
    ctx->pc = 0x2CA2F0u;
    SET_GPR_U32(ctx, 31, 0x2CA2F8u);
    ctx->pc = 0x2CA2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2F0u;
            // 0x2ca2f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B80u;
    if (runtime->hasFunction(0x2C9B80u)) {
        auto targetFn = runtime->lookupFunction(0x2C9B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA2F8u; }
        if (ctx->pc != 0x2CA2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaObjectOnOff__6CSceneFiP9mgCMemory_0x2c9b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA2F8u; }
        if (ctx->pc != 0x2CA2F8u) { return; }
    }
    ctx->pc = 0x2CA2F8u;
label_2ca2f8:
    // 0x2ca2f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2fc: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2CA2FCu;
    SET_GPR_U32(ctx, 31, 0x2CA304u);
    ctx->pc = 0x2CA300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA2FCu;
            // 0x2ca300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA304u; }
        if (ctx->pc != 0x2CA304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA304u; }
        if (ctx->pc != 0x2CA304u) { return; }
    }
    ctx->pc = 0x2CA304u;
label_2ca304:
    // 0x2ca304: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CA304u;
    {
        const bool branch_taken_0x2ca304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA304u;
            // 0x2ca308: 0x2dd1021  addu        $v0, $s6, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca304) {
            ctx->pc = 0x2CA338u;
            goto label_2ca338;
        }
    }
    ctx->pc = 0x2CA30Cu;
    // 0x2ca30c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2ca30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ca310: 0x8c470180  lw          $a3, 0x180($v0)
    ctx->pc = 0x2ca310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2ca314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca318: 0xc0b290c  jal         func_2CA430
    ctx->pc = 0x2CA318u;
    SET_GPR_U32(ctx, 31, 0x2CA320u);
    ctx->pc = 0x2CA31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA318u;
            // 0x2ca31c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA430u;
    if (runtime->hasFunction(0x2CA430u)) {
        auto targetFn = runtime->lookupFunction(0x2CA430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA320u; }
        if (ctx->pc != 0x2CA320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP18CVillagerPlaceInfo_0x2ca430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA320u; }
        if (ctx->pc != 0x2CA320u) { return; }
    }
    ctx->pc = 0x2CA320u;
label_2ca320:
    // 0x2ca320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA320u;
    {
        const bool branch_taken_0x2ca320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA320u;
            // 0x2ca324: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca320) {
            ctx->pc = 0x2CA338u;
            goto label_2ca338;
        }
    }
    ctx->pc = 0x2CA328u;
    // 0x2ca328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca32c: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CA32Cu;
    SET_GPR_U32(ctx, 31, 0x2CA334u);
    ctx->pc = 0x2CA330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA32Cu;
            // 0x2ca330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA334u; }
        if (ctx->pc != 0x2CA334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA334u; }
        if (ctx->pc != 0x2CA334u) { return; }
    }
    ctx->pc = 0x2CA334u;
label_2ca334:
    // 0x2ca334: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ca334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ca338:
    // 0x2ca338: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ca338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca33c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca340: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2ca340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2ca344: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ca344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca348: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2ca348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2ca34c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ca34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ca350: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x2CA350u;
    {
        const bool branch_taken_0x2ca350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA350u;
            // 0x2ca354: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca350) {
            ctx->pc = 0x2CA138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca138;
        }
    }
    ctx->pc = 0x2CA358u;
label_2ca358:
    // 0x2ca358: 0xc0b260c  jal         func_2C9830
    ctx->pc = 0x2CA358u;
    SET_GPR_U32(ctx, 31, 0x2CA360u);
    ctx->pc = 0x2CA35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA358u;
            // 0x2ca35c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9830u;
    if (runtime->hasFunction(0x2C9830u)) {
        auto targetFn = runtime->lookupFunction(0x2C9830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA360u; }
        if (ctx->pc != 0x2CA360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowVillagerTime__6CSceneFv_0x2c9830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA360u; }
        if (ctx->pc != 0x2CA360u) { return; }
    }
    ctx->pc = 0x2CA360u;
label_2ca360:
    // 0x2ca360: 0xaea23e64  sw          $v0, 0x3E64($s5)
    ctx->pc = 0x2ca360u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15972), GPR_U32(ctx, 2));
    // 0x2ca364: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ca368: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2ca368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ca36c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ca36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca370: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ca370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca374: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA374u;
    {
        const bool branch_taken_0x2ca374 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CA378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA374u;
            // 0x2ca378: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca374) {
            ctx->pc = 0x2CA384u;
            goto label_2ca384;
        }
    }
    ctx->pc = 0x2CA37Cu;
    // 0x2ca37c: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2ca37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2ca380: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x2ca380u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_2ca384:
    // 0x2ca384: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2ca384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2ca388: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2CA388u;
    SET_GPR_U32(ctx, 31, 0x2CA390u);
    ctx->pc = 0x2CA38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA388u;
            // 0x2ca38c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA390u; }
        if (ctx->pc != 0x2CA390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA390u; }
        if (ctx->pc != 0x2CA390u) { return; }
    }
    ctx->pc = 0x2CA390u;
label_2ca390:
    // 0x2ca390: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2ca390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2ca394: 0x0  nop
    ctx->pc = 0x2ca394u;
    // NOP
label_2ca398:
    // 0x2ca398: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ca398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ca39c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ca39cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca3a0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ca3a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca3a4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ca3a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca3a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ca3a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca3ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ca3acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca3b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ca3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca3b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ca3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca3b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ca3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca3bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ca3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3C0u;
            // 0x2ca3c4: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA3C8u;
}
