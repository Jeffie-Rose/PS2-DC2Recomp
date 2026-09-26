#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOverItem__16CUserDataManagerFii
// Address: 0x19e3f0 - 0x19e594
void GetOverItem__16CUserDataManagerFii_0x19e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOverItem__16CUserDataManagerFii_0x19e3f0");
#endif

    switch (ctx->pc) {
        case 0x19e444u: goto label_19e444;
        case 0x19e45cu: goto label_19e45c;
        case 0x19e464u: goto label_19e464;
        case 0x19e470u: goto label_19e470;
        case 0x19e484u: goto label_19e484;
        case 0x19e48cu: goto label_19e48c;
        case 0x19e4c4u: goto label_19e4c4;
        case 0x19e4d4u: goto label_19e4d4;
        case 0x19e534u: goto label_19e534;
        case 0x19e540u: goto label_19e540;
        case 0x19e550u: goto label_19e550;
        default: break;
    }

    ctx->pc = 0x19e3f0u;

    // 0x19e3f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19e3f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19e3f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19e3fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19e400: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19e400u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e404: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e408: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e40c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19e40cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e410: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e414: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19e414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e418: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e41c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e424: 0x1aa00003  blez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E424u;
    {
        const bool branch_taken_0x19e424 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x19E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E424u;
            // 0x19e428: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e424) {
            ctx->pc = 0x19E434u;
            goto label_19e434;
        }
    }
    ctx->pc = 0x19E42Cu;
    // 0x19e42c: 0x1fc00003  bgtz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E42Cu;
    {
        const bool branch_taken_0x19e42c = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x19E430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E42Cu;
            // 0x19e430: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e42c) {
            ctx->pc = 0x19E43Cu;
            goto label_19e43c;
        }
    }
    ctx->pc = 0x19E434u;
label_19e434:
    // 0x19e434: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x19E434u;
    {
        const bool branch_taken_0x19e434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E434u;
            // 0x19e438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e434) {
            ctx->pc = 0x19E564u;
            goto label_19e564;
        }
    }
    ctx->pc = 0x19E43Cu;
label_19e43c:
    // 0x19e43c: 0xc065708  jal         func_195C20
    ctx->pc = 0x19E43Cu;
    SET_GPR_U32(ctx, 31, 0x19E444u);
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E444u; }
        if (ctx->pc != 0x19E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E444u; }
        if (ctx->pc != 0x19E444u) { return; }
    }
    ctx->pc = 0x19E444u;
label_19e444:
    // 0x19e444: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E444u;
    {
        const bool branch_taken_0x19e444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e444) {
            ctx->pc = 0x19E454u;
            goto label_19e454;
        }
    }
    ctx->pc = 0x19E44Cu;
    // 0x19e44c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x19E44Cu;
    {
        const bool branch_taken_0x19e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E44Cu;
            // 0x19e450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e44c) {
            ctx->pc = 0x19E564u;
            goto label_19e564;
        }
    }
    ctx->pc = 0x19E454u;
label_19e454:
    // 0x19e454: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x19E454u;
    SET_GPR_U32(ctx, 31, 0x19E45Cu);
    ctx->pc = 0x19E458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E454u;
            // 0x19e458: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E45Cu; }
        if (ctx->pc != 0x19E45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E45Cu; }
        if (ctx->pc != 0x19E45Cu) { return; }
    }
    ctx->pc = 0x19E45Cu;
label_19e45c:
    // 0x19e45c: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19E45Cu;
    SET_GPR_U32(ctx, 31, 0x19E464u);
    ctx->pc = 0x19E460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E45Cu;
            // 0x19e460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E464u; }
        if (ctx->pc != 0x19E464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E464u; }
        if (ctx->pc != 0x19E464u) { return; }
    }
    ctx->pc = 0x19E464u;
label_19e464:
    // 0x19e464: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x19e464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x19e468: 0xc0670c4  jal         func_19C310
    ctx->pc = 0x19E468u;
    SET_GPR_U32(ctx, 31, 0x19E470u);
    ctx->pc = 0x19E46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E468u;
            // 0x19e46c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C310u;
    if (runtime->hasFunction(0x19C310u)) {
        auto targetFn = runtime->lookupFunction(0x19C310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E470u; }
        if (ctx->pc != 0x19E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardOverNum__16CUserDataManagerFv_0x19c310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E470u; }
        if (ctx->pc != 0x19E470u) { return; }
    }
    ctx->pc = 0x19E470u;
label_19e470:
    // 0x19e470: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x19e470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x19e474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e478: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x19E478u;
    {
        const bool branch_taken_0x19e478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E478u;
            // 0x19e47c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e478) {
            ctx->pc = 0x19E560u;
            goto label_19e560;
        }
    }
    ctx->pc = 0x19E480u;
    // 0x19e480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19e480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e484:
    // 0x19e484: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19E484u;
    {
        const bool branch_taken_0x19e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E484u;
            // 0x19e488: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e484) {
            ctx->pc = 0x19E504u;
            goto label_19e504;
        }
    }
    ctx->pc = 0x19E48Cu;
label_19e48c:
    // 0x19e48c: 0x0  nop
    ctx->pc = 0x19e48cu;
    // NOP
    // 0x19e490: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x19e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x19e494: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x19e494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19e498: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19e498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19e49c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e4a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e4a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e4a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e4ac: 0x2c2a021  addu        $s4, $s6, $v0
    ctx->pc = 0x19e4acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x19e4b0: 0x86930002  lh          $s3, 0x2($s4)
    ctx->pc = 0x19e4b0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x19e4b4: 0x1675000b  bne         $s3, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x19E4B4u;
    {
        const bool branch_taken_0x19e4b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x19E4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4B4u;
            // 0x19e4b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4b4) {
            ctx->pc = 0x19E4E4u;
            goto label_19e4e4;
        }
    }
    ctx->pc = 0x19E4BCu;
    // 0x19e4bc: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x19E4BCu;
    SET_GPR_U32(ctx, 31, 0x19E4C4u);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4C4u; }
        if (ctx->pc != 0x19E4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4C4u; }
        if (ctx->pc != 0x19E4C4u) { return; }
    }
    ctx->pc = 0x19E4C4u;
