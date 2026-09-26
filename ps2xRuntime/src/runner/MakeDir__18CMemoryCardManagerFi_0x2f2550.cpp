#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeDir__18CMemoryCardManagerFi
// Address: 0x2f2550 - 0x2f2b1c
void MakeDir__18CMemoryCardManagerFi_0x2f2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeDir__18CMemoryCardManagerFi_0x2f2550");
#endif

    switch (ctx->pc) {
        case 0x2f259cu: goto label_2f259c;
        case 0x2f25acu: goto label_2f25ac;
        case 0x2f25c8u: goto label_2f25c8;
        case 0x2f25e0u: goto label_2f25e0;
        case 0x2f2640u: goto label_2f2640;
        case 0x2f2650u: goto label_2f2650;
        case 0x2f2664u: goto label_2f2664;
        case 0x2f26a0u: goto label_2f26a0;
        case 0x2f26d4u: goto label_2f26d4;
        case 0x2f26ecu: goto label_2f26ec;
        case 0x2f2700u: goto label_2f2700;
        case 0x2f2738u: goto label_2f2738;
        case 0x2f2778u: goto label_2f2778;
        case 0x2f27a8u: goto label_2f27a8;
        case 0x2f27b8u: goto label_2f27b8;
        case 0x2f27c8u: goto label_2f27c8;
        case 0x2f27f4u: goto label_2f27f4;
        case 0x2f2824u: goto label_2f2824;
        case 0x2f2850u: goto label_2f2850;
        case 0x2f2894u: goto label_2f2894;
        case 0x2f28d4u: goto label_2f28d4;
        case 0x2f28ecu: goto label_2f28ec;
        case 0x2f2924u: goto label_2f2924;
        case 0x2f2934u: goto label_2f2934;
        case 0x2f2970u: goto label_2f2970;
        case 0x2f29a8u: goto label_2f29a8;
        case 0x2f29dcu: goto label_2f29dc;
        case 0x2f29fcu: goto label_2f29fc;
        case 0x2f2a10u: goto label_2f2a10;
        case 0x2f2a50u: goto label_2f2a50;
        case 0x2f2a7cu: goto label_2f2a7c;
        case 0x2f2ad4u: goto label_2f2ad4;
        default: break;
    }

    ctx->pc = 0x2f2550u;

    // 0x2f2550: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2f2550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2f2554: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f2558: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f2558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f255c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f2560: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f2560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f2568: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f2568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f256c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f2570: 0x83829eec  lb          $v0, -0x6114($gp)
    ctx->pc = 0x2f2570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942444)));
    // 0x2f2574: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2574u;
    {
        const bool branch_taken_0x2f2574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2574u;
            // 0x2f2578: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2574) {
            ctx->pc = 0x2F258Cu;
            goto label_2f258c;
        }
    }
    ctx->pc = 0x2F257Cu;
    // 0x2f257c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2584: 0xaf839ee8  sw          $v1, -0x6118($gp)
    ctx->pc = 0x2f2584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942440), GPR_U32(ctx, 3));
    // 0x2f2588: 0xa3829eec  sb          $v0, -0x6114($gp)
    ctx->pc = 0x2f2588u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942444), (uint8_t)GPR_U32(ctx, 2));
label_2f258c:
    // 0x2f258c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f258cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f2590: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f2594: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F2594u;
    SET_GPR_U32(ctx, 31, 0x2F259Cu);
    ctx->pc = 0x2F2598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2594u;
            // 0x2f2598: 0x24a51890  addiu       $a1, $a1, 0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F259Cu; }
        if (ctx->pc != 0x2F259Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F259Cu; }
        if (ctx->pc != 0x2F259Cu) { return; }
    }
    ctx->pc = 0x2F259Cu;
label_2f259c:
    // 0x2f259c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f25a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f25a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25a4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F25A4u;
    SET_GPR_U32(ctx, 31, 0x2F25ACu);
    ctx->pc = 0x2F25A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25A4u;
            // 0x2f25a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25ACu; }
        if (ctx->pc != 0x2F25ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25ACu; }
        if (ctx->pc != 0x2F25ACu) { return; }
    }
    ctx->pc = 0x2F25ACu;
label_2f25ac:
    // 0x2f25ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f25b0: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F25B0u;
    {
        const bool branch_taken_0x2f25b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F25B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25B0u;
            // 0x2f25b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25b0) {
            ctx->pc = 0x2F25CCu;
            goto label_2f25cc;
        }
    }
    ctx->pc = 0x2F25B8u;
    // 0x2f25b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f25bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f25bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f25c0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F25C0u;
    SET_GPR_U32(ctx, 31, 0x2F25C8u);
    ctx->pc = 0x2F25C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25C0u;
            // 0x2f25c4: 0x24a517c0  addiu       $a1, $a1, 0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25C8u; }
        if (ctx->pc != 0x2F25C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25C8u; }
        if (ctx->pc != 0x2F25C8u) { return; }
    }
    ctx->pc = 0x2F25C8u;
