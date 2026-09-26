#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i
// Address: 0x2bb440 - 0x2bb7a8
void MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440");
#endif

    switch (ctx->pc) {
        case 0x2bb47cu: goto label_2bb47c;
        case 0x2bb49cu: goto label_2bb49c;
        case 0x2bb4c4u: goto label_2bb4c4;
        case 0x2bb4ccu: goto label_2bb4cc;
        case 0x2bb4d4u: goto label_2bb4d4;
        case 0x2bb4ecu: goto label_2bb4ec;
        case 0x2bb4f4u: goto label_2bb4f4;
        case 0x2bb4fcu: goto label_2bb4fc;
        case 0x2bb514u: goto label_2bb514;
        case 0x2bb51cu: goto label_2bb51c;
        case 0x2bb524u: goto label_2bb524;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb54cu: goto label_2bb54c;
        case 0x2bb554u: goto label_2bb554;
        case 0x2bb560u: goto label_2bb560;
        case 0x2bb57cu: goto label_2bb57c;
        case 0x2bb580u: goto label_2bb580;
        case 0x2bb588u: goto label_2bb588;
        case 0x2bb590u: goto label_2bb590;
        case 0x2bb5a8u: goto label_2bb5a8;
        case 0x2bb5b0u: goto label_2bb5b0;
        case 0x2bb5b8u: goto label_2bb5b8;
        case 0x2bb5d0u: goto label_2bb5d0;
        case 0x2bb5d8u: goto label_2bb5d8;
        case 0x2bb5e0u: goto label_2bb5e0;
        case 0x2bb5e8u: goto label_2bb5e8;
        case 0x2bb600u: goto label_2bb600;
        case 0x2bb608u: goto label_2bb608;
        case 0x2bb610u: goto label_2bb610;
        case 0x2bb62cu: goto label_2bb62c;
        case 0x2bb634u: goto label_2bb634;
        case 0x2bb644u: goto label_2bb644;
        case 0x2bb648u: goto label_2bb648;
        case 0x2bb650u: goto label_2bb650;
        case 0x2bb670u: goto label_2bb670;
        case 0x2bb678u: goto label_2bb678;
        case 0x2bb680u: goto label_2bb680;
        case 0x2bb6a4u: goto label_2bb6a4;
        case 0x2bb6b0u: goto label_2bb6b0;
        case 0x2bb6bcu: goto label_2bb6bc;
        case 0x2bb6c8u: goto label_2bb6c8;
        case 0x2bb6d8u: goto label_2bb6d8;
        case 0x2bb6e8u: goto label_2bb6e8;
        case 0x2bb6f0u: goto label_2bb6f0;
        case 0x2bb6f8u: goto label_2bb6f8;
        case 0x2bb744u: goto label_2bb744;
        case 0x2bb758u: goto label_2bb758;
        case 0x2bb77cu: goto label_2bb77c;
        default: break;
    }

    ctx->pc = 0x2bb440u;

    // 0x2bb440: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x2bb440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x2bb444: 0x3421fa40  ori         $at, $at, 0xFA40
    ctx->pc = 0x2bb444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64064);
    // 0x2bb448: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2bb448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2bb44c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bb44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bb450: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bb450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bb454: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bb454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bb458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bb458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bb45c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bb460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb46c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2bb46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2bb470: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bb470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb474: 0xc07a904  jal         func_1EA410
    ctx->pc = 0x2BB474u;
    SET_GPR_U32(ctx, 31, 0x2BB47Cu);
    ctx->pc = 0x2BB478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB474u;
            // 0x2bb478: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA410u;
    if (runtime->hasFunction(0x1EA410u)) {
        auto targetFn = runtime->lookupFunction(0x1EA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB47Cu; }
        if (ctx->pc != 0x2BB47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartsInfo__FP16CUserDataManager_0x1ea410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB47Cu; }
        if (ctx->pc != 0x2BB47Cu) { return; }
    }
    ctx->pc = 0x2BB47Cu;
