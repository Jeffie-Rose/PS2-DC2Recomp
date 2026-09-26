#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWinTbl_value__6ClsMesFPiPi
// Address: 0x154480 - 0x154764
void MakeMesWinTbl_value__6ClsMesFPiPi_0x154480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWinTbl_value__6ClsMesFPiPi_0x154480");
#endif

    switch (ctx->pc) {
        case 0x1544e4u: goto label_1544e4;
        case 0x154500u: goto label_154500;
        case 0x15450cu: goto label_15450c;
        case 0x15451cu: goto label_15451c;
        case 0x154538u: goto label_154538;
        case 0x154560u: goto label_154560;
        case 0x154580u: goto label_154580;
        case 0x1545a0u: goto label_1545a0;
        case 0x1545c0u: goto label_1545c0;
        case 0x1545e0u: goto label_1545e0;
        case 0x154600u: goto label_154600;
        case 0x154620u: goto label_154620;
        case 0x154640u: goto label_154640;
        case 0x154660u: goto label_154660;
        case 0x154680u: goto label_154680;
        case 0x1546a0u: goto label_1546a0;
        case 0x1546c0u: goto label_1546c0;
        case 0x1546e0u: goto label_1546e0;
        default: break;
    }

    ctx->pc = 0x154480u;

    // 0x154480: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x154480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x154484: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x154484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x154488: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x154488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15448c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x154490: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x154490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154494: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154498: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x154498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15449c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1544a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1544a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1544a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1544a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1544a8: 0x8c831acc  lw          $v1, 0x1ACC($a0)
    ctx->pc = 0x1544a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6860)));
    // 0x1544ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1544ACu;
    {
        const bool branch_taken_0x1544ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1544B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1544ACu;
            // 0x1544b0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544ac) {
            ctx->pc = 0x1544C0u;
            goto label_1544c0;
        }
    }
    ctx->pc = 0x1544B4u;
    // 0x1544b4: 0x8ea31ac4  lw          $v1, 0x1AC4($s5)
    ctx->pc = 0x1544b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6852)));
    // 0x1544b8: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1544B8u;
    {
        const bool branch_taken_0x1544b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544b8) {
            ctx->pc = 0x154740u;
            goto label_154740;
        }
    }
    ctx->pc = 0x1544C0u;
label_1544c0:
    // 0x1544c0: 0x8ea21ac8  lw          $v0, 0x1AC8($s5)
    ctx->pc = 0x1544c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6856)));
    // 0x1544c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1544C4u;
    {
        const bool branch_taken_0x1544c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544c4) {
            ctx->pc = 0x1544ECu;
            goto label_1544ec;
        }
    }
    ctx->pc = 0x1544CCu;
    // 0x1544cc: 0x8ea61ac4  lw          $a2, 0x1AC4($s5)
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6852)));
    // 0x1544d0: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1544D0u;
    {
        const bool branch_taken_0x1544d0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1544D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1544D0u;
            // 0x1544d4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544d0) {
            ctx->pc = 0x1544ECu;
            goto label_1544ec;
        }
    }
    ctx->pc = 0x1544D8u;
    // 0x1544d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1544d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1544dc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1544DCu;
    SET_GPR_U32(ctx, 31, 0x1544E4u);
    ctx->pc = 0x1544E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1544DCu;
            // 0x1544e0: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1544E4u; }
        if (ctx->pc != 0x1544E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1544E4u; }
        if (ctx->pc != 0x1544E4u) { return; }
    }
    ctx->pc = 0x1544E4u;
label_1544e4:
    // 0x1544e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1544E4u;
    {
        const bool branch_taken_0x1544e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1544E4u;
            // 0x1544e8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544e4) {
            ctx->pc = 0x154504u;
            goto label_154504;
        }
    }
    ctx->pc = 0x1544ECu;
