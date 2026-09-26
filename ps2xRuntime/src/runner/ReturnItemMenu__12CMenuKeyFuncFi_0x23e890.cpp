#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReturnItemMenu__12CMenuKeyFuncFi
// Address: 0x23e890 - 0x23ea00
void ReturnItemMenu__12CMenuKeyFuncFi_0x23e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReturnItemMenu__12CMenuKeyFuncFi_0x23e890");
#endif

    switch (ctx->pc) {
        case 0x23e8c8u: goto label_23e8c8;
        case 0x23e8e4u: goto label_23e8e4;
        case 0x23e904u: goto label_23e904;
        case 0x23e924u: goto label_23e924;
        case 0x23e944u: goto label_23e944;
        case 0x23e954u: goto label_23e954;
        case 0x23e964u: goto label_23e964;
        case 0x23e988u: goto label_23e988;
        case 0x23e9a4u: goto label_23e9a4;
        case 0x23e9b8u: goto label_23e9b8;
        case 0x23e9d0u: goto label_23e9d0;
        default: break;
    }

    ctx->pc = 0x23e890u;

    // 0x23e890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23e894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23e898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23e89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23e8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23e8a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23e8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e8ac: 0x848200c2  lh          $v0, 0xC2($a0)
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x23e8b0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E8B0u;
    {
        const bool branch_taken_0x23e8b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23E8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8B0u;
            // 0x23e8b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8b0) {
            ctx->pc = 0x23E8C0u;
            goto label_23e8c0;
        }
    }
    ctx->pc = 0x23E8B8u;
    // 0x23e8b8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x23E8B8u;
    {
        const bool branch_taken_0x23e8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8B8u;
            // 0x23e8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8b8) {
            ctx->pc = 0x23E9E4u;
            goto label_23e9e4;
        }
    }
    ctx->pc = 0x23E8C0u;
label_23e8c0:
    // 0x23e8c0: 0xc08f9e4  jal         func_23E790
    ctx->pc = 0x23E8C0u;
    SET_GPR_U32(ctx, 31, 0x23E8C8u);
    ctx->pc = 0x23E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8C0u;
            // 0x23e8c4: 0x2644012c  addiu       $a0, $s2, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E790u;
    if (runtime->hasFunction(0x23E790u)) {
        auto targetFn = runtime->lookupFunction(0x23E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E8C8u; }
        if (ctx->pc != 0x23E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E8C8u; }
        if (ctx->pc != 0x23E8C8u) { return; }
    }
    ctx->pc = 0x23E8C8u;
label_23e8c8:
    // 0x23e8c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E8CCu;
    {
        const bool branch_taken_0x23e8cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8CCu;
            // 0x23e8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8cc) {
            ctx->pc = 0x23E8DCu;
            goto label_23e8dc;
        }
    }
    ctx->pc = 0x23E8D4u;
    // 0x23e8d4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x23E8D4u;
    {
        const bool branch_taken_0x23e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8D4u;
            // 0x23e8d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8d4) {
            ctx->pc = 0x23E9E8u;
            goto label_23e9e8;
        }
    }
    ctx->pc = 0x23E8DCu;
label_23e8dc:
    // 0x23e8dc: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x23E8DCu;
    SET_GPR_U32(ctx, 31, 0x23E8E4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E8E4u; }
        if (ctx->pc != 0x23E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E8E4u; }
        if (ctx->pc != 0x23E8E4u) { return; }
    }
    ctx->pc = 0x23E8E4u;
label_23e8e4:
    // 0x23e8e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8e8: 0x8642012e  lh          $v0, 0x12E($s2)
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 302)));
    // 0x23e8ec: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23E8ECu;
    {
        const bool branch_taken_0x23e8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8ECu;
            // 0x23e8f0: 0x264400c0  addiu       $a0, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8ec) {
            ctx->pc = 0x23E94Cu;
            goto label_23e94c;
        }
    }
    ctx->pc = 0x23E8F4u;
    // 0x23e8f4: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x23e8f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x23e8f8: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x23e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x23e8fc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x23E8FCu;
    SET_GPR_U32(ctx, 31, 0x23E904u);
    ctx->pc = 0x23E900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8FCu;
            // 0x23e900: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E904u; }
        if (ctx->pc != 0x23E904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E904u; }
        if (ctx->pc != 0x23E904u) { return; }
    }
    ctx->pc = 0x23E904u;