label_2bb47c:
    // 0x2bb47c: 0x83839b77  lb          $v1, -0x6489($gp)
    ctx->pc = 0x2bb47cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
    // 0x2bb480: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB480u;
    {
        const bool branch_taken_0x2bb480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB480u;
            // 0x2bb484: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb480) {
            ctx->pc = 0x2BB49Cu;
            goto label_2bb49c;
        }
    }
    ctx->pc = 0x2BB488u;
    // 0x2bb488: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2bb488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2bb48c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb490: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb494: 0xc07a750  jal         func_1E9D40
    ctx->pc = 0x2BB494u;
    SET_GPR_U32(ctx, 31, 0x2BB49Cu);
    ctx->pc = 0x2BB498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB494u;
            // 0x2bb498: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB49Cu; }
        if (ctx->pc != 0x2BB49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB49Cu; }
        if (ctx->pc != 0x2BB49Cu) { return; }
    }
    ctx->pc = 0x2BB49Cu;
label_2bb49c:
    // 0x2bb49c: 0x83849b70  lb          $a0, -0x6490($gp)
    ctx->pc = 0x2bb49cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
    // 0x2bb4a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb4a4: 0x108300b5  beq         $a0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2BB4A4u;
    {
        const bool branch_taken_0x2bb4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bb4a4) {
            ctx->pc = 0x2BB77Cu;
            goto label_2bb77c;
        }
    }
    ctx->pc = 0x2BB4ACu;
    // 0x2bb4ac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2bb4b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2bb4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2bb4b4: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x2bb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
    // 0x2bb4b8: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x2bb4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2bb4bc: 0x27b400b4  addiu       $s4, $sp, 0xB4
    ctx->pc = 0x2bb4bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2bb4c0: 0xac2205b8  sw          $v0, 0x5B8($at)
    ctx->pc = 0x2bb4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1464), GPR_U32(ctx, 2));
label_2bb4c4:
    // 0x2bb4c4: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2BB4C4u;
    SET_GPR_U32(ctx, 31, 0x2BB4CCu);
    ctx->pc = 0x2BB4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB4C4u;
            // 0x2bb4c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4CCu; }
        if (ctx->pc != 0x2BB4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4CCu; }
        if (ctx->pc != 0x2BB4CCu) { return; }
    }
    ctx->pc = 0x2BB4CCu;
label_2bb4cc:
    // 0x2bb4cc: 0xc0a0ad0  jal         func_282B40
    ctx->pc = 0x2BB4CCu;
    SET_GPR_U32(ctx, 31, 0x2BB4D4u);
    ctx->pc = 0x2BB4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB4CCu;
            // 0x2bb4d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B40u;
    if (runtime->hasFunction(0x282B40u)) {
        auto targetFn = runtime->lookupFunction(0x282B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4D4u; }
        if (ctx->pc != 0x2BB4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CSceneCharacterFv_0x282b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4D4u; }
        if (ctx->pc != 0x2BB4D4u) { return; }
    }
    ctx->pc = 0x2BB4D4u;
label_2bb4d4:
    // 0x2bb4d4: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x2bb4d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x2bb4d8: 0x27a220b4  addiu       $v0, $sp, 0x20B4
    ctx->pc = 0x2bb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8372));
    // 0x2bb4dc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb4e0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BB4E0u;
    {
        const bool branch_taken_0x2bb4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb4e0) {
            ctx->pc = 0x2BB4C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb4c4;
        }
    }
    ctx->pc = 0x2BB4E8u;
    // 0x2bb4e8: 0x27b420b8  addiu       $s4, $sp, 0x20B8
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8376));
label_2bb4ec:
    // 0x2bb4ec: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2BB4ECu;
    SET_GPR_U32(ctx, 31, 0x2BB4F4u);
    ctx->pc = 0x2BB4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB4ECu;
            // 0x2bb4f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4F4u; }
        if (ctx->pc != 0x2BB4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4F4u; }
        if (ctx->pc != 0x2BB4F4u) { return; }
    }
    ctx->pc = 0x2BB4F4u;
label_2bb4f4:
    // 0x2bb4f4: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x2BB4F4u;
    SET_GPR_U32(ctx, 31, 0x2BB4FCu);
    ctx->pc = 0x2BB4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB4F4u;
            // 0x2bb4f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282D00u;
    if (runtime->hasFunction(0x282D00u)) {
        auto targetFn = runtime->lookupFunction(0x282D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4FCu; }
        if (ctx->pc != 0x2BB4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneCameraFv_0x282d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB4FCu; }
        if (ctx->pc != 0x2BB4FCu) { return; }
    }
    ctx->pc = 0x2BB4FCu;