label_2f25c8:
    // 0x2f25c8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2f25cc:
    // 0x2f25cc: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F25CCu;
    {
        const bool branch_taken_0x2f25cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F25D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25CCu;
            // 0x2f25d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25cc) {
            ctx->pc = 0x2F25E0u;
            goto label_2f25e0;
        }
    }
    ctx->pc = 0x2F25D4u;
    // 0x2f25d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f25d8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F25D8u;
    SET_GPR_U32(ctx, 31, 0x2F25E0u);
    ctx->pc = 0x2F25DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25D8u;
            // 0x2f25dc: 0x24a518b0  addiu       $a1, $a1, 0x18B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25E0u; }
        if (ctx->pc != 0x2F25E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F25E0u; }
        if (ctx->pc != 0x2F25E0u) { return; }
    }
    ctx->pc = 0x2F25E0u;
label_2f25e0:
    // 0x2f25e0: 0x8e6304c8  lw          $v1, 0x4C8($s3)
    ctx->pc = 0x2f25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1224)));
    // 0x2f25e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F25E4u;
    {
        const bool branch_taken_0x2f25e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F25E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25E4u;
            // 0x2f25e8: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25e4) {
            ctx->pc = 0x2F25FCu;
            goto label_2f25fc;
        }
    }
    ctx->pc = 0x2F25ECu;
    // 0x2f25ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f25f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F25F0u;
    {
        const bool branch_taken_0x2f25f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F25F0u;
            // 0x2f25f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25f0) {
            ctx->pc = 0x2F2604u;
            goto label_2f2604;
        }
    }
    ctx->pc = 0x2F25F8u;
    // 0x2f25f8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f25fc:
    // 0x2f25fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2f2600: 0x24500d5c  addiu       $s0, $v0, 0xD5C
    ctx->pc = 0x2f2600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f2604:
    // 0x2f2604: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f2608: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x2f2608u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2f260c: 0x1020013b  beqz        $at, . + 4 + (0x13B << 2)
    ctx->pc = 0x2F260Cu;
    {
        const bool branch_taken_0x2f260c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F260Cu;
            // 0x2f2610: 0x267104d0  addiu       $s1, $s3, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f260c) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2614u;
    // 0x2f2614: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2f2614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2f2618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f2618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f261c: 0x246318e0  addiu       $v1, $v1, 0x18E0
    ctx->pc = 0x2f261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6368));
    // 0x2f2620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2624: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f2624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2628: 0x400008  jr          $v0
    ctx->pc = 0x2F2628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2630u: goto label_2f2630;
            case 0x2F2690u: goto label_2f2690;
            case 0x2F2728u: goto label_2f2728;
            case 0x2F2814u: goto label_2f2814;
            case 0x2F28DCu: goto label_2f28dc;
            case 0x2F2960u: goto label_2f2960;
            case 0x2F2A40u: goto label_2f2a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2630u;
label_2f2630:
    // 0x2f2630: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2638: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2638u;
    SET_GPR_U32(ctx, 31, 0x2F2640u);
    ctx->pc = 0x2F263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2638u;
            // 0x2f263c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2640u; }
        if (ctx->pc != 0x2F2640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2640u; }
        if (ctx->pc != 0x2F2640u) { return; }
    }
    ctx->pc = 0x2F2640u;
label_2f2640:
    // 0x2f2640: 0x1040012f  beqz        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x2F2640u;
    {
        const bool branch_taken_0x2f2640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2640u;
            // 0x2f2644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2640) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2648u;
    // 0x2f2648: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F2648u;
    SET_GPR_U32(ctx, 31, 0x2F2650u);
    ctx->pc = 0x2F264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2648u;
            // 0x2f264c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2650u; }
        if (ctx->pc != 0x2F2650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2650u; }
        if (ctx->pc != 0x2F2650u) { return; }
    }
    ctx->pc = 0x2F2650u;
label_2f2650:
    // 0x2f2650: 0xae600914  sw          $zero, 0x914($s3)
    ctx->pc = 0x2f2650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2324), GPR_U32(ctx, 0));
    // 0x2f2654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2658: 0x8e6404c8  lw          $a0, 0x4C8($s3)
    ctx->pc = 0x2f2658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1224)));
    // 0x2f265c: 0xc048a20  jal         func_122880
    ctx->pc = 0x2F265Cu;
    SET_GPR_U32(ctx, 31, 0x2F2664u);
    ctx->pc = 0x2F2660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F265Cu;
            // 0x2f2660: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122880u;
    if (runtime->hasFunction(0x122880u)) {
        auto targetFn = runtime->lookupFunction(0x122880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2664u; }
        if (ctx->pc != 0x2F2664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcMkdir_0x122880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2664u; }
        if (ctx->pc != 0x2F2664u) { return; }
    }
    ctx->pc = 0x2F2664u;