label_19e4c4:
    // 0x19e4c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E4C4u;
    {
        const bool branch_taken_0x19e4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4C4u;
            // 0x19e4c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4c4) {
            ctx->pc = 0x19E4E4u;
            goto label_19e4e4;
        }
    }
    ctx->pc = 0x19E4CCu;
    // 0x19e4cc: 0xc065c9c  jal         func_197270
    ctx->pc = 0x19E4CCu;
    SET_GPR_U32(ctx, 31, 0x19E4D4u);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4D4u; }
        if (ctx->pc != 0x19E4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4D4u; }
        if (ctx->pc != 0x19E4D4u) { return; }
    }
    ctx->pc = 0x19E4D4u;
label_19e4d4:
    // 0x19e4d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19e4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e4d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E4D8u;
    {
        const bool branch_taken_0x19e4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4d8) {
            ctx->pc = 0x19E4E4u;
            goto label_19e4e4;
        }
    }
    ctx->pc = 0x19E4E0u;
    // 0x19e4e0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x19e4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19e4e4:
    // 0x19e4e4: 0x0  nop
    ctx->pc = 0x19e4e4u;
    // NOP
    // 0x19e4e8: 0x1e600004  bgtz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E4E8u;
    {
        const bool branch_taken_0x19e4e8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x19e4e8) {
            ctx->pc = 0x19E4FCu;
            goto label_19e4fc;
        }
    }
    ctx->pc = 0x19E4F0u;
    // 0x19e4f0: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E4F0u;
    {
        const bool branch_taken_0x19e4f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e4f0) {
            ctx->pc = 0x19E4FCu;
            goto label_19e4fc;
        }
    }
    ctx->pc = 0x19E4F8u;
    // 0x19e4f8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x19e4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19e4fc:
    // 0x19e4fc: 0x0  nop
    ctx->pc = 0x19e4fcu;
    // NOP
    // 0x19e500: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19e504:
    // 0x19e504: 0x0  nop
    ctx->pc = 0x19e504u;
    // NOP
    // 0x19e508: 0x250082a  slt         $at, $s2, $s0
    ctx->pc = 0x19e508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x19e50c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E50Cu;
    {
        const bool branch_taken_0x19e50c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e50c) {
            ctx->pc = 0x19E51Cu;
            goto label_19e51c;
        }
    }
    ctx->pc = 0x19E514u;
    // 0x19e514: 0x1220ffdd  beqz        $s1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x19E514u;
    {
        const bool branch_taken_0x19e514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e514) {
            ctx->pc = 0x19E48Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e48c;
        }
    }
    ctx->pc = 0x19E51Cu;
label_19e51c:
    // 0x19e51c: 0x0  nop
    ctx->pc = 0x19e51cu;
    // NOP
    // 0x19e520: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x19E520u;
    {
        const bool branch_taken_0x19e520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E520u;
            // 0x19e524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e520) {
            ctx->pc = 0x19E560u;
            goto label_19e560;
        }
    }
    ctx->pc = 0x19E528u;
    // 0x19e528: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19e528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e52c: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x19E52Cu;
    SET_GPR_U32(ctx, 31, 0x19E534u);
    ctx->pc = 0x19E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E52Cu;
            // 0x19e530: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E534u; }
        if (ctx->pc != 0x19E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E534u; }
        if (ctx->pc != 0x19E534u) { return; }
    }
    ctx->pc = 0x19E534u;
label_19e534:
    // 0x19e534: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19e534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e538: 0xc067ae4  jal         func_19EB90
    ctx->pc = 0x19E538u;
    SET_GPR_U32(ctx, 31, 0x19E540u);
    ctx->pc = 0x19E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E538u;
            // 0x19e53c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EB90u;
    if (runtime->hasFunction(0x19EB90u)) {
        auto targetFn = runtime->lookupFunction(0x19EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E540u; }
        if (ctx->pc != 0x19E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostume__16CUserDataManagerFi_0x19eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E540u; }
        if (ctx->pc != 0x19E540u) { return; }
    }
    ctx->pc = 0x19E540u;
label_19e540:
    // 0x19e540: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19e540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19e544: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19e544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e548: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x19E548u;
    SET_GPR_U32(ctx, 31, 0x19E550u);
    ctx->pc = 0x19E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E548u;
            // 0x19e54c: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E550u; }
        if (ctx->pc != 0x19E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E550u; }
        if (ctx->pc != 0x19E550u) { return; }
    }
    ctx->pc = 0x19E550u;
label_19e550:
    // 0x19e550: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x19e550u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x19e554: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x19e554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x19e558: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x19E558u;
    {
        const bool branch_taken_0x19e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E558u;
            // 0x19e55c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e558) {
            ctx->pc = 0x19E484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e484;
        }
    }
    ctx->pc = 0x19E560u;
label_19e560:
    // 0x19e560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e564:
    // 0x19e564: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19e564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e568: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19e568u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e56c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19e56cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e570: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19e570u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e574: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19e574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e57c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e57cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e58c: 0x3e00008  jr          $ra
    ctx->pc = 0x19E58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E58Cu;
            // 0x19e590: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E594u;
}