label_2bb4fc:
    // 0x2bb4fc: 0x26940038  addiu       $s4, $s4, 0x38
    ctx->pc = 0x2bb4fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x2bb500: 0x27a22278  addiu       $v0, $sp, 0x2278
    ctx->pc = 0x2bb500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8824));
    // 0x2bb504: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb508: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BB508u;
    {
        const bool branch_taken_0x2bb508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb508) {
            ctx->pc = 0x2BB4ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb4ec;
        }
    }
    ctx->pc = 0x2BB510u;
    // 0x2bb510: 0x27b4227c  addiu       $s4, $sp, 0x227C
    ctx->pc = 0x2bb510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8828));
label_2bb514:
    // 0x2bb514: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2BB514u;
    SET_GPR_U32(ctx, 31, 0x2BB51Cu);
    ctx->pc = 0x2BB518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB514u;
            // 0x2bb518: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB51Cu; }
        if (ctx->pc != 0x2BB51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB51Cu; }
        if (ctx->pc != 0x2BB51Cu) { return; }
    }
    ctx->pc = 0x2BB51Cu;
label_2bb51c:
    // 0x2bb51c: 0xc0a0afc  jal         func_282BF0
    ctx->pc = 0x2BB51Cu;
    SET_GPR_U32(ctx, 31, 0x2BB524u);
    ctx->pc = 0x2BB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB51Cu;
            // 0x2bb520: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282BF0u;
    if (runtime->hasFunction(0x282BF0u)) {
        auto targetFn = runtime->lookupFunction(0x282BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB524u; }
        if (ctx->pc != 0x2BB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CSceneMessageFv_0x282bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB524u; }
        if (ctx->pc != 0x2BB524u) { return; }
    }
    ctx->pc = 0x2BB524u;
label_2bb524:
    // 0x2bb524: 0x26940038  addiu       $s4, $s4, 0x38
    ctx->pc = 0x2bb524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x2bb528: 0x27a2243c  addiu       $v0, $sp, 0x243C
    ctx->pc = 0x2bb528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 9276));
    // 0x2bb52c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb530: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BB530u;
    {
        const bool branch_taken_0x2bb530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb530) {
            ctx->pc = 0x2BB514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb514;
        }
    }
    ctx->pc = 0x2BB538u;
    // 0x2bb538: 0xc05a434  jal         func_1690D0
    ctx->pc = 0x2BB538u;
    SET_GPR_U32(ctx, 31, 0x2BB540u);
    ctx->pc = 0x2BB53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB538u;
            // 0x2bb53c: 0x27a42440  addiu       $a0, $sp, 0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 9280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1690D0u;
    if (runtime->hasFunction(0x1690D0u)) {
        auto targetFn = runtime->lookupFunction(0x1690D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB540u; }
        if (ctx->pc != 0x2BB540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMdsListSetFv_0x1690d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB540u; }
        if (ctx->pc != 0x2BB540u) { return; }
    }
    ctx->pc = 0x2BB540u;
label_2bb540:
    // 0x2bb540: 0x27b52560  addiu       $s5, $sp, 0x2560
    ctx->pc = 0x2bb540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 9568));
    // 0x2bb544: 0xc04b120  jal         func_12C480
    ctx->pc = 0x2BB544u;
    SET_GPR_U32(ctx, 31, 0x2BB54Cu);
    ctx->pc = 0x2BB548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB544u;
            // 0x2bb548: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB54Cu; }
        if (ctx->pc != 0x2BB54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB54Cu; }
        if (ctx->pc != 0x2BB54Cu) { return; }
    }
    ctx->pc = 0x2BB54Cu;
label_2bb54c:
    // 0x2bb54c: 0x27b425d0  addiu       $s4, $sp, 0x25D0
    ctx->pc = 0x2bb54cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 9680));
    // 0x2bb550: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb554:
    // 0x2bb554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb558: 0xc049c86  jal         func_127218
    ctx->pc = 0x2BB558u;
    SET_GPR_U32(ctx, 31, 0x2BB560u);
    ctx->pc = 0x2BB55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB558u;
            // 0x2bb55c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB560u; }
        if (ctx->pc != 0x2BB560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB560u; }
        if (ctx->pc != 0x2BB560u) { return; }
    }
    ctx->pc = 0x2BB560u;
