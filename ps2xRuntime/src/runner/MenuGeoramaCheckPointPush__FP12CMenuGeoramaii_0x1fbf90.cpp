#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaCheckPointPush__FP12CMenuGeoramaii
// Address: 0x1fbf90 - 0x1fc4b4
void MenuGeoramaCheckPointPush__FP12CMenuGeoramaii_0x1fbf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaCheckPointPush__FP12CMenuGeoramaii_0x1fbf90");
#endif

    switch (ctx->pc) {
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fc00cu: goto label_1fc00c;
        case 0x1fc030u: goto label_1fc030;
        case 0x1fc05cu: goto label_1fc05c;
        case 0x1fc074u: goto label_1fc074;
        case 0x1fc090u: goto label_1fc090;
        case 0x1fc0a8u: goto label_1fc0a8;
        case 0x1fc0b8u: goto label_1fc0b8;
        case 0x1fc0ccu: goto label_1fc0cc;
        case 0x1fc0e0u: goto label_1fc0e0;
        case 0x1fc0f4u: goto label_1fc0f4;
        case 0x1fc134u: goto label_1fc134;
        case 0x1fc17cu: goto label_1fc17c;
        case 0x1fc194u: goto label_1fc194;
        case 0x1fc1b0u: goto label_1fc1b0;
        case 0x1fc1c0u: goto label_1fc1c0;
        case 0x1fc1d8u: goto label_1fc1d8;
        case 0x1fc1f0u: goto label_1fc1f0;
        case 0x1fc1fcu: goto label_1fc1fc;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc250u: goto label_1fc250;
        case 0x1fc270u: goto label_1fc270;
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc2c0u: goto label_1fc2c0;
        case 0x1fc330u: goto label_1fc330;
        case 0x1fc340u: goto label_1fc340;
        case 0x1fc354u: goto label_1fc354;
        case 0x1fc35cu: goto label_1fc35c;
        case 0x1fc36cu: goto label_1fc36c;
        case 0x1fc428u: goto label_1fc428;
        case 0x1fc460u: goto label_1fc460;
        case 0x1fc48cu: goto label_1fc48c;
        default: break;
    }

    ctx->pc = 0x1fbf90u;

    // 0x1fbf90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fbf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1fbf94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fbf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fbf98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fbf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fbf9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fbf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fbfa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fbfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fbfa4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fbfa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fbfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fbfac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fbfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbfb0: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1fbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1fbfb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfb8: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x1fbfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1fbfbc: 0xc07e06c  jal         func_1F81B0
    ctx->pc = 0x1FBFBCu;
    SET_GPR_U32(ctx, 31, 0x1FBFC4u);
    ctx->pc = 0x1FBFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFBCu;
            // 0x1fbfc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F81B0u;
    if (runtime->hasFunction(0x1F81B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F81B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFC4u; }
        if (ctx->pc != 0x1FBFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGekkaViewMode__Fi_0x1f81b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFC4u; }
        if (ctx->pc != 0x1FBFC4u) { return; }
    }
    ctx->pc = 0x1FBFC4u;
label_1fbfc4:
    // 0x1fbfc4: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1FBFC4u;
    {
        const bool branch_taken_0x1fbfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFC4u;
            // 0x1fbfc8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfc4) {
            ctx->pc = 0x1FC208u;
            goto label_1fc208;
        }
    }
    ctx->pc = 0x1FBFCCu;
    // 0x1fbfcc: 0x86110002  lh          $s1, 0x2($s0)
    ctx->pc = 0x1fbfccu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1fbfd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbfd4: 0x12220078  beq         $s1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1FBFD4u;
    {
        const bool branch_taken_0x1fbfd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFD4u;
            // 0x1fbfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfd4) {
            ctx->pc = 0x1FC1B8u;
            goto label_1fc1b8;
        }
    }
    ctx->pc = 0x1FBFDCu;
    // 0x1fbfdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbfe0: 0x12220042  beq         $s1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1FBFE0u;
    {
        const bool branch_taken_0x1fbfe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFE0u;
            // 0x1fbfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfe0) {
            ctx->pc = 0x1FC0ECu;
            goto label_1fc0ec;
        }
    }
    ctx->pc = 0x1FBFE8u;
    // 0x1fbfe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbfec: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBFECu;
    {
        const bool branch_taken_0x1fbfec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFECu;
            // 0x1fbff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfec) {
            ctx->pc = 0x1FC004u;
            goto label_1fc004;
        }
    }
    ctx->pc = 0x1FBFF4u;
    // 0x1fbff4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBFF4u;
    {
        const bool branch_taken_0x1fbff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbff4) {
            ctx->pc = 0x1FC004u;
            goto label_1fc004;
        }
    }
    ctx->pc = 0x1FBFFCu;
    // 0x1fbffc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1FBFFCu;
    {
        const bool branch_taken_0x1fbffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFFCu;
            // 0x1fc000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbffc) {
            ctx->pc = 0x1FC200u;
            goto label_1fc200;
        }
    }
    ctx->pc = 0x1FC004u;