label_2f2664:
    // 0x2f2664: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2664u;
    {
        const bool branch_taken_0x2f2664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2664u;
            // 0x2f2668: 0x2403ff38  addiu       $v1, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2664) {
            ctx->pc = 0x2F267Cu;
            goto label_2f267c;
        }
    }
    ctx->pc = 0x2F266Cu;
    // 0x2f266c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f2670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f2674: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2F2674u;
    {
        const bool branch_taken_0x2f2674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2674u;
            // 0x2f2678: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2674) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F267Cu;
label_2f267c:
    // 0x2f267c: 0x1043011f  beq         $v0, $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x2F267Cu;
    {
        const bool branch_taken_0x2f267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F2680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F267Cu;
            // 0x2f2680: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f267c) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2684u;
    // 0x2f2684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2688: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x2F2688u;
    {
        const bool branch_taken_0x2f2688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2688u;
            // 0x2f268c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2688) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2690u;
label_2f2690:
    // 0x2f2690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2694: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f2694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f2698: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2698u;
    SET_GPR_U32(ctx, 31, 0x2F26A0u);
    ctx->pc = 0x2F269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2698u;
            // 0x2f269c: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F26A0u; }
        if (ctx->pc != 0x2F26A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F26A0u; }
        if (ctx->pc != 0x2F26A0u) { return; }
    }
    ctx->pc = 0x2F26A0u;
label_2f26a0:
    // 0x2f26a0: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x2F26A0u;
    {
        const bool branch_taken_0x2f26a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f26a0) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F26A8u;
    // 0x2f26a8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2f26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f26ac: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2f26acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f26b0: 0x14620112  bne         $v1, $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x2F26B0u;
    {
        const bool branch_taken_0x2f26b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f26b0) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F26B8u;
    // 0x2f26b8: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f26b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f26bc: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F26BCu;
    {
        const bool branch_taken_0x2f26bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F26C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F26BCu;
            // 0x2f26c0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26bc) {
            ctx->pc = 0x2F26DCu;
            goto label_2f26dc;
        }
    }
    ctx->pc = 0x2F26C4u;
    // 0x2f26c4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F26C4u;
    {
        const bool branch_taken_0x2f26c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F26C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F26C4u;
            // 0x2f26c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26c4) {
            ctx->pc = 0x2F26DCu;
            goto label_2f26dc;
        }
    }
    ctx->pc = 0x2F26CCu;
    // 0x2f26cc: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F26CCu;
    SET_GPR_U32(ctx, 31, 0x2F26D4u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F26D4u; }
        if (ctx->pc != 0x2F26D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F26D4u; }
        if (ctx->pc != 0x2F26D4u) { return; }
    }
    ctx->pc = 0x2F26D4u;
label_2f26d4:
    // 0x2f26d4: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x2F26D4u;
    {
        const bool branch_taken_0x2f26d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F26D4u;
            // 0x2f26d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26d4) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F26DCu;
label_2f26dc:
    // 0x2f26dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f26dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f26e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f26e4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2F26E4u;
    SET_GPR_U32(ctx, 31, 0x2F26ECu);
    ctx->pc = 0x2F26E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F26E4u;
            // 0x2f26e8: 0x24a518c8  addiu       $a1, $a1, 0x18C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F26ECu; }
        if (ctx->pc != 0x2F26ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F26ECu; }
        if (ctx->pc != 0x2F26ECu) { return; }
    }
    ctx->pc = 0x2F26ECu;
label_2f26ec:
    // 0x2f26ec: 0x8e6404c8  lw          $a0, 0x4C8($s3)
    ctx->pc = 0x2f26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1224)));
    // 0x2f26f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f26f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f26f4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f26f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f26f8: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F26F8u;
    SET_GPR_U32(ctx, 31, 0x2F2700u);
    ctx->pc = 0x2F26FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F26F8u;
            // 0x2f26fc: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2700u; }
        if (ctx->pc != 0x2F2700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2700u; }
        if (ctx->pc != 0x2F2700u) { return; }
    }
    ctx->pc = 0x2F2700u;
label_2f2700:
    // 0x2f2700: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2700u;
    {
        const bool branch_taken_0x2f2700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2700u;
            // 0x2f2704: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2700) {
            ctx->pc = 0x2F2720u;
            goto label_2f2720;
        }
    }
    ctx->pc = 0x2F2708u;
    // 0x2f2708: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f270c: 0xaf829ee8  sw          $v0, -0x6118($gp)
    ctx->pc = 0x2f270cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942440), GPR_U32(ctx, 2));
    // 0x2f2710: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f2714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f2718: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2F2718u;
    {
        const bool branch_taken_0x2f2718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2718u;
            // 0x2f271c: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2718) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2720u;
label_2f2720:
    // 0x2f2720: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2F2720u;
    {
        const bool branch_taken_0x2f2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2720u;
            // 0x2f2724: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2720) {
            ctx->pc = 0x2F2B04u;
            goto label_2f2b04;
        }
    }
    ctx->pc = 0x2F2728u;
label_2f2728:
    // 0x2f2728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f272c: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f272cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f2730: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2730u;
    SET_GPR_U32(ctx, 31, 0x2F2738u);
    ctx->pc = 0x2F2734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2730u;
            // 0x2f2734: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2738u; }
        if (ctx->pc != 0x2F2738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2738u; }
        if (ctx->pc != 0x2F2738u) { return; }
    }
    ctx->pc = 0x2F2738u;