label_2bb560:
    // 0x2bb560: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x2bb560u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2bb564: 0x27a22850  addiu       $v0, $sp, 0x2850
    ctx->pc = 0x2bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 10320));
    // 0x2bb568: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb56c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BB56Cu;
    {
        const bool branch_taken_0x2bb56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB56Cu;
            // 0x2bb570: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb56c) {
            ctx->pc = 0x2BB554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb554;
        }
    }
    ctx->pc = 0x2BB574u;
    // 0x2bb574: 0xc0611f0  jal         func_1847C0
    ctx->pc = 0x2BB574u;
    SET_GPR_U32(ctx, 31, 0x2BB57Cu);
    ctx->pc = 0x2BB578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB574u;
            // 0x2bb578: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847C0u;
    if (runtime->hasFunction(0x1847C0u)) {
        auto targetFn = runtime->lookupFunction(0x1847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB57Cu; }
        if (ctx->pc != 0x2BB57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CFireRasterFv_0x1847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB57Cu; }
        if (ctx->pc != 0x2BB57Cu) { return; }
    }
    ctx->pc = 0x2BB57Cu;
label_2bb57c:
    // 0x2bb57c: 0x27b42854  addiu       $s4, $sp, 0x2854
    ctx->pc = 0x2bb57cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 10324));
label_2bb580:
    // 0x2bb580: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2BB580u;
    SET_GPR_U32(ctx, 31, 0x2BB588u);
    ctx->pc = 0x2BB584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB580u;
            // 0x2bb584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB588u; }
        if (ctx->pc != 0x2BB588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB588u; }
        if (ctx->pc != 0x2BB588u) { return; }
    }
    ctx->pc = 0x2BB588u;
label_2bb588:
    // 0x2bb588: 0xc0a0ad8  jal         func_282B60
    ctx->pc = 0x2BB588u;
    SET_GPR_U32(ctx, 31, 0x2BB590u);
    ctx->pc = 0x2BB58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB588u;
            // 0x2bb58c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B60u;
    if (runtime->hasFunction(0x282B60u)) {
        auto targetFn = runtime->lookupFunction(0x282B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB590u; }
        if (ctx->pc != 0x2BB590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneMapFv_0x282b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB590u; }
        if (ctx->pc != 0x2BB590u) { return; }
    }
    ctx->pc = 0x2BB590u;
label_2bb590:
    // 0x2bb590: 0x26940038  addiu       $s4, $s4, 0x38
    ctx->pc = 0x2bb590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x2bb594: 0x27a22934  addiu       $v0, $sp, 0x2934
    ctx->pc = 0x2bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 10548));
    // 0x2bb598: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb59c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BB59Cu;
    {
        const bool branch_taken_0x2bb59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb59c) {
            ctx->pc = 0x2BB580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb580;
        }
    }
    ctx->pc = 0x2BB5A4u;
    // 0x2bb5a4: 0x27b42938  addiu       $s4, $sp, 0x2938
    ctx->pc = 0x2bb5a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 10552));
label_2bb5a8:
    // 0x2bb5a8: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2BB5A8u;
    SET_GPR_U32(ctx, 31, 0x2BB5B0u);
    ctx->pc = 0x2BB5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB5A8u;
            // 0x2bb5ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5B0u; }
        if (ctx->pc != 0x2BB5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5B0u; }
        if (ctx->pc != 0x2BB5B0u) { return; }
    }
    ctx->pc = 0x2BB5B0u;
label_2bb5b0:
    // 0x2bb5b0: 0xc0a0b64  jal         func_282D90
    ctx->pc = 0x2BB5B0u;
    SET_GPR_U32(ctx, 31, 0x2BB5B8u);
    ctx->pc = 0x2BB5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB5B0u;
            // 0x2bb5b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282D90u;
    if (runtime->hasFunction(0x282D90u)) {
        auto targetFn = runtime->lookupFunction(0x282D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5B8u; }
        if (ctx->pc != 0x2BB5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneSkyFv_0x282d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5B8u; }
        if (ctx->pc != 0x2BB5B8u) { return; }
    }
    ctx->pc = 0x2BB5B8u;
label_2bb5b8:
    // 0x2bb5b8: 0x26940038  addiu       $s4, $s4, 0x38
    ctx->pc = 0x2bb5b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x2bb5bc: 0x27a22a18  addiu       $v0, $sp, 0x2A18
    ctx->pc = 0x2bb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 10776));
    // 0x2bb5c0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb5c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BB5C4u;
    {
        const bool branch_taken_0x2bb5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5c4) {
            ctx->pc = 0x2BB5A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb5a8;
        }
    }
    ctx->pc = 0x2BB5CCu;
    // 0x2bb5cc: 0x27b42a1c  addiu       $s4, $sp, 0x2A1C
    ctx->pc = 0x2bb5ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 10780));