label_1fc004:
    // 0x1fc004: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x1FC004u;
    SET_GPR_U32(ctx, 31, 0x1FC00Cu);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC00Cu; }
        if (ctx->pc != 0x1FC00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC00Cu; }
        if (ctx->pc != 0x1FC00Cu) { return; }
    }
    ctx->pc = 0x1FC00Cu;
label_1fc00c:
    // 0x1fc00c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1FC00Cu;
    {
        const bool branch_taken_0x1fc00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc00c) {
            ctx->pc = 0x1FC1FCu;
            goto label_1fc1fc;
        }
    }
    ctx->pc = 0x1FC014u;
    // 0x1fc014: 0x87869000  lh          $a2, -0x7000($gp)
    ctx->pc = 0x1fc014u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938624)));
    // 0x1fc018: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fc018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fc01c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1fc01cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1fc020: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fc020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fc024: 0x24a58dd0  addiu       $a1, $a1, -0x7230
    ctx->pc = 0x1fc024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938064));
    // 0x1fc028: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1FC028u;
    SET_GPR_U32(ctx, 31, 0x1FC030u);
    ctx->pc = 0x1FC02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC028u;
            // 0x1fc02c: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC030u; }
        if (ctx->pc != 0x1FC030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC030u; }
        if (ctx->pc != 0x1FC030u) { return; }
    }
    ctx->pc = 0x1FC030u;
label_1fc030:
    // 0x1fc030: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fc030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fc034: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fc034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fc038: 0x8c23dc14  lw          $v1, -0x23EC($at)
    ctx->pc = 0x1fc038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958100)));
    // 0x1fc03c: 0x27a600ac  addiu       $a2, $sp, 0xAC
    ctx->pc = 0x1fc03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1fc040: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc044: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fc044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fc048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fc048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fc04c: 0x8c22dc10  lw          $v0, -0x23F0($at)
    ctx->pc = 0x1fc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958096)));
    // 0x1fc050: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1fc050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc054: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1FC054u;
    SET_GPR_U32(ctx, 31, 0x1FC05Cu);
    ctx->pc = 0x1FC058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC054u;
            // 0x1fc058: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC05Cu; }
        if (ctx->pc != 0x1FC05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC05Cu; }
        if (ctx->pc != 0x1FC05Cu) { return; }
    }
    ctx->pc = 0x1FC05Cu;
label_1fc05c:
    // 0x1fc05c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC05Cu;
    {
        const bool branch_taken_0x1fc05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC05Cu;
            // 0x1fc060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc05c) {
            ctx->pc = 0x1FC0ACu;
            goto label_1fc0ac;
        }
    }
    ctx->pc = 0x1FC064u;
    // 0x1fc064: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fc064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fc068: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1fc068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fc06c: 0xc04b950  jal         func_12E540
    ctx->pc = 0x1FC06Cu;
    SET_GPR_U32(ctx, 31, 0x1FC074u);
    ctx->pc = 0x1FC070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC06Cu;
            // 0x1fc070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC074u; }
        if (ctx->pc != 0x1FC074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC074u; }
        if (ctx->pc != 0x1FC074u) { return; }
    }
    ctx->pc = 0x1FC074u;
label_1fc074:
    // 0x1fc074: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fc074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fc078: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc084: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x1fc084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fc088: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1FC088u;
    SET_GPR_U32(ctx, 31, 0x1FC090u);
    ctx->pc = 0x1FC08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC088u;
            // 0x1fc08c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC090u; }
        if (ctx->pc != 0x1FC090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC090u; }
        if (ctx->pc != 0x1FC090u) { return; }
    }
    ctx->pc = 0x1FC090u;
label_1fc090:
    // 0x1fc090: 0x87829000  lh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938624)));
    // 0x1fc094: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fc094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fc098: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fc098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fc09c: 0x24a58de8  addiu       $a1, $a1, -0x7218
    ctx->pc = 0x1fc09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938088));
    // 0x1fc0a0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1FC0A0u;
    SET_GPR_U32(ctx, 31, 0x1FC0A8u);
    ctx->pc = 0x1FC0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0A0u;
            // 0x1fc0a4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0A8u; }
        if (ctx->pc != 0x1FC0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0A8u; }
        if (ctx->pc != 0x1FC0A8u) { return; }
    }
    ctx->pc = 0x1FC0A8u;
label_1fc0a8:
    // 0x1fc0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0ac:
    // 0x1fc0ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fc0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fc0b0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1FC0B0u;
    SET_GPR_U32(ctx, 31, 0x1FC0B8u);
    ctx->pc = 0x1FC0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0B0u;
            // 0x1fc0b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0B8u; }
        if (ctx->pc != 0x1FC0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0B8u; }
        if (ctx->pc != 0x1FC0B8u) { return; }
    }
    ctx->pc = 0x1FC0B8u;