label_2f2738:
    // 0x2f2738: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x2F2738u;
    {
        const bool branch_taken_0x2f2738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2738) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2740u;
    // 0x2f2740: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x2f2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f2744: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F2744u;
    {
        const bool branch_taken_0x2f2744 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F2748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2744u;
            // 0x2f2748: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2744) {
            ctx->pc = 0x2F2780u;
            goto label_2f2780;
        }
    }
    ctx->pc = 0x2F274Cu;
    // 0x2f274c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F274Cu;
    {
        const bool branch_taken_0x2f274c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f274c) {
            ctx->pc = 0x2F2758u;
            goto label_2f2758;
        }
    }
    ctx->pc = 0x2F2754u;
    // 0x2f2754: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f2754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2f2758:
    // 0x2f2758: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2f2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f275c: 0x2841fff6  slti        $at, $v0, -0xA
    ctx->pc = 0x2f275cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x2f2760: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2760u;
    {
        const bool branch_taken_0x2f2760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2760) {
            ctx->pc = 0x2F276Cu;
            goto label_2f276c;
        }
    }
    ctx->pc = 0x2F2768u;
    // 0x2f2768: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f276c:
    // 0x2f276c: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f276cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f2770: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F2770u;
    SET_GPR_U32(ctx, 31, 0x2F2778u);
    ctx->pc = 0x2F2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2770u;
            // 0x2f2774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2778u; }
        if (ctx->pc != 0x2F2778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2778u; }
        if (ctx->pc != 0x2F2778u) { return; }
    }
    ctx->pc = 0x2F2778u;
label_2f2778:
    // 0x2f2778: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2F2778u;
    {
        const bool branch_taken_0x2f2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2778u;
            // 0x2f277c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2778) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2780u;
label_2f2780:
    // 0x2f2780: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x2f2780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x2f2784: 0xae600910  sw          $zero, 0x910($s3)
    ctx->pc = 0x2f2784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 0));
    // 0x2f2788: 0x8e6204c4  lw          $v0, 0x4C4($s3)
    ctx->pc = 0x2f2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1220)));
    // 0x2f278c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F278Cu;
    {
        const bool branch_taken_0x2f278c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F278Cu;
            // 0x2f2790: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f278c) {
            ctx->pc = 0x2F27D0u;
            goto label_2f27d0;
        }
    }
    ctx->pc = 0x2F2794u;
    // 0x2f2794: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F2794u;
    {
        const bool branch_taken_0x2f2794 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2794u;
            // 0x2f2798: 0x26450001  addiu       $a1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2794) {
            ctx->pc = 0x2F27D0u;
            goto label_2f27d0;
        }
    }
    ctx->pc = 0x2F279Cu;
    // 0x2f279c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2f279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2f27a0: 0xc08738c  jal         func_21CE30
    ctx->pc = 0x2F27A0u;
    SET_GPR_U32(ctx, 31, 0x2F27A8u);
    ctx->pc = 0x2F27A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27A0u;
            // 0x2f27a4: 0xa7a0010e  sh          $zero, 0x10E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 270), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE30u;
    if (runtime->hasFunction(0x21CE30u)) {
        auto targetFn = runtime->lookupFunction(0x21CE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27A8u; }
        if (ctx->pc != 0x2F27A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuBigNum__FPci_0x21ce30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27A8u; }
        if (ctx->pc != 0x2F27A8u) { return; }
    }
    ctx->pc = 0x2F27A8u;
label_2f27a8:
    // 0x2f27a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f27ac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2f27acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f27b0: 0xc0bc4e4  jal         func_2F1390
    ctx->pc = 0x2F27B0u;
    SET_GPR_U32(ctx, 31, 0x2F27B8u);
    ctx->pc = 0x2F27B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27B0u;
            // 0x2f27b4: 0x27a6010e  addiu       $a2, $sp, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 270));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1390u;
    if (runtime->hasFunction(0x2F1390u)) {
        auto targetFn = runtime->lookupFunction(0x2F1390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27B8u; }
        if (ctx->pc != 0x2F27B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMCBrowserName__FiPcPUs_0x2f1390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27B8u; }
        if (ctx->pc != 0x2F27B8u) { return; }
    }
    ctx->pc = 0x2F27B8u;
label_2f27b8:
    // 0x2f27b8: 0x26640a58  addiu       $a0, $s3, 0xA58
    ctx->pc = 0x2f27b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2648));
    // 0x2f27bc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2f27bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f27c0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F27C0u;
    SET_GPR_U32(ctx, 31, 0x2F27C8u);
    ctx->pc = 0x2F27C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27C0u;
            // 0x2f27c4: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27C8u; }
        if (ctx->pc != 0x2F27C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27C8u; }
        if (ctx->pc != 0x2F27C8u) { return; }
    }
    ctx->pc = 0x2F27C8u;
label_2f27c8:
    // 0x2f27c8: 0x97a2010e  lhu         $v0, 0x10E($sp)
    ctx->pc = 0x2f27c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 270)));
    // 0x2f27cc: 0xa662099e  sh          $v0, 0x99E($s3)
    ctx->pc = 0x2f27ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2462), (uint16_t)GPR_U32(ctx, 2));