label_2bb5d0:
    // 0x2bb5d0: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2BB5D0u;
    SET_GPR_U32(ctx, 31, 0x2BB5D8u);
    ctx->pc = 0x2BB5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB5D0u;
            // 0x2bb5d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5D8u; }
        if (ctx->pc != 0x2BB5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5D8u; }
        if (ctx->pc != 0x2BB5D8u) { return; }
    }
    ctx->pc = 0x2BB5D8u;
label_2bb5d8:
    // 0x2bb5d8: 0xc0a0ad0  jal         func_282B40
    ctx->pc = 0x2BB5D8u;
    SET_GPR_U32(ctx, 31, 0x2BB5E0u);
    ctx->pc = 0x2BB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB5D8u;
            // 0x2bb5dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B40u;
    if (runtime->hasFunction(0x282B40u)) {
        auto targetFn = runtime->lookupFunction(0x282B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5E0u; }
        if (ctx->pc != 0x2BB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CSceneCharacterFv_0x282b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5E0u; }
        if (ctx->pc != 0x2BB5E0u) { return; }
    }
    ctx->pc = 0x2BB5E0u;
label_2bb5e0:
    // 0x2bb5e0: 0xc0a0b68  jal         func_282DA0
    ctx->pc = 0x2BB5E0u;
    SET_GPR_U32(ctx, 31, 0x2BB5E8u);
    ctx->pc = 0x2BB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB5E0u;
            // 0x2bb5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DA0u;
    if (runtime->hasFunction(0x282DA0u)) {
        auto targetFn = runtime->lookupFunction(0x282DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5E8u; }
        if (ctx->pc != 0x2BB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CSceneGameObjFv_0x282da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5E8u; }
        if (ctx->pc != 0x2BB5E8u) { return; }
    }
    ctx->pc = 0x2BB5E8u;
label_2bb5e8:
    // 0x2bb5e8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x2bb5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x2bb5ec: 0x27a22b1c  addiu       $v0, $sp, 0x2B1C
    ctx->pc = 0x2bb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 11036));
    // 0x2bb5f0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb5f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BB5F4u;
    {
        const bool branch_taken_0x2bb5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5f4) {
            ctx->pc = 0x2BB5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb5d0;
        }
    }
    ctx->pc = 0x2BB5FCu;
    // 0x2bb5fc: 0x27b42b20  addiu       $s4, $sp, 0x2B20
    ctx->pc = 0x2bb5fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 11040));
label_2bb600:
    // 0x2bb600: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x2BB600u;
    SET_GPR_U32(ctx, 31, 0x2BB608u);
    ctx->pc = 0x2BB604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB600u;
            // 0x2bb604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (runtime->hasFunction(0x282AC0u)) {
        auto targetFn = runtime->lookupFunction(0x282AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB608u; }
        if (ctx->pc != 0x2BB608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CSceneDataFv_0x282ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB608u; }
        if (ctx->pc != 0x2BB608u) { return; }
    }
    ctx->pc = 0x2BB608u;
label_2bb608:
    // 0x2bb608: 0xc0a0b6c  jal         func_282DB0
    ctx->pc = 0x2BB608u;
    SET_GPR_U32(ctx, 31, 0x2BB610u);
    ctx->pc = 0x2BB60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB608u;
            // 0x2bb60c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DB0u;
    if (runtime->hasFunction(0x282DB0u)) {
        auto targetFn = runtime->lookupFunction(0x282DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB610u; }
        if (ctx->pc != 0x2BB610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneEffectFv_0x282db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB610u; }
        if (ctx->pc != 0x2BB610u) { return; }
    }
    ctx->pc = 0x2BB610u;
