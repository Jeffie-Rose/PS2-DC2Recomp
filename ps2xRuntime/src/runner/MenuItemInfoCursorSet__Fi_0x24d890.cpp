#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemInfoCursorSet__Fi
// Address: 0x24d890 - 0x24d9b8
void MenuItemInfoCursorSet__Fi_0x24d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemInfoCursorSet__Fi_0x24d890");
#endif

    switch (ctx->pc) {
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d908u: goto label_24d908;
        default: break;
    }

    ctx->pc = 0x24d890u;

    // 0x24d890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d894: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d89c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24d8a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24d8a4: 0xa020dab0  sb          $zero, -0x2550($at)
    ctx->pc = 0x24d8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957744), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d8a8: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x24d8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
    // 0x24d8ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8b0: 0x2610dab0  addiu       $s0, $s0, -0x2550
    ctx->pc = 0x24d8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957744));
    // 0x24d8b4: 0xa020dab1  sb          $zero, -0x254F($at)
    ctx->pc = 0x24d8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957745), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d8b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8bc: 0xa020dab2  sb          $zero, -0x254E($at)
    ctx->pc = 0x24d8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957746), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d8c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8c4: 0xa020dab3  sb          $zero, -0x254D($at)
    ctx->pc = 0x24d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957747), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d8c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8cc: 0xa020dab4  sb          $zero, -0x254C($at)
    ctx->pc = 0x24d8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957748), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d8d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8d4: 0xa020dab5  sb          $zero, -0x254B($at)
    ctx->pc = 0x24d8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957749), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d8d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8dc: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x24D8DCu;
    {
        const bool branch_taken_0x24d8dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D8DCu;
            // 0x24d8e0: 0xa020dab6  sb          $zero, -0x254A($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294957750), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8dc) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D8E4u;
    // 0x24d8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d8e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8ec: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x24d8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x24d8f0: 0xc087690  jal         func_21DA40
    ctx->pc = 0x24D8F0u;
    SET_GPR_U32(ctx, 31, 0x24D8F8u);
    ctx->pc = 0x24D8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D8F0u;
            // 0x24d8f4: 0x8c24ca54  lw          $a0, -0x35AC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D8F8u; }
        if (ctx->pc != 0x24D8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D8F8u; }
        if (ctx->pc != 0x24D8F8u) { return; }
    }
    ctx->pc = 0x24D8F8u;
label_24d8f8:
    // 0x24d8f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24d8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24d8fc: 0x8c24ca54  lw          $a0, -0x35AC($at)
    ctx->pc = 0x24d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x24d900: 0xc087694  jal         func_21DA50
    ctx->pc = 0x24D900u;
    SET_GPR_U32(ctx, 31, 0x24D908u);
    ctx->pc = 0x24D904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D900u;
            // 0x24d904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA50u;
    if (runtime->hasFunction(0x21DA50u)) {
        auto targetFn = runtime->lookupFunction(0x21DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D908u; }
        if (ctx->pc != 0x24D908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgItemNo__7CDC2MesFi_0x21da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D908u; }
        if (ctx->pc != 0x24D908u) { return; }
    }
    ctx->pc = 0x24D908u;
label_24d908:
    // 0x24d908: 0x2445ec78  addiu       $a1, $v0, -0x1388
    ctx->pc = 0x24d908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962296));
    // 0x24d90c: 0x20a3fff1  addi        $v1, $a1, -0xF
    ctx->pc = 0x24d90cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294967281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x24d910: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x24d910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x24d914: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x24D914u;
    {
        const bool branch_taken_0x24d914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D914u;
            // 0x24d918: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d914) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D91Cu;
    // 0x24d91c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d920: 0x2484bae0  addiu       $a0, $a0, -0x4520
    ctx->pc = 0x24d920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949600));
    // 0x24d924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24d924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d928: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d92c: 0x600008  jr          $v1
    ctx->pc = 0x24D92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D934u: goto label_24d934;
            case 0x24D97Cu: goto label_24d97c;
            case 0x24D98Cu: goto label_24d98c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24D934u;
label_24d934:
    // 0x24d934: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24d938: 0x278383d9  addiu       $v1, $gp, -0x7C27
    ctx->pc = 0x24d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935513));
    // 0x24d93c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x24d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24d940: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x24d940u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24d944: 0x84840110  lh          $a0, 0x110($a0)
    ctx->pc = 0x24d944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x24d948: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24D948u;
    {
        const bool branch_taken_0x24d948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D948u;
            // 0x24d94c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d948) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D950u;
    // 0x24d950: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x24d950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x24d954: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x24d954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24d958: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24D958u;
    {
        const bool branch_taken_0x24d958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d958) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D960u;
    // 0x24d960: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24d964: 0x24a3fff1  addiu       $v1, $a1, -0xF
    ctx->pc = 0x24d964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967281));
    // 0x24d968: 0x84840114  lh          $a0, 0x114($a0)
    ctx->pc = 0x24d968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x24d96c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24D96Cu;
    {
        const bool branch_taken_0x24d96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d96c) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D974u;
    // 0x24d974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24D974u;
    {
        const bool branch_taken_0x24d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D974u;
            // 0x24d978: 0xa2000006  sb          $zero, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d974) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D97Cu;
label_24d97c:
    // 0x24d97c: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x24d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x24d980: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D984u;
    {
        const bool branch_taken_0x24d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D984u;
            // 0x24d988: 0xa064fff1  sb          $a0, -0xF($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294967281), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d984) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D98Cu;
label_24d98c:
    // 0x24d98c: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24d990: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d994: 0x84840110  lh          $a0, 0x110($a0)
    ctx->pc = 0x24d994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x24d998: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D998u;
    {
        const bool branch_taken_0x24d998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D998u;
            // 0x24d99c: 0xb01821  addu        $v1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d998) {
            ctx->pc = 0x24D9A8u;
            goto label_24d9a8;
        }
    }
    ctx->pc = 0x24D9A0u;
    // 0x24d9a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d9a4: 0xa064ffef  sb          $a0, -0x11($v1)
    ctx->pc = 0x24d9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967279), (uint8_t)GPR_U32(ctx, 4));
label_24d9a8:
    // 0x24d9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24D9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D9B0u;
            // 0x24d9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24D9B8u;
}