label_1544ec:
    // 0x1544ec: 0x8ea61ac4  lw          $a2, 0x1AC4($s5)
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6852)));
    // 0x1544f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1544f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1544f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1544f8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1544F8u;
    SET_GPR_U32(ctx, 31, 0x154500u);
    ctx->pc = 0x1544FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1544F8u;
            // 0x1544fc: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154500u; }
        if (ctx->pc != 0x154500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154500u; }
        if (ctx->pc != 0x154500u) { return; }
    }
    ctx->pc = 0x154500u;
label_154500:
    // 0x154500: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x154500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_154504:
    // 0x154504: 0xc04a422  jal         func_129088
    ctx->pc = 0x154504u;
    SET_GPR_U32(ctx, 31, 0x15450Cu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15450Cu; }
        if (ctx->pc != 0x15450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15450Cu; }
        if (ctx->pc != 0x15450Cu) { return; }
    }
    ctx->pc = 0x15450Cu;
label_15450c:
    // 0x15450c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15450cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154510: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x154510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x154514: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x154514u;
    {
        const bool branch_taken_0x154514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154514u;
            // 0x154518: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154514) {
            ctx->pc = 0x154740u;
            goto label_154740;
        }
    }
    ctx->pc = 0x15451Cu;
label_15451c:
    // 0x15451c: 0x8ea31ad0  lw          $v1, 0x1AD0($s5)
    ctx->pc = 0x15451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6864)));
    // 0x154520: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x154520u;
    {
        const bool branch_taken_0x154520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154520u;
            // 0x154524: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154520) {
            ctx->pc = 0x154540u;
            goto label_154540;
        }
    }
    ctx->pc = 0x154528u;
    // 0x154528: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x154528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x15452c: 0x80450070  lb          $a1, 0x70($v0)
    ctx->pc = 0x15452cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x154530: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x154530u;
    SET_GPR_U32(ctx, 31, 0x154538u);
    ctx->pc = 0x154534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154530u;
            // 0x154534: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154538u; }
        if (ctx->pc != 0x154538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154538u; }
        if (ctx->pc != 0x154538u) { return; }
    }
    ctx->pc = 0x154538u;
label_154538:
    // 0x154538: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x154538u;
    {
        const bool branch_taken_0x154538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154538u;
            // 0x15453c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154538) {
            ctx->pc = 0x1546C4u;
            goto label_1546c4;
        }
    }
    ctx->pc = 0x154540u;
label_154540:
    // 0x154540: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x154544: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x154544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x154548: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154548u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15454c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x15454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x154550: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154550u;
    {
        const bool branch_taken_0x154550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154550u;
            // 0x154554: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154550) {
            ctx->pc = 0x154564u;
            goto label_154564;
        }
    }
    ctx->pc = 0x154558u;
    // 0x154558: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154558u;
    SET_GPR_U32(ctx, 31, 0x154560u);
    ctx->pc = 0x15455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154558u;
            // 0x15455c: 0x24842968  addiu       $a0, $a0, 0x2968 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154560u; }
        if (ctx->pc != 0x154560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154560u; }
        if (ctx->pc != 0x154560u) { return; }
    }
    ctx->pc = 0x154560u;
label_154560:
    // 0x154560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154564:
    // 0x154564: 0x0  nop
    ctx->pc = 0x154564u;
    // NOP
    // 0x154568: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154568u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15456c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x15456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x154570: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154570u;
    {
        const bool branch_taken_0x154570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154570u;
            // 0x154574: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154570) {
            ctx->pc = 0x154584u;
            goto label_154584;
        }
    }
    ctx->pc = 0x154578u;
    // 0x154578: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154578u;
    SET_GPR_U32(ctx, 31, 0x154580u);
    ctx->pc = 0x15457Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154578u;
            // 0x15457c: 0x24842970  addiu       $a0, $a0, 0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154580u; }
        if (ctx->pc != 0x154580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154580u; }
        if (ctx->pc != 0x154580u) { return; }
    }
    ctx->pc = 0x154580u;