label_2bb610:
    // 0x2bb610: 0x26940038  addiu       $s4, $s4, 0x38
    ctx->pc = 0x2bb610u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x2bb614: 0x27a42ce0  addiu       $a0, $sp, 0x2CE0
    ctx->pc = 0x2bb614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11488));
    // 0x2bb618: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x2bb618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2bb61c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BB61Cu;
    {
        const bool branch_taken_0x2bb61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb61c) {
            ctx->pc = 0x2BB600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb600;
        }
    }
    ctx->pc = 0x2BB624u;
    // 0x2bb624: 0xc05f5d4  jal         func_17D750
    ctx->pc = 0x2BB624u;
    SET_GPR_U32(ctx, 31, 0x2BB62Cu);
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB62Cu; }
        if (ctx->pc != 0x2BB62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB62Cu; }
        if (ctx->pc != 0x2BB62Cu) { return; }
    }
    ctx->pc = 0x2BB62Cu;
label_2bb62c:
    // 0x2bb62c: 0xc0a1454  jal         func_285150
    ctx->pc = 0x2BB62Cu;
    SET_GPR_U32(ctx, 31, 0x2BB634u);
    ctx->pc = 0x2BB630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB62Cu;
            // 0x2bb630: 0x27a42d18  addiu       $a0, $sp, 0x2D18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB634u; }
        if (ctx->pc != 0x2BB634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17SCN_LOADMAP_INFO2Fv_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB634u; }
        if (ctx->pc != 0x2BB634u) { return; }
    }
    ctx->pc = 0x2BB634u;
label_2bb634:
    // 0x2bb634: 0x27a42f00  addiu       $a0, $sp, 0x2F00
    ctx->pc = 0x2bb634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12032));
    // 0x2bb638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb63c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2BB63Cu;
    SET_GPR_U32(ctx, 31, 0x2BB644u);
    ctx->pc = 0x2BB640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB63Cu;
            // 0x2bb640: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB644u; }
        if (ctx->pc != 0x2BB644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB644u; }
        if (ctx->pc != 0x2BB644u) { return; }
    }
    ctx->pc = 0x2BB644u;
label_2bb644:
    // 0x2bb644: 0x27b430d0  addiu       $s4, $sp, 0x30D0
    ctx->pc = 0x2bb644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 12496));
label_2bb648:
    // 0x2bb648: 0xc0b3444  jal         func_2CD110
    ctx->pc = 0x2BB648u;
    SET_GPR_U32(ctx, 31, 0x2BB650u);
    ctx->pc = 0x2BB64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB648u;
            // 0x2bb64c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD110u;
    if (runtime->hasFunction(0x2CD110u)) {
        auto targetFn = runtime->lookupFunction(0x2CD110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB650u; }
        if (ctx->pc != 0x2BB650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerDataFv_0x2cd110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB650u; }
        if (ctx->pc != 0x2BB650u) { return; }
    }
    ctx->pc = 0x2BB650u;
label_2bb650:
    // 0x2bb650: 0x26940070  addiu       $s4, $s4, 0x70
    ctx->pc = 0x2bb650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x2bb654: 0x27a23ed0  addiu       $v0, $sp, 0x3ED0
    ctx->pc = 0x2bb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16080));
    // 0x2bb658: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb65c: 0x0  nop
    ctx->pc = 0x2bb65cu;
    // NOP
    // 0x2bb660: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BB660u;
    {
        const bool branch_taken_0x2bb660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb660) {
            ctx->pc = 0x2BB648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb648;
        }
    }
    ctx->pc = 0x2BB668u;
    // 0x2bb668: 0xc0b3488  jal         func_2CD220
    ctx->pc = 0x2BB668u;
    SET_GPR_U32(ctx, 31, 0x2BB670u);
    ctx->pc = 0x2BB66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB668u;
            // 0x2bb66c: 0x27a430c0  addiu       $a0, $sp, 0x30C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD220u;
    if (runtime->hasFunction(0x2CD220u)) {
        auto targetFn = runtime->lookupFunction(0x2CD220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB670u; }
        if (ctx->pc != 0x2BB670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CVillagerMngrFv_0x2cd220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB670u; }
        if (ctx->pc != 0x2BB670u) { return; }
    }
    ctx->pc = 0x2BB670u;
label_2bb670:
    // 0x2bb670: 0x340190f0  ori         $at, $zero, 0x90F0
    ctx->pc = 0x2bb670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37104);
    // 0x2bb674: 0x3a1a021  addu        $s4, $sp, $at
    ctx->pc = 0x2bb674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_2bb678:
    // 0x2bb678: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BB678u;
    SET_GPR_U32(ctx, 31, 0x2BB680u);
    ctx->pc = 0x2BB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB678u;
            // 0x2bb67c: 0x26840430  addiu       $a0, $s4, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB680u; }
        if (ctx->pc != 0x2BB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB680u; }
        if (ctx->pc != 0x2BB680u) { return; }
    }
    ctx->pc = 0x2BB680u;