label_23e904:
    // 0x23e904: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23E904u;
    {
        const bool branch_taken_0x23e904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e904) {
            ctx->pc = 0x23E948u;
            goto label_23e948;
        }
    }
    ctx->pc = 0x23E90Cu;
    // 0x23e90c: 0x9042001c  lbu         $v0, 0x1C($v0)
    ctx->pc = 0x23e90cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23e910: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E910u;
    {
        const bool branch_taken_0x23e910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E910u;
            // 0x23e914: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e910) {
            ctx->pc = 0x23E948u;
            goto label_23e948;
        }
    }
    ctx->pc = 0x23E918u;
    // 0x23e918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e91c: 0xc067610  jal         func_19D840
    ctx->pc = 0x23E91Cu;
    SET_GPR_U32(ctx, 31, 0x23E924u);
    ctx->pc = 0x23E920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E91Cu;
            // 0x23e920: 0xa642012e  sh          $v0, 0x12E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 302), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E924u; }
        if (ctx->pc != 0x23E924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E924u; }
        if (ctx->pc != 0x23E924u) { return; }
    }
    ctx->pc = 0x23E924u;
label_23e924:
    // 0x23e924: 0xa6420130  sh          $v0, 0x130($s2)
    ctx->pc = 0x23e924u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e928: 0x86420130  lh          $v0, 0x130($s2)
    ctx->pc = 0x23e928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x23e92c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E92Cu;
    {
        const bool branch_taken_0x23e92c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23E930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E92Cu;
            // 0x23e930: 0x2644012c  addiu       $a0, $s2, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e92c) {
            ctx->pc = 0x23E93Cu;
            goto label_23e93c;
        }
    }
    ctx->pc = 0x23E934u;
    // 0x23e934: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23E934u;
    {
        const bool branch_taken_0x23e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E934u;
            // 0x23e938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e934) {
            ctx->pc = 0x23E9E4u;
            goto label_23e9e4;
        }
    }
    ctx->pc = 0x23E93Cu;
label_23e93c:
    // 0x23e93c: 0xc08f9e4  jal         func_23E790
    ctx->pc = 0x23E93Cu;
    SET_GPR_U32(ctx, 31, 0x23E944u);
    ctx->pc = 0x23E790u;
    if (runtime->hasFunction(0x23E790u)) {
        auto targetFn = runtime->lookupFunction(0x23E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E944u; }
        if (ctx->pc != 0x23E944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E944u; }
        if (ctx->pc != 0x23E944u) { return; }
    }
    ctx->pc = 0x23E944u;
label_23e944:
    // 0x23e944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e948:
    // 0x23e948: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x23e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_23e94c:
    // 0x23e94c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23E94Cu;
    SET_GPR_U32(ctx, 31, 0x23E954u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E954u; }
        if (ctx->pc != 0x23E954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E954u; }
        if (ctx->pc != 0x23E954u) { return; }
    }
    ctx->pc = 0x23E954u;
label_23e954:
    // 0x23e954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e958: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x23e958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x23e95c: 0xc08ee40  jal         func_23B900
    ctx->pc = 0x23E95Cu;
    SET_GPR_U32(ctx, 31, 0x23E964u);
    ctx->pc = 0x23E960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E95Cu;
            // 0x23e960: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B900u;
    if (runtime->hasFunction(0x23B900u)) {
        auto targetFn = runtime->lookupFunction(0x23B900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E964u; }
        if (ctx->pc != 0x23E964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x23b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E964u; }
        if (ctx->pc != 0x23E964u) { return; }
    }
    ctx->pc = 0x23E964u;