label_1fc0b8:
    // 0x1fc0b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fc0bc: 0xaf829004  sw          $v0, -0x6FFC($gp)
    ctx->pc = 0x1fc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938628), GPR_U32(ctx, 2));
    // 0x1fc0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc0c4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FC0C4u;
    SET_GPR_U32(ctx, 31, 0x1FC0CCu);
    ctx->pc = 0x1FC0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0C4u;
            // 0x1fc0c8: 0x24a58df8  addiu       $a1, $a1, -0x7208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0CCu; }
        if (ctx->pc != 0x1FC0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0CCu; }
        if (ctx->pc != 0x1FC0CCu) { return; }
    }
    ctx->pc = 0x1FC0CCu;
label_1fc0cc:
    // 0x1fc0cc: 0x87829000  lh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc0ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938624)));
    // 0x1fc0d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fc0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fc0d4: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x1fc0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x1fc0d8: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x1FC0D8u;
    SET_GPR_U32(ctx, 31, 0x1FC0E0u);
    ctx->pc = 0x1FC0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0D8u;
            // 0x1fc0dc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0E0u; }
        if (ctx->pc != 0x1FC0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0E0u; }
        if (ctx->pc != 0x1FC0E0u) { return; }
    }
    ctx->pc = 0x1FC0E0u;
label_1fc0e0:
    // 0x1fc0e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc0e4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1FC0E4u;
    {
        const bool branch_taken_0x1fc0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0E4u;
            // 0x1fc0e8: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0e4) {
            ctx->pc = 0x1FC1FCu;
            goto label_1fc1fc;
        }
    }
    ctx->pc = 0x1FC0ECu;
label_1fc0ec:
    // 0x1fc0ec: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x1FC0ECu;
    SET_GPR_U32(ctx, 31, 0x1FC0F4u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0F4u; }
        if (ctx->pc != 0x1FC0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0F4u; }
        if (ctx->pc != 0x1FC0F4u) { return; }
    }
    ctx->pc = 0x1FC0F4u;
label_1fc0f4:
    // 0x1fc0f4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1FC0F4u;
    {
        const bool branch_taken_0x1fc0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0F4u;
            // 0x1fc0f8: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0f4) {
            ctx->pc = 0x1FC1FCu;
            goto label_1fc1fc;
        }
    }
    ctx->pc = 0x1FC0FCu;
    // 0x1fc0fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC0FCu;
    {
        const bool branch_taken_0x1fc0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0FCu;
            // 0x1fc100: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0fc) {
            ctx->pc = 0x1FC10Cu;
            goto label_1fc10c;
        }
    }
    ctx->pc = 0x1FC104u;
    // 0x1fc104: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC104u;
    {
        const bool branch_taken_0x1fc104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC104u;
            // 0x1fc108: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc104) {
            ctx->pc = 0x1FC13Cu;
            goto label_1fc13c;
        }
    }
    ctx->pc = 0x1FC10Cu;
label_1fc10c:
    // 0x1fc10c: 0x87829000  lh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938624)));
    // 0x1fc110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fc110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc114: 0xa7829000  sh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc114u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938624), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fc118: 0x87829000  lh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938624)));
    // 0x1fc11c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC11Cu;
    {
        const bool branch_taken_0x1fc11c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FC120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC11Cu;
            // 0x1fc120: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc11c) {
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC124u;
    // 0x1fc124: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1fc124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fc128: 0xa7829000  sh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc128u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938624), (uint16_t)GPR_U32(ctx, 2));
label_1fc12c:
    // 0x1fc12c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC12Cu;
    SET_GPR_U32(ctx, 31, 0x1FC134u);
    ctx->pc = 0x1FC130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC12Cu;
            // 0x1fc130: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC134u; }
        if (ctx->pc != 0x1FC134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC134u; }
        if (ctx->pc != 0x1FC134u) { return; }
    }
    ctx->pc = 0x1FC134u;
label_1fc134:
    // 0x1fc134: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC134u;
    {
        const bool branch_taken_0x1fc134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC134u;
            // 0x1fc138: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc134) {
            ctx->pc = 0x1FC198u;
            goto label_1fc198;
        }
    }
    ctx->pc = 0x1FC13Cu;
label_1fc13c:
    // 0x1fc13c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC13Cu;
    {
        const bool branch_taken_0x1fc13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC13Cu;
            // 0x1fc140: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc13c) {
            ctx->pc = 0x1FC154u;
            goto label_1fc154;
        }
    }
    ctx->pc = 0x1FC144u;
    // 0x1fc144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC144u;
    {
        const bool branch_taken_0x1fc144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC144u;
            // 0x1fc148: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc144) {
            ctx->pc = 0x1FC154u;
            goto label_1fc154;
        }
    }
    ctx->pc = 0x1FC14Cu;
    // 0x1fc14c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC14Cu;
    {
        const bool branch_taken_0x1fc14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC14Cu;
            // 0x1fc150: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc14c) {
            ctx->pc = 0x1FC184u;
            goto label_1fc184;
        }
    }
    ctx->pc = 0x1FC154u;