label_2f27d0:
    // 0x2f27d0: 0xae60091c  sw          $zero, 0x91C($s3)
    ctx->pc = 0x2f27d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 0));
    // 0x2f27d4: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x2f27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x2f27d8: 0xae620918  sw          $v0, 0x918($s3)
    ctx->pc = 0x2f27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2328), GPR_U32(ctx, 2));
    // 0x2f27dc: 0x26620998  addiu       $v0, $s3, 0x998
    ctx->pc = 0x2f27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2456));
    // 0x2f27e0: 0xae6204e4  sw          $v0, 0x4E4($s3)
    ctx->pc = 0x2f27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1252), GPR_U32(ctx, 2));
    // 0x2f27e4: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2f27e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2f27e8: 0x8e660918  lw          $a2, 0x918($s3)
    ctx->pc = 0x2f27e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f27ec: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F27ECu;
    SET_GPR_U32(ctx, 31, 0x2F27F4u);
    ctx->pc = 0x2F27F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27ECu;
            // 0x2f27f0: 0x8e6504e4  lw          $a1, 0x4E4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27F4u; }
        if (ctx->pc != 0x2F27F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F27F4u; }
        if (ctx->pc != 0x2F27F4u) { return; }
    }
    ctx->pc = 0x2F27F4u;
label_2f27f4:
    // 0x2f27f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F27F4u;
    {
        const bool branch_taken_0x2f27f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F27F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F27F4u;
            // 0x2f27f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27f4) {
            ctx->pc = 0x2F280Cu;
            goto label_2f280c;
        }
    }
    ctx->pc = 0x2F27FCu;
    // 0x2f27fc: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f2800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f2804: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2F2804u;
    {
        const bool branch_taken_0x2f2804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2804u;
            // 0x2f2808: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2804) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F280Cu;
label_2f280c:
    // 0x2f280c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2F280Cu;
    {
        const bool branch_taken_0x2f280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f280c) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2814u;
label_2f2814:
    // 0x2f2814: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2818: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f2818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f281c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F281Cu;
    SET_GPR_U32(ctx, 31, 0x2F2824u);
    ctx->pc = 0x2F2820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F281Cu;
            // 0x2f2820: 0x2666091c  addiu       $a2, $s3, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2824u; }
        if (ctx->pc != 0x2F2824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2824u; }
        if (ctx->pc != 0x2F2824u) { return; }
    }
    ctx->pc = 0x2F2824u;
label_2f2824:
    // 0x2f2824: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2F2824u;
    {
        const bool branch_taken_0x2f2824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2824) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F282Cu;
    // 0x2f282c: 0x8e63091c  lw          $v1, 0x91C($s3)
    ctx->pc = 0x2f282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f2830: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2830u;
    {
        const bool branch_taken_0x2f2830 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F2834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2830u;
            // 0x2f2834: 0x2861fff6  slti        $at, $v1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2830) {
            ctx->pc = 0x2F2858u;
            goto label_2f2858;
        }
    }
    ctx->pc = 0x2F2838u;
    // 0x2f2838: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2838u;
    {
        const bool branch_taken_0x2f2838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2838) {
            ctx->pc = 0x2F2844u;
            goto label_2f2844;
        }
    }
    ctx->pc = 0x2F2840u;
    // 0x2f2840: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f2844:
    // 0x2f2844: 0x8e65091c  lw          $a1, 0x91C($s3)
    ctx->pc = 0x2f2844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f2848: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F2848u;
    SET_GPR_U32(ctx, 31, 0x2F2850u);
    ctx->pc = 0x2F284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2848u;
            // 0x2f284c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2850u; }
        if (ctx->pc != 0x2F2850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2850u; }
        if (ctx->pc != 0x2F2850u) { return; }
    }
    ctx->pc = 0x2F2850u;
label_2f2850:
    // 0x2f2850: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x2F2850u;
    {
        const bool branch_taken_0x2f2850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2850u;
            // 0x2f2854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2850) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2858u;
label_2f2858:
    // 0x2f2858: 0x8e620910  lw          $v0, 0x910($s3)
    ctx->pc = 0x2f2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f285c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2860: 0xae620910  sw          $v0, 0x910($s3)
    ctx->pc = 0x2f2860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 2));
    // 0x2f2864: 0x8e630914  lw          $v1, 0x914($s3)
    ctx->pc = 0x2f2864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2324)));
    // 0x2f2868: 0x8e62091c  lw          $v0, 0x91C($s3)
    ctx->pc = 0x2f2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x2f286c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2870: 0xae620914  sw          $v0, 0x914($s3)
    ctx->pc = 0x2f2870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2324), GPR_U32(ctx, 2));
    // 0x2f2874: 0x8e630910  lw          $v1, 0x910($s3)
    ctx->pc = 0x2f2874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2320)));
    // 0x2f2878: 0x8e640918  lw          $a0, 0x918($s3)
    ctx->pc = 0x2f2878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x2f287c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2f287cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f2880: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F2880u;
    {
        const bool branch_taken_0x2f2880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2880u;
            // 0x2f2884: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2880) {
            ctx->pc = 0x2F28B4u;
            goto label_2f28b4;
        }
    }
    ctx->pc = 0x2F2888u;
    // 0x2f2888: 0xae600910  sw          $zero, 0x910($s3)
    ctx->pc = 0x2f2888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 0));
    // 0x2f288c: 0xc048d8e  jal         func_123638
    ctx->pc = 0x2F288Cu;
    SET_GPR_U32(ctx, 31, 0x2F2894u);
    ctx->pc = 0x2F2890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F288Cu;
            // 0x2f2890: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123638u;
    if (runtime->hasFunction(0x123638u)) {
        auto targetFn = runtime->lookupFunction(0x123638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2894u; }
        if (ctx->pc != 0x2F2894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcFlush_0x123638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2894u; }
        if (ctx->pc != 0x2F2894u) { return; }
    }
    ctx->pc = 0x2F2894u;
