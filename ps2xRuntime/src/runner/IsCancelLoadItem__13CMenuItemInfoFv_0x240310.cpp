#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsCancelLoadItem__13CMenuItemInfoFv
// Address: 0x240310 - 0x240590
void IsCancelLoadItem__13CMenuItemInfoFv_0x240310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsCancelLoadItem__13CMenuItemInfoFv_0x240310");
#endif

    switch (ctx->pc) {
        case 0x240348u: goto label_240348;
        case 0x240358u: goto label_240358;
        case 0x24036cu: goto label_24036c;
        case 0x2403d4u: goto label_2403d4;
        case 0x2403e0u: goto label_2403e0;
        case 0x2403ecu: goto label_2403ec;
        case 0x2403f4u: goto label_2403f4;
        case 0x240400u: goto label_240400;
        case 0x240410u: goto label_240410;
        case 0x24041cu: goto label_24041c;
        case 0x240428u: goto label_240428;
        case 0x24043cu: goto label_24043c;
        case 0x24044cu: goto label_24044c;
        case 0x240458u: goto label_240458;
        case 0x240468u: goto label_240468;
        case 0x240484u: goto label_240484;
        case 0x240490u: goto label_240490;
        case 0x2404b4u: goto label_2404b4;
        case 0x2404c0u: goto label_2404c0;
        case 0x2404d8u: goto label_2404d8;
        case 0x2404e0u: goto label_2404e0;
        case 0x2404f0u: goto label_2404f0;
        case 0x240550u: goto label_240550;
        case 0x240560u: goto label_240560;
        default: break;
    }

    ctx->pc = 0x240310u;

    // 0x240310: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x240310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x240314: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x240314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x240318: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x240318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24031c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x240320: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x240320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x240324: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x240328: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x240328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24032c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x240330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x240334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240338: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x240338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24033c: 0x844400c2  lh          $a0, 0xC2($v0)
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x240340: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x240340u;
    SET_GPR_U32(ctx, 31, 0x240348u);
    ctx->pc = 0x240344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240340u;
            // 0x240344: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240348u; }
        if (ctx->pc != 0x240348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240348u; }
        if (ctx->pc != 0x240348u) { return; }
    }
    ctx->pc = 0x240348u;
label_240348:
    // 0x240348: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x240348u;
    {
        const bool branch_taken_0x240348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240348u;
            // 0x24034c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240348) {
            ctx->pc = 0x240374u;
            goto label_240374;
        }
    }
    ctx->pc = 0x240350u;
    // 0x240350: 0xc0901a4  jal         func_240690
    ctx->pc = 0x240350u;
    SET_GPR_U32(ctx, 31, 0x240358u);
    ctx->pc = 0x240354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240350u;
            // 0x240354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240690u;
    if (runtime->hasFunction(0x240690u)) {
        auto targetFn = runtime->lookupFunction(0x240690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240358u; }
        if (ctx->pc != 0x240358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnActiveCharaViewMode__13CMenuItemInfoFi_0x240690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240358u; }
        if (ctx->pc != 0x240358u) { return; }
    }
    ctx->pc = 0x240358u;
label_240358:
    // 0x240358: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240358u;
    {
        const bool branch_taken_0x240358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240358u;
            // 0x24035c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240358) {
            ctx->pc = 0x240364u;
            goto label_240364;
        }
    }
    ctx->pc = 0x240360u;
    // 0x240360: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x240360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_240364:
    // 0x240364: 0xc094274  jal         func_2509D0
    ctx->pc = 0x240364u;
    SET_GPR_U32(ctx, 31, 0x24036Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24036Cu; }
        if (ctx->pc != 0x24036Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24036Cu; }
        if (ctx->pc != 0x24036Cu) { return; }
    }
    ctx->pc = 0x24036Cu;
label_24036c:
    // 0x24036c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x24036Cu;
    {
        const bool branch_taken_0x24036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24036Cu;
            // 0x240370: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24036c) {
            ctx->pc = 0x240568u;
            goto label_240568;
        }
    }
    ctx->pc = 0x240374u;