label_1fc154:
    // 0x1fc154: 0x87829000  lh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938624)));
    // 0x1fc158: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc15c: 0xa7829000  sh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc15cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938624), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fc160: 0x87829000  lh          $v0, -0x7000($gp)
    ctx->pc = 0x1fc160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938624)));
    // 0x1fc164: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x1fc164u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fc168: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC168u;
    {
        const bool branch_taken_0x1fc168 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC168u;
            // 0x1fc16c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc168) {
            ctx->pc = 0x1FC174u;
            goto label_1fc174;
        }
    }
    ctx->pc = 0x1FC170u;
    // 0x1fc170: 0xa7809000  sh          $zero, -0x7000($gp)
    ctx->pc = 0x1fc170u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938624), (uint16_t)GPR_U32(ctx, 0));
label_1fc174:
    // 0x1fc174: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC174u;
    SET_GPR_U32(ctx, 31, 0x1FC17Cu);
    ctx->pc = 0x1FC178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC174u;
            // 0x1fc178: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC17Cu; }
        if (ctx->pc != 0x1FC17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC17Cu; }
        if (ctx->pc != 0x1FC17Cu) { return; }
    }
    ctx->pc = 0x1FC17Cu;
label_1fc17c:
    // 0x1fc17c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC17Cu;
    {
        const bool branch_taken_0x1fc17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc17c) {
            ctx->pc = 0x1FC194u;
            goto label_1fc194;
        }
    }
    ctx->pc = 0x1FC184u;
label_1fc184:
    // 0x1fc184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC184u;
    {
        const bool branch_taken_0x1fc184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC184u;
            // 0x1fc188: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc184) {
            ctx->pc = 0x1FC194u;
            goto label_1fc194;
        }
    }
    ctx->pc = 0x1FC18Cu;
    // 0x1fc18c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC18Cu;
    SET_GPR_U32(ctx, 31, 0x1FC194u);
    ctx->pc = 0x1FC190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC18Cu;
            // 0x1fc190: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC194u; }
        if (ctx->pc != 0x1FC194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC194u; }
        if (ctx->pc != 0x1FC194u) { return; }
    }
    ctx->pc = 0x1FC194u;
label_1fc194:
    // 0x1fc194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc198:
    // 0x1fc198: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC198u;
    {
        const bool branch_taken_0x1fc198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc198) {
            ctx->pc = 0x1FC1FCu;
            goto label_1fc1fc;
        }
    }
    ctx->pc = 0x1FC1A0u;
    // 0x1fc1a0: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1fc1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1fc1a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fc1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fc1a8: 0xc08e898  jal         func_23A260
    ctx->pc = 0x1FC1A8u;
    SET_GPR_U32(ctx, 31, 0x1FC1B0u);
    ctx->pc = 0x1FC1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1A8u;
            // 0x1fc1ac: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1B0u; }
        if (ctx->pc != 0x1FC1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1B0u; }
        if (ctx->pc != 0x1FC1B0u) { return; }
    }
    ctx->pc = 0x1FC1B0u;
label_1fc1b0:
    // 0x1fc1b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FC1B0u;
    {
        const bool branch_taken_0x1fc1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1B0u;
            // 0x1fc1b4: 0xa6110002  sh          $s1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b0) {
            ctx->pc = 0x1FC1FCu;
            goto label_1fc1fc;
        }
    }
    ctx->pc = 0x1FC1B8u;
label_1fc1b8:
    // 0x1fc1b8: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x1FC1B8u;
    SET_GPR_U32(ctx, 31, 0x1FC1C0u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1C0u; }
        if (ctx->pc != 0x1FC1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1C0u; }
        if (ctx->pc != 0x1FC1C0u) { return; }
    }
    ctx->pc = 0x1FC1C0u;
label_1fc1c0:
    // 0x1fc1c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FC1C0u;
    {
        const bool branch_taken_0x1fc1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1C0u;
            // 0x1fc1c4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1c0) {
            ctx->pc = 0x1FC1FCu;
            goto label_1fc1fc;
        }
    }
    ctx->pc = 0x1FC1C8u;
    // 0x1fc1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1cc: 0x24a58e00  addiu       $a1, $a1, -0x7200
    ctx->pc = 0x1fc1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938112));
    // 0x1fc1d0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FC1D0u;
    SET_GPR_U32(ctx, 31, 0x1FC1D8u);
    ctx->pc = 0x1FC1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1D0u;
            // 0x1fc1d4: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1D8u; }
        if (ctx->pc != 0x1FC1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1D8u; }
        if (ctx->pc != 0x1FC1D8u) { return; }
    }
    ctx->pc = 0x1FC1D8u;
label_1fc1d8:
    // 0x1fc1d8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1fc1dc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1fc1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1fc1e0: 0xaf809004  sw          $zero, -0x6FFC($gp)
    ctx->pc = 0x1fc1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938628), GPR_U32(ctx, 0));
    // 0x1fc1e4: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1fc1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fc1e8: 0xc04b950  jal         func_12E540
    ctx->pc = 0x1FC1E8u;
    SET_GPR_U32(ctx, 31, 0x1FC1F0u);
    ctx->pc = 0x1FC1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1E8u;
            // 0x1fc1ec: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1F0u; }
        if (ctx->pc != 0x1FC1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1F0u; }
        if (ctx->pc != 0x1FC1F0u) { return; }
    }
    ctx->pc = 0x1FC1F0u;