label_2f2894:
    // 0x2f2894: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2894u;
    {
        const bool branch_taken_0x2f2894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2894u;
            // 0x2f2898: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2894) {
            ctx->pc = 0x2F28ACu;
            goto label_2f28ac;
        }
    }
    ctx->pc = 0x2F289Cu;
    // 0x2f289c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f28a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f28a4: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2F28A4u;
    {
        const bool branch_taken_0x2f28a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F28A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F28A4u;
            // 0x2f28a8: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28a4) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F28ACu;
label_2f28ac:
    // 0x2f28ac: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2F28ACu;
    {
        const bool branch_taken_0x2f28ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f28ac) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F28B4u;
label_2f28b4:
    // 0x2f28b4: 0x28410c01  slti        $at, $v0, 0xC01
    ctx->pc = 0x2f28b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3073) ? 1 : 0);
    // 0x2f28b8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F28B8u;
    {
        const bool branch_taken_0x2f28b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F28BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F28B8u;
            // 0x2f28bc: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28b8) {
            ctx->pc = 0x2F28C4u;
            goto label_2f28c4;
        }
    }
    ctx->pc = 0x2F28C0u;
    // 0x2f28c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f28c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f28c4:
    // 0x2f28c4: 0x8e6204e4  lw          $v0, 0x4E4($s3)
    ctx->pc = 0x2f28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1252)));
    // 0x2f28c8: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2f28c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2f28cc: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F28CCu;
    SET_GPR_U32(ctx, 31, 0x2F28D4u);
    ctx->pc = 0x2F28D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F28CCu;
            // 0x2f28d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F28D4u; }
        if (ctx->pc != 0x2F28D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F28D4u; }
        if (ctx->pc != 0x2F28D4u) { return; }
    }
    ctx->pc = 0x2F28D4u;
label_2f28d4:
    // 0x2f28d4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2F28D4u;
    {
        const bool branch_taken_0x2f28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f28d4) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F28DCu;
label_2f28dc:
    // 0x2f28dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f28e0: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f28e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f28e4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F28E4u;
    SET_GPR_U32(ctx, 31, 0x2F28ECu);
    ctx->pc = 0x2F28E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F28E4u;
            // 0x2f28e8: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F28ECu; }
        if (ctx->pc != 0x2F28ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F28ECu; }
        if (ctx->pc != 0x2F28ECu) { return; }
    }
    ctx->pc = 0x2F28ECu;
label_2f28ec:
    // 0x2f28ec: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2F28ECu;
    {
        const bool branch_taken_0x2f28ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f28ec) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F28F4u;
    // 0x2f28f4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2f28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f28f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f28fc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F28FCu;
    {
        const bool branch_taken_0x2f28fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F28FCu;
            // 0x2f2900: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28fc) {
            ctx->pc = 0x2F2910u;
            goto label_2f2910;
        }
    }
    ctx->pc = 0x2F2904u;
    // 0x2f2904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2908: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2F2908u;
    {
        const bool branch_taken_0x2f2908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2908u;
            // 0x2f290c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2908) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2910u;
label_2f2910:
    // 0x2f2910: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f2910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f2914: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2914u;
    {
        const bool branch_taken_0x2f2914 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F2918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2914u;
            // 0x2f2918: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2914) {
            ctx->pc = 0x2F292Cu;
            goto label_2f292c;
        }
    }
    ctx->pc = 0x2F291Cu;
    // 0x2f291c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F291Cu;
    SET_GPR_U32(ctx, 31, 0x2F2924u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2924u; }
        if (ctx->pc != 0x2F2924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2924u; }
        if (ctx->pc != 0x2F2924u) { return; }
    }
    ctx->pc = 0x2F2924u;
label_2f2924:
    // 0x2f2924: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2F2924u;
    {
        const bool branch_taken_0x2f2924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2924u;
            // 0x2f2928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2924) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F292Cu;
label_2f292c:
    // 0x2f292c: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F292Cu;
    SET_GPR_U32(ctx, 31, 0x2F2934u);
    ctx->pc = 0x2F2930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F292Cu;
            // 0x2f2930: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2934u; }
        if (ctx->pc != 0x2F2934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2934u; }
        if (ctx->pc != 0x2F2934u) { return; }
    }
    ctx->pc = 0x2F2934u;