label_240374:
    // 0x240374: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x240374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24037c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24037cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240380: 0x2465012c  addiu       $a1, $v1, 0x12C
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x240384: 0x8463012e  lh          $v1, 0x12E($v1)
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 302)));
    // 0x240388: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240388u;
    {
        const bool branch_taken_0x240388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240388u;
            // 0x24038c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240388) {
            ctx->pc = 0x24039Cu;
            goto label_24039c;
        }
    }
    ctx->pc = 0x240390u;
    // 0x240390: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240394: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240394u;
    {
        const bool branch_taken_0x240394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240394) {
            ctx->pc = 0x2403A0u;
            goto label_2403a0;
        }
    }
    ctx->pc = 0x24039Cu;
label_24039c:
    // 0x24039c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24039cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2403a0:
    // 0x2403a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2403a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2403a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2403A4u;
    {
        const bool branch_taken_0x2403a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2403A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2403A4u;
            // 0x2403a8: 0x84b20004  lh          $s2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403a4) {
            ctx->pc = 0x2403B0u;
            goto label_2403b0;
        }
    }
    ctx->pc = 0x2403ACu;
    // 0x2403ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2403acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2403b0:
    // 0x2403b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2403b4: 0xa7a0018c  sh          $zero, 0x18C($sp)
    ctx->pc = 0x2403b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 396), (uint16_t)GPR_U32(ctx, 0));
    // 0x2403b8: 0xa7a2018a  sh          $v0, 0x18A($sp)
    ctx->pc = 0x2403b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 394), (uint16_t)GPR_U32(ctx, 2));
    // 0x2403bc: 0x27b6018e  addiu       $s6, $sp, 0x18E
    ctx->pc = 0x2403bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 398));
    // 0x2403c0: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x2403c0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2403c4: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x2403c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2403c8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2403c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2403cc: 0xc049c18  jal         func_127060
    ctx->pc = 0x2403CCu;
    SET_GPR_U32(ctx, 31, 0x2403D4u);
    ctx->pc = 0x2403D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2403CCu;
            // 0x2403d0: 0xa7a00188  sh          $zero, 0x188($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 392), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403D4u; }
        if (ctx->pc != 0x2403D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403D4u; }
        if (ctx->pc != 0x2403D4u) { return; }
    }
    ctx->pc = 0x2403D4u;
label_2403d4:
    // 0x2403d4: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x2403d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2403d8: 0xc08f9e4  jal         func_23E790
    ctx->pc = 0x2403D8u;
    SET_GPR_U32(ctx, 31, 0x2403E0u);
    ctx->pc = 0x2403DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2403D8u;
            // 0x2403dc: 0xa7a00188  sh          $zero, 0x188($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 392), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E790u;
    if (runtime->hasFunction(0x23E790u)) {
        auto targetFn = runtime->lookupFunction(0x23E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403E0u; }
        if (ctx->pc != 0x2403E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403E0u; }
        if (ctx->pc != 0x2403E0u) { return; }
    }
    ctx->pc = 0x2403E0u;
label_2403e0:
    // 0x2403e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2403e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2403e4: 0xc065c24  jal         func_197090
    ctx->pc = 0x2403E4u;
    SET_GPR_U32(ctx, 31, 0x2403ECu);
    ctx->pc = 0x2403E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2403E4u;
            // 0x2403e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403ECu; }
        if (ctx->pc != 0x2403ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403ECu; }
        if (ctx->pc != 0x2403ECu) { return; }
    }
    ctx->pc = 0x2403ECu;
label_2403ec:
    // 0x2403ec: 0xc065c24  jal         func_197090
    ctx->pc = 0x2403ECu;
    SET_GPR_U32(ctx, 31, 0x2403F4u);
    ctx->pc = 0x2403F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2403ECu;
            // 0x2403f0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403F4u; }
        if (ctx->pc != 0x2403F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403F4u; }
        if (ctx->pc != 0x2403F4u) { return; }
    }
    ctx->pc = 0x2403F4u;
label_2403f4:
    // 0x2403f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2403f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2403f8: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x2403F8u;
    SET_GPR_U32(ctx, 31, 0x240400u);
    ctx->pc = 0x2403FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2403F8u;
            // 0x2403fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240400u; }
        if (ctx->pc != 0x240400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240400u; }
        if (ctx->pc != 0x240400u) { return; }
    }
    ctx->pc = 0x240400u;