label_154580:
    // 0x154580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154584:
    // 0x154584: 0x0  nop
    ctx->pc = 0x154584u;
    // NOP
    // 0x154588: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154588u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15458c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x15458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x154590: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154590u;
    {
        const bool branch_taken_0x154590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154590u;
            // 0x154594: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154590) {
            ctx->pc = 0x1545A4u;
            goto label_1545a4;
        }
    }
    ctx->pc = 0x154598u;
    // 0x154598: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154598u;
    SET_GPR_U32(ctx, 31, 0x1545A0u);
    ctx->pc = 0x15459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154598u;
            // 0x15459c: 0x24842978  addiu       $a0, $a0, 0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545A0u; }
        if (ctx->pc != 0x1545A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545A0u; }
        if (ctx->pc != 0x1545A0u) { return; }
    }
    ctx->pc = 0x1545A0u;
label_1545a0:
    // 0x1545a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1545a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1545a4:
    // 0x1545a4: 0x0  nop
    ctx->pc = 0x1545a4u;
    // NOP
    // 0x1545a8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x1545a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1545ac: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1545acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1545b0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1545B0u;
    {
        const bool branch_taken_0x1545b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1545B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1545B0u;
            // 0x1545b4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545b0) {
            ctx->pc = 0x1545C4u;
            goto label_1545c4;
        }
    }
    ctx->pc = 0x1545B8u;
    // 0x1545b8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1545B8u;
    SET_GPR_U32(ctx, 31, 0x1545C0u);
    ctx->pc = 0x1545BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1545B8u;
            // 0x1545bc: 0x24842980  addiu       $a0, $a0, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545C0u; }
        if (ctx->pc != 0x1545C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545C0u; }
        if (ctx->pc != 0x1545C0u) { return; }
    }
    ctx->pc = 0x1545C0u;
label_1545c0:
    // 0x1545c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1545c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1545c4:
    // 0x1545c4: 0x0  nop
    ctx->pc = 0x1545c4u;
    // NOP
    // 0x1545c8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x1545c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1545cc: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x1545ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1545d0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1545D0u;
    {
        const bool branch_taken_0x1545d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1545D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1545D0u;
            // 0x1545d4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545d0) {
            ctx->pc = 0x1545E4u;
            goto label_1545e4;
        }
    }
    ctx->pc = 0x1545D8u;
    // 0x1545d8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1545D8u;
    SET_GPR_U32(ctx, 31, 0x1545E0u);
    ctx->pc = 0x1545DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1545D8u;
            // 0x1545dc: 0x24842988  addiu       $a0, $a0, 0x2988 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545E0u; }
        if (ctx->pc != 0x1545E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545E0u; }
        if (ctx->pc != 0x1545E0u) { return; }
    }
    ctx->pc = 0x1545E0u;
label_1545e0:
    // 0x1545e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1545e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1545e4:
    // 0x1545e4: 0x0  nop
    ctx->pc = 0x1545e4u;
    // NOP
    // 0x1545e8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1545ec: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x1545ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1545f0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1545F0u;
    {
        const bool branch_taken_0x1545f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1545F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1545F0u;
            // 0x1545f4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f0) {
            ctx->pc = 0x154604u;
            goto label_154604;
        }
    }
    ctx->pc = 0x1545F8u;
    // 0x1545f8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1545F8u;
    SET_GPR_U32(ctx, 31, 0x154600u);
    ctx->pc = 0x1545FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1545F8u;
            // 0x1545fc: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154600u; }
        if (ctx->pc != 0x154600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154600u; }
        if (ctx->pc != 0x154600u) { return; }
    }
    ctx->pc = 0x154600u;