label_2f2934:
    // 0x2f2934: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x2f2934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x2f2938: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2f2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f293c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F293Cu;
    {
        const bool branch_taken_0x2f293c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F293Cu;
            // 0x2f2940: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f293c) {
            ctx->pc = 0x2F2954u;
            goto label_2f2954;
        }
    }
    ctx->pc = 0x2F2944u;
    // 0x2f2944: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f2944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f2948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f294c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2F294Cu;
    {
        const bool branch_taken_0x2f294c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F294Cu;
            // 0x2f2950: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f294c) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2954u;
label_2f2954:
    // 0x2f2954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2958: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2F2958u;
    {
        const bool branch_taken_0x2f2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2958u;
            // 0x2f295c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2958) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2960u;
label_2f2960:
    // 0x2f2960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2964: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f2964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f2968: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2968u;
    SET_GPR_U32(ctx, 31, 0x2F2970u);
    ctx->pc = 0x2F296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2968u;
            // 0x2f296c: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2970u; }
        if (ctx->pc != 0x2F2970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2970u; }
        if (ctx->pc != 0x2F2970u) { return; }
    }
    ctx->pc = 0x2F2970u;
label_2f2970:
    // 0x2f2970: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2F2970u;
    {
        const bool branch_taken_0x2f2970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2970) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2978u;
    // 0x2f2978: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2f2978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f297c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f2980: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2980u;
    {
        const bool branch_taken_0x2f2980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2980u;
            // 0x2f2984: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2980) {
            ctx->pc = 0x2F2994u;
            goto label_2f2994;
        }
    }
    ctx->pc = 0x2F2988u;
    // 0x2f2988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f298c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2F298Cu;
    {
        const bool branch_taken_0x2f298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F298Cu;
            // 0x2f2990: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f298c) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2994u;
label_2f2994:
    // 0x2f2994: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f2994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f2998: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2998u;
    {
        const bool branch_taken_0x2f2998 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2998u;
            // 0x2f299c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2998) {
            ctx->pc = 0x2F29B0u;
            goto label_2f29b0;
        }
    }
    ctx->pc = 0x2F29A0u;
    // 0x2f29a0: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F29A0u;
    SET_GPR_U32(ctx, 31, 0x2F29A8u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29A8u; }
        if (ctx->pc != 0x2F29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29A8u; }
        if (ctx->pc != 0x2F29A8u) { return; }
    }
    ctx->pc = 0x2F29A8u;
label_2f29a8:
    // 0x2f29a8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2F29A8u;
    {
        const bool branch_taken_0x2f29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F29A8u;
            // 0x2f29ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29a8) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F29B0u;
label_2f29b0:
    // 0x2f29b0: 0x8f829ee8  lw          $v0, -0x6118($gp)
    ctx->pc = 0x2f29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942440)));
    // 0x2f29b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f29b8: 0xaf829ee8  sw          $v0, -0x6118($gp)
    ctx->pc = 0x2f29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942440), GPR_U32(ctx, 2));
    // 0x2f29bc: 0x8f829ee8  lw          $v0, -0x6118($gp)
    ctx->pc = 0x2f29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942440)));
    // 0x2f29c0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2f29c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f29c4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F29C4u;
    {
        const bool branch_taken_0x2f29c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F29C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F29C4u;
            // 0x2f29c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f29c4) {
            ctx->pc = 0x2F2A38u;
            goto label_2f2a38;
        }
    }
    ctx->pc = 0x2F29CCu;
    // 0x2f29cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f29ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f29d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f29d4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2F29D4u;
    SET_GPR_U32(ctx, 31, 0x2F29DCu);
    ctx->pc = 0x2F29D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F29D4u;
            // 0x2f29d8: 0x24a517b0  addiu       $a1, $a1, 0x17B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29DCu; }
        if (ctx->pc != 0x2F29DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29DCu; }
        if (ctx->pc != 0x2F29DCu) { return; }
    }
    ctx->pc = 0x2F29DCu;
label_2f29dc:
    // 0x2f29dc: 0x8f839ee8  lw          $v1, -0x6118($gp)
    ctx->pc = 0x2f29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942440)));
    // 0x2f29e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f29e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f29e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f29ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2f29f0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2f29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2f29f4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2F29F4u;
    SET_GPR_U32(ctx, 31, 0x2F29FCu);
    ctx->pc = 0x2F29F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F29F4u;
            // 0x2f29f8: 0x24450920  addiu       $a1, $v0, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29FCu; }
        if (ctx->pc != 0x2F29FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F29FCu; }
        if (ctx->pc != 0x2F29FCu) { return; }
    }
    ctx->pc = 0x2F29FCu;
label_2f29fc:
    // 0x2f29fc: 0x8e6404c8  lw          $a0, 0x4C8($s3)
    ctx->pc = 0x2f29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1224)));
    // 0x2f2a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2a04: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f2a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f2a08: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F2A08u;
    SET_GPR_U32(ctx, 31, 0x2F2A10u);
    ctx->pc = 0x2F2A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A08u;
            // 0x2f2a0c: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A10u; }
        if (ctx->pc != 0x2F2A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A10u; }
        if (ctx->pc != 0x2F2A10u) { return; }
    }
    ctx->pc = 0x2F2A10u;