label_240400:
    // 0x240400: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x240400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240404: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x240404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x240408: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x240408u;
    SET_GPR_U32(ctx, 31, 0x240410u);
    ctx->pc = 0x24040Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240408u;
            // 0x24040c: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240410u; }
        if (ctx->pc != 0x240410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240410u; }
        if (ctx->pc != 0x240410u) { return; }
    }
    ctx->pc = 0x240410u;
label_240410:
    // 0x240410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x240410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240414: 0xc09018c  jal         func_240630
    ctx->pc = 0x240414u;
    SET_GPR_U32(ctx, 31, 0x24041Cu);
    ctx->pc = 0x240418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240414u;
            // 0x240418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (runtime->hasFunction(0x240630u)) {
        auto targetFn = runtime->lookupFunction(0x240630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24041Cu; }
        if (ctx->pc != 0x24041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckViewWeaponStatus__13CMenuItemInfoFi_0x240630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24041Cu; }
        if (ctx->pc != 0x24041Cu) { return; }
    }
    ctx->pc = 0x24041Cu;
label_24041c:
    // 0x24041c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240420: 0xc08fa24  jal         func_23E890
    ctx->pc = 0x240420u;
    SET_GPR_U32(ctx, 31, 0x240428u);
    ctx->pc = 0x240424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240420u;
            // 0x240424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E890u;
    if (runtime->hasFunction(0x23E890u)) {
        auto targetFn = runtime->lookupFunction(0x23E890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240428u; }
        if (ctx->pc != 0x240428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnItemMenu__12CMenuKeyFuncFi_0x23e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240428u; }
        if (ctx->pc != 0x240428u) { return; }
    }
    ctx->pc = 0x240428u;
label_240428:
    // 0x240428: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x240428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24042c: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x24042Cu;
    {
        const bool branch_taken_0x24042c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24042Cu;
            // 0x240430: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24042c) {
            ctx->pc = 0x240564u;
            goto label_240564;
        }
    }
    ctx->pc = 0x240434u;
    // 0x240434: 0xc0930f4  jal         func_24C3D0
    ctx->pc = 0x240434u;
    SET_GPR_U32(ctx, 31, 0x24043Cu);
    ctx->pc = 0x24C3D0u;
    if (runtime->hasFunction(0x24C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x24C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24043Cu; }
        if (ctx->pc != 0x24043Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadItemNo__13CMenuItemInfoFv_0x24c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24043Cu; }
        if (ctx->pc != 0x24043Cu) { return; }
    }
    ctx->pc = 0x24043Cu;
label_24043c:
    // 0x24043c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240444: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x240444u;
    SET_GPR_U32(ctx, 31, 0x24044Cu);
    ctx->pc = 0x240448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240444u;
            // 0x240448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24044Cu; }
        if (ctx->pc != 0x24044Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24044Cu; }
        if (ctx->pc != 0x24044Cu) { return; }
    }
    ctx->pc = 0x24044Cu;
label_24044c:
    // 0x24044c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240450: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x240450u;
    SET_GPR_U32(ctx, 31, 0x240458u);
    ctx->pc = 0x240454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240450u;
            // 0x240454: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240458u; }
        if (ctx->pc != 0x240458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240458u; }
        if (ctx->pc != 0x240458u) { return; }
    }
    ctx->pc = 0x240458u;
label_240458:
    // 0x240458: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x240458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24045c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x24045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x240460: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x240460u;
    SET_GPR_U32(ctx, 31, 0x240468u);
    ctx->pc = 0x240464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240460u;
            // 0x240464: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240468u; }
        if (ctx->pc != 0x240468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240468u; }
        if (ctx->pc != 0x240468u) { return; }
    }
    ctx->pc = 0x240468u;