label_1fc1f0:
    // 0x1fc1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1f4: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FC1F4u;
    SET_GPR_U32(ctx, 31, 0x1FC1FCu);
    ctx->pc = 0x1FC1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC1F4u;
            // 0x1fc1f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (runtime->hasFunction(0x1F9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1FCu; }
        if (ctx->pc != 0x1FC1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC1FCu; }
        if (ctx->pc != 0x1FC1FCu) { return; }
    }
    ctx->pc = 0x1FC1FCu;
label_1fc1fc:
    // 0x1fc1fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc200:
    // 0x1fc200: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1FC200u;
    {
        const bool branch_taken_0x1fc200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC200u;
            // 0x1fc204: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc200) {
            ctx->pc = 0x1FC498u;
            goto label_1fc498;
        }
    }
    ctx->pc = 0x1FC208u;
label_1fc208:
    // 0x1fc208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc20c: 0x3463b8f4  ori         $v1, $v1, 0xB8F4
    ctx->pc = 0x1fc20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47348);
    // 0x1fc210: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fc210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fc214: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fc214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc218: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1FC218u;
    {
        const bool branch_taken_0x1fc218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc218) {
            ctx->pc = 0x1FC374u;
            goto label_1fc374;
        }
    }
    ctx->pc = 0x1FC220u;
    // 0x1fc220: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC220u;
    {
        const bool branch_taken_0x1fc220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC220u;
            // 0x1fc224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc220) {
            ctx->pc = 0x1FC230u;
            goto label_1fc230;
        }
    }
    ctx->pc = 0x1FC228u;
    // 0x1fc228: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1FC228u;
    {
        const bool branch_taken_0x1fc228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC228u;
            // 0x1fc22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc228) {
            ctx->pc = 0x1FC494u;
            goto label_1fc494;
        }
    }
    ctx->pc = 0x1FC230u;
label_1fc230:
    // 0x1fc230: 0xc07ecc8  jal         func_1FB320
    ctx->pc = 0x1FC230u;
    SET_GPR_U32(ctx, 31, 0x1FC238u);
    ctx->pc = 0x1FB320u;
    if (runtime->hasFunction(0x1FB320u)) {
        auto targetFn = runtime->lookupFunction(0x1FB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC238u; }
        if (ctx->pc != 0x1FC238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        georama_menu_local_key__Fi_0x1fb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC238u; }
        if (ctx->pc != 0x1FC238u) { return; }
    }
    ctx->pc = 0x1FC238u;
label_1fc238:
    // 0x1fc238: 0x8e110154  lw          $s1, 0x154($s0)
    ctx->pc = 0x1fc238u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1fc23c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fc23cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc240: 0x8e140150  lw          $s4, 0x150($s0)
    ctx->pc = 0x1fc240u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1fc244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc248: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1FC248u;
    SET_GPR_U32(ctx, 31, 0x1FC250u);
    ctx->pc = 0x1FC24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC248u;
            // 0x1fc24c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC250u; }
        if (ctx->pc != 0x1FC250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC250u; }
        if (ctx->pc != 0x1FC250u) { return; }
    }
    ctx->pc = 0x1FC250u;
label_1fc250:
    // 0x1fc250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fc250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc254: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1fc254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc258: 0x26050154  addiu       $a1, $s0, 0x154
    ctx->pc = 0x1fc258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x1fc25c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x1fc25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fc260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc264: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fc264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fc268: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x1FC268u;
    SET_GPR_U32(ctx, 31, 0x1FC270u);
    ctx->pc = 0x1FC26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC268u;
            // 0x1fc26c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC270u; }
        if (ctx->pc != 0x1FC270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC270u; }
        if (ctx->pc != 0x1FC270u) { return; }
    }
    ctx->pc = 0x1FC270u;
label_1fc270:
    // 0x1fc270: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x1fc270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fc274: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x1fc274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1fc278: 0x8e070150  lw          $a3, 0x150($s0)
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1fc27c: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1FC27Cu;
    SET_GPR_U32(ctx, 31, 0x1FC284u);
    ctx->pc = 0x1FC280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC27Cu;
            // 0x1fc280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC284u; }
        if (ctx->pc != 0x1FC284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC284u; }
        if (ctx->pc != 0x1FC284u) { return; }
    }
    ctx->pc = 0x1FC284u;