label_2f2a10:
    // 0x2f2a10: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x2f2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x2f2a14: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2f2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f2a18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2A18u;
    {
        const bool branch_taken_0x2f2a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A18u;
            // 0x2f2a1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a18) {
            ctx->pc = 0x2F2A30u;
            goto label_2f2a30;
        }
    }
    ctx->pc = 0x2F2A20u;
    // 0x2f2a20: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f2a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f2a28: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F2A28u;
    {
        const bool branch_taken_0x2f2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A28u;
            // 0x2f2a2c: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a28) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2A30u;
label_2f2a30:
    // 0x2f2a30: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2F2A30u;
    {
        const bool branch_taken_0x2f2a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a30) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2A38u;
label_2f2a38:
    // 0x2f2a38: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F2A38u;
    {
        const bool branch_taken_0x2f2a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a38) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2A40u;
label_2f2a40:
    // 0x2f2a40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2a44: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2f2a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2f2a48: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2A48u;
    SET_GPR_U32(ctx, 31, 0x2F2A50u);
    ctx->pc = 0x2F2A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A48u;
            // 0x2f2a4c: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A50u; }
        if (ctx->pc != 0x2F2A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A50u; }
        if (ctx->pc != 0x2F2A50u) { return; }
    }
    ctx->pc = 0x2F2A50u;
label_2f2a50:
    // 0x2f2a50: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F2A50u;
    {
        const bool branch_taken_0x2f2a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a50) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2A58u;
    // 0x2f2a58: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2f2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f2a5c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2A5Cu;
    {
        const bool branch_taken_0x2f2a5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F2A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A5Cu;
            // 0x2f2a60: 0x2841fff6  slti        $at, $v0, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a5c) {
            ctx->pc = 0x2F2A84u;
            goto label_2f2a84;
        }
    }
    ctx->pc = 0x2F2A64u;
    // 0x2f2a64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2A64u;
    {
        const bool branch_taken_0x2f2a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2a64) {
            ctx->pc = 0x2F2A70u;
            goto label_2f2a70;
        }
    }
    ctx->pc = 0x2F2A6Cu;
    // 0x2f2a6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f2a70:
    // 0x2f2a70: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2f2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2f2a74: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F2A74u;
    SET_GPR_U32(ctx, 31, 0x2F2A7Cu);
    ctx->pc = 0x2F2A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A74u;
            // 0x2f2a78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A7Cu; }
        if (ctx->pc != 0x2F2A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2A7Cu; }
        if (ctx->pc != 0x2F2A7Cu) { return; }
    }
    ctx->pc = 0x2F2A7Cu;
label_2f2a7c:
    // 0x2f2a7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F2A7Cu;
    {
        const bool branch_taken_0x2f2a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2A7Cu;
            // 0x2f2a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a7c) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2A84u;
label_2f2a84:
    // 0x2f2a84: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x2f2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x2f2a88: 0xae600910  sw          $zero, 0x910($s3)
    ctx->pc = 0x2f2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2320), GPR_U32(ctx, 0));
    // 0x2f2a8c: 0x8f839ee8  lw          $v1, -0x6118($gp)
    ctx->pc = 0x2f2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942440)));
    // 0x2f2a90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f2a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2a98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2f2a9c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2f2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2f2aa0: 0x8c420944  lw          $v0, 0x944($v0)
    ctx->pc = 0x2f2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2372)));
    // 0x2f2aa4: 0xae620918  sw          $v0, 0x918($s3)
    ctx->pc = 0x2f2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2328), GPR_U32(ctx, 2));
    // 0x2f2aa8: 0x8f839ee8  lw          $v1, -0x6118($gp)
    ctx->pc = 0x2f2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942440)));
    // 0x2f2aac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f2ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2ab4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2f2ab8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2f2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2f2abc: 0x8c420940  lw          $v0, 0x940($v0)
    ctx->pc = 0x2f2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2368)));
    // 0x2f2ac0: 0xae6204e4  sw          $v0, 0x4E4($s3)
    ctx->pc = 0x2f2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1252), GPR_U32(ctx, 2));
    // 0x2f2ac4: 0x8e6504e4  lw          $a1, 0x4E4($s3)
    ctx->pc = 0x2f2ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1252)));
    // 0x2f2ac8: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x2f2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2f2acc: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F2ACCu;
    SET_GPR_U32(ctx, 31, 0x2F2AD4u);
    ctx->pc = 0x2F2AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2ACCu;
            // 0x2f2ad0: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2AD4u; }
        if (ctx->pc != 0x2F2AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2AD4u; }
        if (ctx->pc != 0x2F2AD4u) { return; }
    }
    ctx->pc = 0x2F2AD4u;
label_2f2ad4:
    // 0x2f2ad4: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x2f2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x2f2ad8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2f2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2f2adc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2ADCu;
    {
        const bool branch_taken_0x2f2adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2ADCu;
            // 0x2f2ae0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2adc) {
            ctx->pc = 0x2F2AF4u;
            goto label_2f2af4;
        }
    }
    ctx->pc = 0x2F2AE4u;
    // 0x2f2ae4: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x2f2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2f2ae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f2aec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2AECu;
    {
        const bool branch_taken_0x2f2aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2AECu;
            // 0x2f2af0: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2aec) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2AF4u;
label_2f2af4:
    // 0x2f2af4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2AF4u;
    {
        const bool branch_taken_0x2f2af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2af4) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2AFCu;
label_2f2afc:
    // 0x2f2afc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2b00:
    // 0x2f2b00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f2b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2b04:
    // 0x2f2b04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2b08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f2b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2b0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2b14: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2B14u;
            // 0x2f2b18: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F2B1Cu;
}