label_240468:
    // 0x240468: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x240468u;
    {
        const bool branch_taken_0x240468 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x24046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240468u;
            // 0x24046c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240468) {
            ctx->pc = 0x2404E8u;
            goto label_2404e8;
        }
    }
    ctx->pc = 0x240470u;
    // 0x240470: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x240470u;
    {
        const bool branch_taken_0x240470 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x240474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240470u;
            // 0x240474: 0xa3809b72  sb          $zero, -0x648E($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240470) {
            ctx->pc = 0x2404A0u;
            goto label_2404a0;
        }
    }
    ctx->pc = 0x240478u;
    // 0x240478: 0x86850114  lh          $a1, 0x114($s4)
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x24047c: 0xc090320  jal         func_240C80
    ctx->pc = 0x24047Cu;
    SET_GPR_U32(ctx, 31, 0x240484u);
    ctx->pc = 0x240480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24047Cu;
            // 0x240480: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240484u; }
        if (ctx->pc != 0x240484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240484u; }
        if (ctx->pc != 0x240484u) { return; }
    }
    ctx->pc = 0x240484u;
label_240484:
    // 0x240484: 0x86840114  lh          $a0, 0x114($s4)
    ctx->pc = 0x240484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x240488: 0xc0abf4c  jal         func_2AFD30
    ctx->pc = 0x240488u;
    SET_GPR_U32(ctx, 31, 0x240490u);
    ctx->pc = 0x24048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240488u;
            // 0x24048c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240490u; }
        if (ctx->pc != 0x240490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240490u; }
        if (ctx->pc != 0x240490u) { return; }
    }
    ctx->pc = 0x240490u;
label_240490:
    // 0x240490: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x240490u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
    // 0x240494: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x240494u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
    // 0x240498: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x240498u;
    {
        const bool branch_taken_0x240498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240498u;
            // 0x24049c: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240498) {
            ctx->pc = 0x2404C4u;
            goto label_2404c4;
        }
    }
    ctx->pc = 0x2404A0u;
label_2404a0:
    // 0x2404a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2404a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2404a4: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2404A4u;
    {
        const bool branch_taken_0x2404a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2404A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2404A4u;
            // 0x2404a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404a4) {
            ctx->pc = 0x2404C4u;
            goto label_2404c4;
        }
    }
    ctx->pc = 0x2404ACu;
    // 0x2404ac: 0xc090320  jal         func_240C80
    ctx->pc = 0x2404ACu;
    SET_GPR_U32(ctx, 31, 0x2404B4u);
    ctx->pc = 0x2404B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404ACu;
            // 0x2404b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404B4u; }
        if (ctx->pc != 0x2404B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404B4u; }
        if (ctx->pc != 0x2404B4u) { return; }
    }
    ctx->pc = 0x2404B4u;
label_2404b4:
    // 0x2404b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2404b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404b8: 0xc0abf4c  jal         func_2AFD30
    ctx->pc = 0x2404B8u;
    SET_GPR_U32(ctx, 31, 0x2404C0u);
    ctx->pc = 0x2404BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404B8u;
            // 0x2404bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404C0u; }
        if (ctx->pc != 0x2404C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404C0u; }
        if (ctx->pc != 0x2404C0u) { return; }
    }
    ctx->pc = 0x2404C0u;
label_2404c0:
    // 0x2404c0: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2404c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_2404c4:
    // 0x2404c4: 0x86850110  lh          $a1, 0x110($s4)
    ctx->pc = 0x2404c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x2404c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2404c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2404ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404d0: 0xc093114  jal         func_24C450
    ctx->pc = 0x2404D0u;
    SET_GPR_U32(ctx, 31, 0x2404D8u);
    ctx->pc = 0x2404D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404D0u;
            // 0x2404d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404D8u; }
        if (ctx->pc != 0x2404D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404D8u; }
        if (ctx->pc != 0x2404D8u) { return; }
    }
    ctx->pc = 0x2404D8u;
label_2404d8:
    // 0x2404d8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2404D8u;
    SET_GPR_U32(ctx, 31, 0x2404E0u);
    ctx->pc = 0x2404DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2404D8u;
            // 0x2404dc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404E0u; }
        if (ctx->pc != 0x2404E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404E0u; }
        if (ctx->pc != 0x2404E0u) { return; }
    }
    ctx->pc = 0x2404E0u;