label_1fc284:
    // 0x1fc284: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1fc288: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC288u;
    {
        const bool branch_taken_0x1fc288 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC288u;
            // 0x1fc28c: 0x282082a  slt         $at, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc288) {
            ctx->pc = 0x1FC2ACu;
            goto label_1fc2ac;
        }
    }
    ctx->pc = 0x1FC290u;
    // 0x1fc290: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC290u;
    {
        const bool branch_taken_0x1fc290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC290u;
            // 0x1fc294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc290) {
            ctx->pc = 0x1FC29Cu;
            goto label_1fc29c;
        }
    }
    ctx->pc = 0x1FC298u;
    // 0x1fc298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc29c:
    // 0x1fc29c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fc2a0: 0x27829030  addiu       $v0, $gp, -0x6FD0
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x1fc2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc2a8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1fc2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_1fc2ac:
    // 0x1fc2ac: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1fc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1fc2b0: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC2B0u;
    {
        const bool branch_taken_0x1fc2b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2B0u;
            // 0x1fc2b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2b0) {
            ctx->pc = 0x1FC2D4u;
            goto label_1fc2d4;
        }
    }
    ctx->pc = 0x1FC2B8u;
    // 0x1fc2b8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC2B8u;
    SET_GPR_U32(ctx, 31, 0x1FC2C0u);
    ctx->pc = 0x1FC2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2B8u;
            // 0x1fc2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC2C0u; }
        if (ctx->pc != 0x1FC2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC2C0u; }
        if (ctx->pc != 0x1FC2C0u) { return; }
    }
    ctx->pc = 0x1FC2C0u;
label_1fc2c0:
    // 0x1fc2c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc2c4: 0xa7808f6c  sh          $zero, -0x7094($gp)
    ctx->pc = 0x1fc2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938476), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fc2c8: 0xa3828f74  sb          $v0, -0x708C($gp)
    ctx->pc = 0x1fc2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938484), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc2cc: 0xa7808f70  sh          $zero, -0x7090($gp)
    ctx->pc = 0x1fc2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fc2d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fc2d4:
    // 0x1fc2d4: 0x12420023  beq         $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FC2D4u;
    {
        const bool branch_taken_0x1fc2d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2D4u;
            // 0x1fc2d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2d4) {
            ctx->pc = 0x1FC364u;
            goto label_1fc364;
        }
    }
    ctx->pc = 0x1FC2DCu;
    // 0x1fc2dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1fc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fc2e0: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FC2E0u;
    {
        const bool branch_taken_0x1fc2e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2E0u;
            // 0x1fc2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2e0) {
            ctx->pc = 0x1FC348u;
            goto label_1fc348;
        }
    }
    ctx->pc = 0x1FC2E8u;
    // 0x1fc2e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc2ec: 0x12420017  beq         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC2ECu;
    {
        const bool branch_taken_0x1fc2ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2ECu;
            // 0x1fc2f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2ec) {
            ctx->pc = 0x1FC34Cu;
            goto label_1fc34c;
        }
    }
    ctx->pc = 0x1FC2F4u;
    // 0x1fc2f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc2f8: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FC2F8u;
    {
        const bool branch_taken_0x1fc2f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC2F8u;
            // 0x1fc2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f8) {
            ctx->pc = 0x1FC338u;
            goto label_1fc338;
        }
    }
    ctx->pc = 0x1FC300u;
    // 0x1fc300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc304: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC304u;
    {
        const bool branch_taken_0x1fc304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC304u;
            // 0x1fc308: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc304) {
            ctx->pc = 0x1FC314u;
            goto label_1fc314;
        }
    }
    ctx->pc = 0x1FC30Cu;
    // 0x1fc30c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1FC30Cu;
    {
        const bool branch_taken_0x1fc30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc30c) {
            ctx->pc = 0x1FC490u;
            goto label_1fc490;
        }
    }
    ctx->pc = 0x1FC314u;
label_1fc314:
    // 0x1fc314: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fc314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fc318: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fc318u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1fc31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc320: 0xac22b8f4  sw          $v0, -0x470C($at)
    ctx->pc = 0x1fc320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 2));
    // 0x1fc324: 0x24a58e10  addiu       $a1, $a1, -0x71F0
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938128));
    // 0x1fc328: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FC328u;
    SET_GPR_U32(ctx, 31, 0x1FC330u);
    ctx->pc = 0x1FC32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC328u;
            // 0x1fc32c: 0xaf828f7c  sw          $v0, -0x7084($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938492), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC330u; }
        if (ctx->pc != 0x1FC330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC330u; }
        if (ctx->pc != 0x1FC330u) { return; }
    }
    ctx->pc = 0x1FC330u;
label_1fc330:
    // 0x1fc330: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1FC330u;
    {
        const bool branch_taken_0x1fc330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc330) {
            ctx->pc = 0x1FC490u;
            goto label_1fc490;
        }
    }
    ctx->pc = 0x1FC338u;
label_1fc338:
    // 0x1fc338: 0xc07e738  jal         func_1F9CE0
    ctx->pc = 0x1FC338u;
    SET_GPR_U32(ctx, 31, 0x1FC340u);
    ctx->pc = 0x1FC33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC338u;
            // 0x1fc33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CE0u;
    if (runtime->hasFunction(0x1F9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC340u; }
        if (ctx->pc != 0x1FC340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnSelectMode__12CMenuGeoramaFi_0x1f9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC340u; }
        if (ctx->pc != 0x1FC340u) { return; }
    }
    ctx->pc = 0x1FC340u;
label_1fc340:
    // 0x1fc340: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1FC340u;
    {
        const bool branch_taken_0x1fc340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc340) {
            ctx->pc = 0x1FC490u;
            goto label_1fc490;
        }
    }
    ctx->pc = 0x1FC348u;