label_154600:
    // 0x154600: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154604:
    // 0x154604: 0x0  nop
    ctx->pc = 0x154604u;
    // NOP
    // 0x154608: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15460c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x154610: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154610u;
    {
        const bool branch_taken_0x154610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154610u;
            // 0x154614: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154610) {
            ctx->pc = 0x154624u;
            goto label_154624;
        }
    }
    ctx->pc = 0x154618u;
    // 0x154618: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154618u;
    SET_GPR_U32(ctx, 31, 0x154620u);
    ctx->pc = 0x15461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154618u;
            // 0x15461c: 0x24842998  addiu       $a0, $a0, 0x2998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154620u; }
        if (ctx->pc != 0x154620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154620u; }
        if (ctx->pc != 0x154620u) { return; }
    }
    ctx->pc = 0x154620u;
label_154620:
    // 0x154620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154624:
    // 0x154624: 0x0  nop
    ctx->pc = 0x154624u;
    // NOP
    // 0x154628: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154628u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15462c: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x15462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x154630: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154630u;
    {
        const bool branch_taken_0x154630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154630u;
            // 0x154634: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154630) {
            ctx->pc = 0x154644u;
            goto label_154644;
        }
    }
    ctx->pc = 0x154638u;
    // 0x154638: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154638u;
    SET_GPR_U32(ctx, 31, 0x154640u);
    ctx->pc = 0x15463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154638u;
            // 0x15463c: 0x248429a0  addiu       $a0, $a0, 0x29A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154640u; }
        if (ctx->pc != 0x154640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154640u; }
        if (ctx->pc != 0x154640u) { return; }
    }
    ctx->pc = 0x154640u;
label_154640:
    // 0x154640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154644:
    // 0x154644: 0x0  nop
    ctx->pc = 0x154644u;
    // NOP
    // 0x154648: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154648u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15464c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x15464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x154650: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154650u;
    {
        const bool branch_taken_0x154650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154650u;
            // 0x154654: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154650) {
            ctx->pc = 0x154664u;
            goto label_154664;
        }
    }
    ctx->pc = 0x154658u;
    // 0x154658: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154658u;
    SET_GPR_U32(ctx, 31, 0x154660u);
    ctx->pc = 0x15465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154658u;
            // 0x15465c: 0x248429a8  addiu       $a0, $a0, 0x29A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154660u; }
        if (ctx->pc != 0x154660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154660u; }
        if (ctx->pc != 0x154660u) { return; }
    }
    ctx->pc = 0x154660u;
label_154660:
    // 0x154660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154664:
    // 0x154664: 0x0  nop
    ctx->pc = 0x154664u;
    // NOP
    // 0x154668: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154668u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15466c: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x15466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x154670: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154670u;
    {
        const bool branch_taken_0x154670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154670u;
            // 0x154674: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154670) {
            ctx->pc = 0x154684u;
            goto label_154684;
        }
    }
    ctx->pc = 0x154678u;
    // 0x154678: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154678u;
    SET_GPR_U32(ctx, 31, 0x154680u);
    ctx->pc = 0x15467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154678u;
            // 0x15467c: 0x248429b0  addiu       $a0, $a0, 0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154680u; }
        if (ctx->pc != 0x154680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154680u; }
        if (ctx->pc != 0x154680u) { return; }
    }
    ctx->pc = 0x154680u;
label_154680:
    // 0x154680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154684:
    // 0x154684: 0x0  nop
    ctx->pc = 0x154684u;
    // NOP
    // 0x154688: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15468c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x154690: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154690u;
    {
        const bool branch_taken_0x154690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154690u;
            // 0x154694: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154690) {
            ctx->pc = 0x1546A4u;
            goto label_1546a4;
        }
    }
    ctx->pc = 0x154698u;
    // 0x154698: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154698u;
    SET_GPR_U32(ctx, 31, 0x1546A0u);
    ctx->pc = 0x15469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154698u;
            // 0x15469c: 0x248429b8  addiu       $a0, $a0, 0x29B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546A0u; }
        if (ctx->pc != 0x1546A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546A0u; }
        if (ctx->pc != 0x1546A0u) { return; }
    }
    ctx->pc = 0x1546A0u;