label_2404e0:
    // 0x2404e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2404E0u;
    {
        const bool branch_taken_0x2404e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2404E0u;
            // 0x2404e4: 0x86840110  lh          $a0, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404e0) {
            ctx->pc = 0x2404F4u;
            goto label_2404f4;
        }
    }
    ctx->pc = 0x2404E8u;
label_2404e8:
    // 0x2404e8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2404E8u;
    SET_GPR_U32(ctx, 31, 0x2404F0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404F0u; }
        if (ctx->pc != 0x2404F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404F0u; }
        if (ctx->pc != 0x2404F0u) { return; }
    }
    ctx->pc = 0x2404F0u;
label_2404f0:
    // 0x2404f0: 0x86840110  lh          $a0, 0x110($s4)
    ctx->pc = 0x2404f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_2404f4:
    // 0x2404f4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2404F4u;
    {
        const bool branch_taken_0x2404f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2404F4u;
            // 0x2404f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404f4) {
            ctx->pc = 0x240508u;
            goto label_240508;
        }
    }
    ctx->pc = 0x2404FCu;
    // 0x2404fc: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x2404fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x240500: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x240500u;
    {
        const bool branch_taken_0x240500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240500) {
            ctx->pc = 0x24053Cu;
            goto label_24053c;
        }
    }
    ctx->pc = 0x240508u;
label_240508:
    // 0x240508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24050c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24050Cu;
    {
        const bool branch_taken_0x24050c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x240510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24050Cu;
            // 0x240510: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24050c) {
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x240514u;
    // 0x240514: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x240514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x240518: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x240518u;
    {
        const bool branch_taken_0x240518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x240518) {
            ctx->pc = 0x24053Cu;
            goto label_24053c;
        }
    }
    ctx->pc = 0x240520u;
    // 0x240520: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x240520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_240524:
    // 0x240524: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240524u;
    {
        const bool branch_taken_0x240524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x240528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240524u;
            // 0x240528: 0x27a40188  addiu       $a0, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240524) {
            ctx->pc = 0x240544u;
            goto label_240544;
        }
    }
    ctx->pc = 0x24052Cu;
    // 0x24052c: 0x86830118  lh          $v1, 0x118($s4)
    ctx->pc = 0x24052cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x240530: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x240530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x240534: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240534u;
    {
        const bool branch_taken_0x240534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240534) {
            ctx->pc = 0x240540u;
            goto label_240540;
        }
    }
    ctx->pc = 0x24053Cu;
label_24053c:
    // 0x24053c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24053cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240540:
    // 0x240540: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x240540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_240544:
    // 0x240544: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x240544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x240548: 0xc08ec14  jal         func_23B050
    ctx->pc = 0x240548u;
    SET_GPR_U32(ctx, 31, 0x240550u);
    ctx->pc = 0x24054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240548u;
            // 0x24054c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B050u;
    if (runtime->hasFunction(0x23B050u)) {
        auto targetFn = runtime->lookupFunction(0x23B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240550u; }
        if (ctx->pc != 0x240550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExchangeItemInfoMake__FP18MENU_SWAPITEM_INFOPA4_iii_0x23b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240550u; }
        if (ctx->pc != 0x240550u) { return; }
    }
    ctx->pc = 0x240550u;
label_240550:
    // 0x240550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240550u;
    {
        const bool branch_taken_0x240550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240550u;
            // 0x240554: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240550) {
            ctx->pc = 0x240564u;
            goto label_240564;
        }
    }
    ctx->pc = 0x240558u;
    // 0x240558: 0xc090adc  jal         func_242B70
    ctx->pc = 0x240558u;
    SET_GPR_U32(ctx, 31, 0x240560u);
    ctx->pc = 0x24055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240558u;
            // 0x24055c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240560u; }
        if (ctx->pc != 0x240560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240560u; }
        if (ctx->pc != 0x240560u) { return; }
    }
    ctx->pc = 0x240560u;
label_240560:
    // 0x240560: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x240560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_240564:
    // 0x240564: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240568:
    // 0x240568: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x240568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24056c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24056cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x240570: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x240570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240574: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x240574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x240578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24057c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24057cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240588: 0x3e00008  jr          $ra
    ctx->pc = 0x240588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240588u;
            // 0x24058c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240590u;
}