label_23e964:
    // 0x23e964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e968: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x23e96c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E96Cu;
    {
        const bool branch_taken_0x23e96c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E96Cu;
            // 0x23e970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e96c) {
            ctx->pc = 0x23E980u;
            goto label_23e980;
        }
    }
    ctx->pc = 0x23E974u;
    // 0x23e974: 0x864200c0  lh          $v0, 0xC0($s2)
    ctx->pc = 0x23e974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x23e978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E978u;
    {
        const bool branch_taken_0x23e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e978) {
            ctx->pc = 0x23E988u;
            goto label_23e988;
        }
    }
    ctx->pc = 0x23E980u;
label_23e980:
    // 0x23e980: 0xc08fa80  jal         func_23EA00
    ctx->pc = 0x23E980u;
    SET_GPR_U32(ctx, 31, 0x23E988u);
    ctx->pc = 0x23EA00u;
    if (runtime->hasFunction(0x23EA00u)) {
        auto targetFn = runtime->lookupFunction(0x23EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E988u; }
        if (ctx->pc != 0x23E988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitHaveData__12CMenuKeyFuncFv_0x23ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E988u; }
        if (ctx->pc != 0x23E988u) { return; }
    }
    ctx->pc = 0x23E988u;
label_23e988:
    // 0x23e988: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x23e98c: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E98Cu;
    {
        const bool branch_taken_0x23e98c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23E990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E98Cu;
            // 0x23e990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e98c) {
            ctx->pc = 0x23E9ACu;
            goto label_23e9ac;
        }
    }
    ctx->pc = 0x23E994u;
    // 0x23e994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e99c: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x23E99Cu;
    SET_GPR_U32(ctx, 31, 0x23E9A4u);
    ctx->pc = 0x23E9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E99Cu;
            // 0x23e9a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E9A4u; }
        if (ctx->pc != 0x23E9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E9A4u; }
        if (ctx->pc != 0x23E9A4u) { return; }
    }
    ctx->pc = 0x23E9A4u;
label_23e9a4:
    // 0x23e9a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23E9A4u;
    {
        const bool branch_taken_0x23e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e9a4) {
            ctx->pc = 0x23E9B8u;
            goto label_23e9b8;
        }
    }
    ctx->pc = 0x23E9ACu;
label_23e9ac:
    // 0x23e9ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9b0: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x23E9B0u;
    SET_GPR_U32(ctx, 31, 0x23E9B8u);
    ctx->pc = 0x23E9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E9B0u;
            // 0x23e9b4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E9B8u; }
        if (ctx->pc != 0x23E9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E9B8u; }
        if (ctx->pc != 0x23E9B8u) { return; }
    }
    ctx->pc = 0x23E9B8u;
label_23e9b8:
    // 0x23e9b8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x23E9B8u;
    {
        const bool branch_taken_0x23e9b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E9B8u;
            // 0x23e9bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9b8) {
            ctx->pc = 0x23E9E4u;
            goto label_23e9e4;
        }
    }
    ctx->pc = 0x23E9C0u;
    // 0x23e9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e9c8: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x23E9C8u;
    SET_GPR_U32(ctx, 31, 0x23E9D0u);
    ctx->pc = 0x23E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E9C8u;
            // 0x23e9cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E9D0u; }
        if (ctx->pc != 0x23E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E9D0u; }
        if (ctx->pc != 0x23E9D0u) { return; }
    }
    ctx->pc = 0x23E9D0u;
label_23e9d0:
    // 0x23e9d0: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x23e9d4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E9D4u;
    {
        const bool branch_taken_0x23e9d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23E9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E9D4u;
            // 0x23e9d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9d4) {
            ctx->pc = 0x23E9E0u;
            goto label_23e9e0;
        }
    }
    ctx->pc = 0x23E9DCu;
    // 0x23e9dc: 0xa2420080  sb          $v0, 0x80($s2)
    ctx->pc = 0x23e9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 2));
label_23e9e0:
    // 0x23e9e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e9e4:
    // 0x23e9e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23e9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23e9e8:
    // 0x23e9e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e9e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e9ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e9ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e9f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e9f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x23E9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E9F8u;
            // 0x23e9fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EA00u;
}