label_1546a0:
    // 0x1546a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1546a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1546a4:
    // 0x1546a4: 0x0  nop
    ctx->pc = 0x1546a4u;
    // NOP
    // 0x1546a8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1546ac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1546acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1546b0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1546B0u;
    {
        const bool branch_taken_0x1546b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1546B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546B0u;
            // 0x1546b4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546b0) {
            ctx->pc = 0x1546C4u;
            goto label_1546c4;
        }
    }
    ctx->pc = 0x1546B8u;
    // 0x1546b8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1546B8u;
    SET_GPR_U32(ctx, 31, 0x1546C0u);
    ctx->pc = 0x1546BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1546B8u;
            // 0x1546bc: 0x248429c0  addiu       $a0, $a0, 0x29C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546C0u; }
        if (ctx->pc != 0x1546C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546C0u; }
        if (ctx->pc != 0x1546C0u) { return; }
    }
    ctx->pc = 0x1546C0u;
label_1546c0:
    // 0x1546c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1546c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1546c4:
    // 0x1546c4: 0x0  nop
    ctx->pc = 0x1546c4u;
    // NOP
    // 0x1546c8: 0x4a00019  bltz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1546C8u;
    {
        const bool branch_taken_0x1546c8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1546c8) {
            ctx->pc = 0x154730u;
            goto label_154730;
        }
    }
    ctx->pc = 0x1546D0u;
    // 0x1546d0: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x1546d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1546d4: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x1546d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1546d8: 0xc055834  jal         func_1560D0
    ctx->pc = 0x1546D8u;
    SET_GPR_U32(ctx, 31, 0x1546E0u);
    ctx->pc = 0x1546DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1546D8u;
            // 0x1546dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546E0u; }
        if (ctx->pc != 0x1546E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546E0u; }
        if (ctx->pc != 0x1546E0u) { return; }
    }
    ctx->pc = 0x1546E0u;
label_1546e0:
    // 0x1546e0: 0x8ea31ad0  lw          $v1, 0x1AD0($s5)
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6864)));
    // 0x1546e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1546E4u;
    {
        const bool branch_taken_0x1546e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546e4) {
            ctx->pc = 0x154718u;
            goto label_154718;
        }
    }
    ctx->pc = 0x1546ECu;
    // 0x1546ec: 0x8ea300c0  lw          $v1, 0xC0($s5)
    ctx->pc = 0x1546ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x1546f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1546F0u;
    {
        const bool branch_taken_0x1546f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1546F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546F0u;
            // 0x1546f4: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546f0) {
            ctx->pc = 0x154700u;
            goto label_154700;
        }
    }
    ctx->pc = 0x1546F8u;
    // 0x1546f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1546f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1546fc: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1546fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_154700:
    // 0x154700: 0x8ea41ad4  lw          $a0, 0x1AD4($s5)
    ctx->pc = 0x154700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6868)));
    // 0x154704: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x154704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x154708: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15470c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154710: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154710u;
    {
        const bool branch_taken_0x154710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154710u;
            // 0x154714: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154710) {
            ctx->pc = 0x154730u;
            goto label_154730;
        }
    }
    ctx->pc = 0x154718u;
label_154718:
    // 0x154718: 0x8ea500c0  lw          $a1, 0xC0($s5)
    ctx->pc = 0x154718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
    // 0x15471c: 0x8ea41ad4  lw          $a0, 0x1AD4($s5)
    ctx->pc = 0x15471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6868)));
    // 0x154720: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x154724: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15472c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x15472cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_154730:
    // 0x154730: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x154730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x154734: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x154734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x154738: 0x1460ff78  bnez        $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x154738u;
    {
        const bool branch_taken_0x154738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154738) {
            ctx->pc = 0x15451Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15451c;
        }
    }
    ctx->pc = 0x154740u;
label_154740:
    // 0x154740: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x154740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154744: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x154744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154748: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15474c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15474cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154750: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15475c: 0x3e00008  jr          $ra
    ctx->pc = 0x15475Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15475Cu;
            // 0x154760: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154764u;
}