label_1fc348:
    // 0x1fc348: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc34c:
    // 0x1fc34c: 0xc07e260  jal         func_1F8980
    ctx->pc = 0x1FC34Cu;
    SET_GPR_U32(ctx, 31, 0x1FC354u);
    ctx->pc = 0x1FC350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC34Cu;
            // 0x1fc350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8980u;
    if (runtime->hasFunction(0x1F8980u)) {
        auto targetFn = runtime->lookupFunction(0x1F8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC354u; }
        if (ctx->pc != 0x1FC354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ArrangePartsList__12CMenuGeoramaFii_0x1f8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC354u; }
        if (ctx->pc != 0x1FC354u) { return; }
    }
    ctx->pc = 0x1FC354u;
label_1fc354:
    // 0x1fc354: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC354u;
    SET_GPR_U32(ctx, 31, 0x1FC35Cu);
    ctx->pc = 0x1FC358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC354u;
            // 0x1fc358: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC35Cu; }
        if (ctx->pc != 0x1FC35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC35Cu; }
        if (ctx->pc != 0x1FC35Cu) { return; }
    }
    ctx->pc = 0x1FC35Cu;
label_1fc35c:
    // 0x1fc35c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1FC35Cu;
    {
        const bool branch_taken_0x1fc35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc35c) {
            ctx->pc = 0x1FC490u;
            goto label_1fc490;
        }
    }
    ctx->pc = 0x1FC364u;
label_1fc364:
    // 0x1fc364: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC364u;
    SET_GPR_U32(ctx, 31, 0x1FC36Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC36Cu; }
        if (ctx->pc != 0x1FC36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC36Cu; }
        if (ctx->pc != 0x1FC36Cu) { return; }
    }
    ctx->pc = 0x1FC36Cu;
label_1fc36c:
    // 0x1fc36c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1FC36Cu;
    {
        const bool branch_taken_0x1fc36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc36c) {
            ctx->pc = 0x1FC490u;
            goto label_1fc490;
        }
    }
    ctx->pc = 0x1FC374u;
label_1fc374:
    // 0x1fc374: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1fc378: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC378u;
    {
        const bool branch_taken_0x1fc378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC378u;
            // 0x1fc37c: 0x87828f70  lh          $v0, -0x7090($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc378) {
            ctx->pc = 0x1FC388u;
            goto label_1fc388;
        }
    }
    ctx->pc = 0x1FC380u;
    // 0x1fc380: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc384: 0xa7838f70  sh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc384u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 3));
label_1fc388:
    // 0x1fc388: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x1fc388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1fc38c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC38Cu;
    {
        const bool branch_taken_0x1fc38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC38Cu;
            // 0x1fc390: 0x32630010  andi        $v1, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc38c) {
            ctx->pc = 0x1FC3A4u;
            goto label_1fc3a4;
        }
    }
    ctx->pc = 0x1FC394u;
    // 0x1fc394: 0x87838f70  lh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1fc398: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fc39c: 0xa7838f70  sh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc39cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc3a0: 0x32630010  andi        $v1, $s3, 0x10
    ctx->pc = 0x1fc3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_1fc3a4:
    // 0x1fc3a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC3A4u;
    {
        const bool branch_taken_0x1fc3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3A4u;
            // 0x1fc3a8: 0x32630020  andi        $v1, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3a4) {
            ctx->pc = 0x1FC3BCu;
            goto label_1fc3bc;
        }
    }
    ctx->pc = 0x1FC3ACu;
    // 0x1fc3ac: 0x87838f70  lh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1fc3b0: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1fc3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1fc3b4: 0xa7838f70  sh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc3b8: 0x32630020  andi        $v1, $s3, 0x20
    ctx->pc = 0x1fc3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_1fc3bc:
    // 0x1fc3bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC3BCu;
    {
        const bool branch_taken_0x1fc3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc3bc) {
            ctx->pc = 0x1FC3D0u;
            goto label_1fc3d0;
        }
    }
    ctx->pc = 0x1FC3C4u;
    // 0x1fc3c4: 0x87838f70  lh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc3c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1fc3c8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1fc3cc: 0xa7838f70  sh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 3));
label_1fc3d0:
    // 0x1fc3d0: 0x87838f70  lh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc3d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1fc3d4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC3D4u;
    {
        const bool branch_taken_0x1fc3d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fc3d4) {
            ctx->pc = 0x1FC3E0u;
            goto label_1fc3e0;
        }
    }
    ctx->pc = 0x1FC3DCu;
    // 0x1fc3dc: 0xa7808f70  sh          $zero, -0x7090($gp)
    ctx->pc = 0x1fc3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 0));
label_1fc3e0:
    // 0x1fc3e0: 0x87838f70  lh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1fc3e4: 0x28610016  slti        $at, $v1, 0x16
    ctx->pc = 0x1fc3e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1fc3e8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC3E8u;
    {
        const bool branch_taken_0x1fc3e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC3E8u;
            // 0x1fc3ec: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3e8) {
            ctx->pc = 0x1FC3F4u;
            goto label_1fc3f4;
        }
    }
    ctx->pc = 0x1FC3F0u;
    // 0x1fc3f0: 0xa7838f70  sh          $v1, -0x7090($gp)
    ctx->pc = 0x1fc3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 3));