label_2bb680:
    // 0x2bb680: 0x340199b0  ori         $at, $zero, 0x99B0
    ctx->pc = 0x2bb680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39344);
    // 0x2bb684: 0x26940460  addiu       $s4, $s4, 0x460
    ctx->pc = 0x2bb684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1120));
    // 0x2bb688: 0x3a11021  addu        $v0, $sp, $at
    ctx->pc = 0x2bb688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2bb68c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2bb68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb690: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BB690u;
    {
        const bool branch_taken_0x2bb690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb690) {
            ctx->pc = 0x2BB678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb678;
        }
    }
    ctx->pc = 0x2BB698u;
    // 0x2bb698: 0x34019e40  ori         $at, $zero, 0x9E40
    ctx->pc = 0x2bb698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40512);
    // 0x2bb69c: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BB69Cu;
    SET_GPR_U32(ctx, 31, 0x2BB6A4u);
    ctx->pc = 0x2BB6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB69Cu;
            // 0x2bb6a0: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6A4u; }
        if (ctx->pc != 0x2BB6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6A4u; }
        if (ctx->pc != 0x2BB6A4u) { return; }
    }
    ctx->pc = 0x2BB6A4u;
label_2bb6a4:
    // 0x2bb6a4: 0x3401a4c0  ori         $at, $zero, 0xA4C0
    ctx->pc = 0x2bb6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42176);
    // 0x2bb6a8: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BB6A8u;
    SET_GPR_U32(ctx, 31, 0x2BB6B0u);
    ctx->pc = 0x2BB6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6A8u;
            // 0x2bb6ac: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6B0u; }
        if (ctx->pc != 0x2BB6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6B0u; }
        if (ctx->pc != 0x2BB6B0u) { return; }
    }
    ctx->pc = 0x2BB6B0u;
label_2bb6b0:
    // 0x2bb6b0: 0x3401c510  ori         $at, $zero, 0xC510
    ctx->pc = 0x2bb6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50448);
    // 0x2bb6b4: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BB6B4u;
    SET_GPR_U32(ctx, 31, 0x2BB6BCu);
    ctx->pc = 0x2BB6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6B4u;
            // 0x2bb6b8: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6BCu; }
        if (ctx->pc != 0x2BB6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6BCu; }
        if (ctx->pc != 0x2BB6BCu) { return; }
    }
    ctx->pc = 0x2BB6BCu;
label_2bb6bc:
    // 0x2bb6bc: 0x3401e550  ori         $at, $zero, 0xE550
    ctx->pc = 0x2bb6bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58704);
    // 0x2bb6c0: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BB6C0u;
    SET_GPR_U32(ctx, 31, 0x2BB6C8u);
    ctx->pc = 0x2BB6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6C0u;
            // 0x2bb6c4: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6C8u; }
        if (ctx->pc != 0x2BB6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6C8u; }
        if (ctx->pc != 0x2BB6C8u) { return; }
    }
    ctx->pc = 0x2BB6C8u;
label_2bb6c8:
    // 0x2bb6c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2bb6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2bb6cc: 0x34210580  ori         $at, $at, 0x580
    ctx->pc = 0x2bb6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1408);
    // 0x2bb6d0: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BB6D0u;
    SET_GPR_U32(ctx, 31, 0x2BB6D8u);
    ctx->pc = 0x2BB6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6D0u;
            // 0x2bb6d4: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6D8u; }
        if (ctx->pc != 0x2BB6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6D8u; }
        if (ctx->pc != 0x2BB6D8u) { return; }
    }
    ctx->pc = 0x2BB6D8u;
label_2bb6d8:
    // 0x2bb6d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2bb6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2bb6dc: 0x342105b0  ori         $at, $at, 0x5B0
    ctx->pc = 0x2bb6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1456);
    // 0x2bb6e0: 0xc063154  jal         func_18C550
    ctx->pc = 0x2BB6E0u;
    SET_GPR_U32(ctx, 31, 0x2BB6E8u);
    ctx->pc = 0x2BB6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6E0u;
            // 0x2bb6e4: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C550u;
    if (runtime->hasFunction(0x18C550u)) {
        auto targetFn = runtime->lookupFunction(0x18C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6E8u; }
        if (ctx->pc != 0x2BB6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CLoopSeMngrFv_0x18c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6E8u; }
        if (ctx->pc != 0x2BB6E8u) { return; }
    }
    ctx->pc = 0x2BB6E8u;
label_2bb6e8:
    // 0x2bb6e8: 0xc0a0b90  jal         func_282E40
    ctx->pc = 0x2BB6E8u;
    SET_GPR_U32(ctx, 31, 0x2BB6F0u);
    ctx->pc = 0x2BB6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6E8u;
            // 0x2bb6ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282E40u;
    if (runtime->hasFunction(0x282E40u)) {
        auto targetFn = runtime->lookupFunction(0x282E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6F0u; }
        if (ctx->pc != 0x2BB6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitAllData__6CSceneFv_0x282e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6F0u; }
        if (ctx->pc != 0x2BB6F0u) { return; }
    }
    ctx->pc = 0x2BB6F0u;
label_2bb6f0:
    // 0x2bb6f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bb6f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2bb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2bb6f8:
    // 0x2bb6f8: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x2bb6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bb6fc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2bb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2bb700: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x2bb700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x2bb704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb708: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2bb708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2bb70c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2bb70cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb710: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2bb710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2bb714: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB714u;
    {
        const bool branch_taken_0x2bb714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB714u;
            // 0x2bb718: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb714) {
            ctx->pc = 0x2BB738u;
            goto label_2bb738;
        }
    }
    ctx->pc = 0x2BB71Cu;
    // 0x2bb71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bb720: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2bb720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bb724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bb724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB728u;
    {
        const bool branch_taken_0x2bb728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb728) {
            ctx->pc = 0x2BB738u;
            goto label_2bb738;
        }
    }
    ctx->pc = 0x2BB730u;
    // 0x2bb730: 0x8c540074  lw          $s4, 0x74($v0)
    ctx->pc = 0x2bb730u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2bb734: 0x0  nop
    ctx->pc = 0x2bb734u;
    // NOP
label_2bb738:
    // 0x2bb738: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bb738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bb73c: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2BB73Cu;
    SET_GPR_U32(ctx, 31, 0x2BB744u);
    ctx->pc = 0x2BB740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB73Cu;
            // 0x2bb740: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB744u; }
        if (ctx->pc != 0x2BB744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB744u; }
        if (ctx->pc != 0x2BB744u) { return; }
    }
    ctx->pc = 0x2BB744u;
label_2bb744:
    // 0x2bb744: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bb744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb748: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bb748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bb74c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bb74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb750: 0xc0a0e8c  jal         func_283A30
    ctx->pc = 0x2BB750u;
    SET_GPR_U32(ctx, 31, 0x2BB758u);
    ctx->pc = 0x2BB754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB750u;
            // 0x2bb754: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB758u; }
        if (ctx->pc != 0x2BB758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB758u; }
        if (ctx->pc != 0x2BB758u) { return; }
    }
    ctx->pc = 0x2BB758u;
label_2bb758:
    // 0x2bb758: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bb758u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2bb75c: 0x2aa20007  slti        $v0, $s5, 0x7
    ctx->pc = 0x2bb75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2bb760: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2BB760u;
    {
        const bool branch_taken_0x2bb760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB760u;
            // 0x2bb764: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb760) {
            ctx->pc = 0x2BB6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb6f8;
        }
    }
    ctx->pc = 0x2BB768u;
    // 0x2bb768: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb76c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb770: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2bb770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb774: 0xc07a750  jal         func_1E9D40
    ctx->pc = 0x2BB774u;
    SET_GPR_U32(ctx, 31, 0x2BB77Cu);
    ctx->pc = 0x2BB778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB774u;
            // 0x2bb778: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB77Cu; }
        if (ctx->pc != 0x2BB77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB77Cu; }
        if (ctx->pc != 0x2BB77Cu) { return; }
    }
    ctx->pc = 0x2BB77Cu;
label_2bb77c:
    // 0x2bb77c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bb77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bb780: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2bb780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2bb784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bb784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bb788: 0x342105c0  ori         $at, $at, 0x5C0
    ctx->pc = 0x2bb788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1472);
    // 0x2bb78c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bb78cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb790: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bb790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB7A0u;
            // 0x2bb7a4: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB7A8u;
}