label_1fc3f4:
    // 0x1fc3f4: 0x87848f70  lh          $a0, -0x7090($gp)
    ctx->pc = 0x1fc3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938480)));
    // 0x1fc3f8: 0x87838f6c  lh          $v1, -0x7094($gp)
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1fc3fc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1fc3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fc400: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC400u;
    {
        const bool branch_taken_0x1fc400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc400) {
            ctx->pc = 0x1FC40Cu;
            goto label_1fc40c;
        }
    }
    ctx->pc = 0x1FC408u;
    // 0x1fc408: 0xa7848f6c  sh          $a0, -0x7094($gp)
    ctx->pc = 0x1fc408u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938476), (uint16_t)GPR_U32(ctx, 4));
label_1fc40c:
    // 0x1fc40c: 0x87838f6c  lh          $v1, -0x7094($gp)
    ctx->pc = 0x1fc40cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1fc410: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1fc410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1fc414: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fc414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fc418: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC418u;
    {
        const bool branch_taken_0x1fc418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc418) {
            ctx->pc = 0x1FC44Cu;
            goto label_1fc44c;
        }
    }
    ctx->pc = 0x1FC420u;
    // 0x1fc420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC420u;
    {
        const bool branch_taken_0x1fc420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc420) {
            ctx->pc = 0x1FC434u;
            goto label_1fc434;
        }
    }
    ctx->pc = 0x1FC428u;
label_1fc428:
    // 0x1fc428: 0x87838f6c  lh          $v1, -0x7094($gp)
    ctx->pc = 0x1fc428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1fc42c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fc42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fc430: 0xa7838f6c  sh          $v1, -0x7094($gp)
    ctx->pc = 0x1fc430u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938476), (uint16_t)GPR_U32(ctx, 3));
label_1fc434:
    // 0x1fc434: 0x0  nop
    ctx->pc = 0x1fc434u;
    // NOP
    // 0x1fc438: 0x87838f6c  lh          $v1, -0x7094($gp)
    ctx->pc = 0x1fc438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938476)));
    // 0x1fc43c: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1fc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1fc440: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1fc440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fc444: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FC444u;
    {
        const bool branch_taken_0x1fc444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc444) {
            ctx->pc = 0x1FC428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fc428;
        }
    }
    ctx->pc = 0x1FC44Cu;
label_1fc44c:
    // 0x1fc44c: 0x0  nop
    ctx->pc = 0x1fc44cu;
    // NOP
    // 0x1fc450: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC450u;
    {
        const bool branch_taken_0x1fc450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FC454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC450u;
            // 0x1fc454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc450) {
            ctx->pc = 0x1FC464u;
            goto label_1fc464;
        }
    }
    ctx->pc = 0x1FC458u;
    // 0x1fc458: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FC458u;
    SET_GPR_U32(ctx, 31, 0x1FC460u);
    ctx->pc = 0x1FC45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC458u;
            // 0x1fc45c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC460u; }
        if (ctx->pc != 0x1FC460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC460u; }
        if (ctx->pc != 0x1FC460u) { return; }
    }
    ctx->pc = 0x1FC460u;
label_1fc460:
    // 0x1fc460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc464:
    // 0x1fc464: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC464u;
    {
        const bool branch_taken_0x1fc464 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC464u;
            // 0x1fc468: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc464) {
            ctx->pc = 0x1FC474u;
            goto label_1fc474;
        }
    }
    ctx->pc = 0x1FC46Cu;
    // 0x1fc46c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC46Cu;
    {
        const bool branch_taken_0x1fc46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc46c) {
            ctx->pc = 0x1FC490u;
            goto label_1fc490;
        }
    }
    ctx->pc = 0x1FC474u;
label_1fc474:
    // 0x1fc474: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fc474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fc478: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fc478u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1fc47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc480: 0x24a58e20  addiu       $a1, $a1, -0x71E0
    ctx->pc = 0x1fc480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938144));
    // 0x1fc484: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FC484u;
    SET_GPR_U32(ctx, 31, 0x1FC48Cu);
    ctx->pc = 0x1FC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC484u;
            // 0x1fc488: 0xac20b8f4  sw          $zero, -0x470C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC48Cu; }
        if (ctx->pc != 0x1FC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC48Cu; }
        if (ctx->pc != 0x1FC48Cu) { return; }
    }
    ctx->pc = 0x1FC48Cu;
label_1fc48c:
    // 0x1fc48c: 0xaf808f7c  sw          $zero, -0x7084($gp)
    ctx->pc = 0x1fc48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938492), GPR_U32(ctx, 0));
label_1fc490:
    // 0x1fc490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc494:
    // 0x1fc494: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fc494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fc498:
    // 0x1fc498: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fc498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc49c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc49cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc4a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc4a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc4a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC4ACu;
            // 0x1fc4b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC4B4u;
}
