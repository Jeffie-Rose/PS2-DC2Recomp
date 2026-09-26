#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShadowStep__11CCharacter2Fv
// Address: 0x174910 - 0x174a3c
void ShadowStep__11CCharacter2Fv_0x174910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShadowStep__11CCharacter2Fv_0x174910");
#endif

    switch (ctx->pc) {
        case 0x174910u: goto label_174910;
        case 0x174914u: goto label_174914;
        case 0x174918u: goto label_174918;
        case 0x17491cu: goto label_17491c;
        case 0x174920u: goto label_174920;
        case 0x174924u: goto label_174924;
        case 0x174928u: goto label_174928;
        case 0x17492cu: goto label_17492c;
        case 0x174930u: goto label_174930;
        case 0x174934u: goto label_174934;
        case 0x174938u: goto label_174938;
        case 0x17493cu: goto label_17493c;
        case 0x174940u: goto label_174940;
        case 0x174944u: goto label_174944;
        case 0x174948u: goto label_174948;
        case 0x17494cu: goto label_17494c;
        case 0x174950u: goto label_174950;
        case 0x174954u: goto label_174954;
        case 0x174958u: goto label_174958;
        case 0x17495cu: goto label_17495c;
        case 0x174960u: goto label_174960;
        case 0x174964u: goto label_174964;
        case 0x174968u: goto label_174968;
        case 0x17496cu: goto label_17496c;
        case 0x174970u: goto label_174970;
        case 0x174974u: goto label_174974;
        case 0x174978u: goto label_174978;
        case 0x17497cu: goto label_17497c;
        case 0x174980u: goto label_174980;
        case 0x174984u: goto label_174984;
        case 0x174988u: goto label_174988;
        case 0x17498cu: goto label_17498c;
        case 0x174990u: goto label_174990;
        case 0x174994u: goto label_174994;
        case 0x174998u: goto label_174998;
        case 0x17499cu: goto label_17499c;
        case 0x1749a0u: goto label_1749a0;
        case 0x1749a4u: goto label_1749a4;
        case 0x1749a8u: goto label_1749a8;
        case 0x1749acu: goto label_1749ac;
        case 0x1749b0u: goto label_1749b0;
        case 0x1749b4u: goto label_1749b4;
        case 0x1749b8u: goto label_1749b8;
        case 0x1749bcu: goto label_1749bc;
        case 0x1749c0u: goto label_1749c0;
        case 0x1749c4u: goto label_1749c4;
        case 0x1749c8u: goto label_1749c8;
        case 0x1749ccu: goto label_1749cc;
        case 0x1749d0u: goto label_1749d0;
        case 0x1749d4u: goto label_1749d4;
        case 0x1749d8u: goto label_1749d8;
        case 0x1749dcu: goto label_1749dc;
        case 0x1749e0u: goto label_1749e0;
        case 0x1749e4u: goto label_1749e4;
        case 0x1749e8u: goto label_1749e8;
        case 0x1749ecu: goto label_1749ec;
        case 0x1749f0u: goto label_1749f0;
        case 0x1749f4u: goto label_1749f4;
        case 0x1749f8u: goto label_1749f8;
        case 0x1749fcu: goto label_1749fc;
        case 0x174a00u: goto label_174a00;
        case 0x174a04u: goto label_174a04;
        case 0x174a08u: goto label_174a08;
        case 0x174a0cu: goto label_174a0c;
        case 0x174a10u: goto label_174a10;
        case 0x174a14u: goto label_174a14;
        case 0x174a18u: goto label_174a18;
        case 0x174a1cu: goto label_174a1c;
        case 0x174a20u: goto label_174a20;
        case 0x174a24u: goto label_174a24;
        case 0x174a28u: goto label_174a28;
        case 0x174a2cu: goto label_174a2c;
        case 0x174a30u: goto label_174a30;
        case 0x174a34u: goto label_174a34;
        case 0x174a38u: goto label_174a38;
        default: break;
    }

    ctx->pc = 0x174910u;

label_174910:
    // 0x174910: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x174910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_174914:
    // 0x174914: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x174914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_174918:
    // 0x174918: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17491c:
    // 0x17491c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_174920:
    // 0x174920: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_174924:
    // 0x174924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_174928:
    // 0x174928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17492c:
    // 0x17492c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17492cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174930:
    // 0x174930: 0x8c8302c0  lw          $v1, 0x2C0($a0)
    ctx->pc = 0x174930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
label_174934:
    // 0x174934: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_174938:
    if (ctx->pc == 0x174938u) {
        ctx->pc = 0x174938u;
            // 0x174938: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17493Cu;
        goto label_17493c;
    }
    ctx->pc = 0x174934u;
    {
        const bool branch_taken_0x174934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174934u;
            // 0x174938: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174934) {
            ctx->pc = 0x174A18u;
            goto label_174a18;
        }
    }
    ctx->pc = 0x17493Cu;
label_17493c:
    // 0x17493c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17493cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174940:
    // 0x174940: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x174940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_174944:
    // 0x174944: 0x320f809  jalr        $t9
label_174948:
    if (ctx->pc == 0x174948u) {
        ctx->pc = 0x17494Cu;
        goto label_17494c;
    }
    ctx->pc = 0x174944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17494Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17494Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17494Cu; }
            if (ctx->pc != 0x17494Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17494Cu;
label_17494c:
    // 0x17494c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_174950:
    if (ctx->pc == 0x174950u) {
        ctx->pc = 0x174954u;
        goto label_174954;
    }
    ctx->pc = 0x17494Cu;
    {
        const bool branch_taken_0x17494c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17494c) {
            ctx->pc = 0x174A18u;
            goto label_174a18;
        }
    }
    ctx->pc = 0x174954u;
label_174954:
    // 0x174954: 0x8e830358  lw          $v1, 0x358($s4)
    ctx->pc = 0x174954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 856)));
label_174958:
    // 0x174958: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_17495c:
    if (ctx->pc == 0x17495Cu) {
        ctx->pc = 0x174960u;
        goto label_174960;
    }
    ctx->pc = 0x174958u;
    {
        const bool branch_taken_0x174958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174958) {
            ctx->pc = 0x174A18u;
            goto label_174a18;
        }
    }
    ctx->pc = 0x174960u;
label_174960:
    // 0x174960: 0x8e830374  lw          $v1, 0x374($s4)
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
label_174964:
    // 0x174964: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_174968:
    if (ctx->pc == 0x174968u) {
        ctx->pc = 0x17496Cu;
        goto label_17496c;
    }
    ctx->pc = 0x174964u;
    {
        const bool branch_taken_0x174964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174964) {
            ctx->pc = 0x174A18u;
            goto label_174a18;
        }
    }
    ctx->pc = 0x17496Cu;
label_17496c:
    // 0x17496c: 0x8e920070  lw          $s2, 0x70($s4)
    ctx->pc = 0x17496cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_174970:
    // 0x174970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174974:
    // 0x174974: 0x10000024  b           . + 4 + (0x24 << 2)
label_174978:
    if (ctx->pc == 0x174978u) {
        ctx->pc = 0x174978u;
            // 0x174978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17497Cu;
        goto label_17497c;
    }
    ctx->pc = 0x174974u;
    {
        const bool branch_taken_0x174974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174974u;
            // 0x174978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174974) {
            ctx->pc = 0x174A08u;
            goto label_174a08;
        }
    }
    ctx->pc = 0x17497Cu;
label_17497c:
    // 0x17497c: 0x8e820360  lw          $v0, 0x360($s4)
    ctx->pc = 0x17497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
label_174980:
    // 0x174980: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_174984:
    // 0x174984: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x174984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174988:
    // 0x174988: 0xc04d9ec  jal         func_1367B0
label_17498c:
    if (ctx->pc == 0x17498Cu) {
        ctx->pc = 0x17498Cu;
            // 0x17498c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174990u;
        goto label_174990;
    }
    ctx->pc = 0x174988u;
    SET_GPR_U32(ctx, 31, 0x174990u);
    ctx->pc = 0x17498Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174988u;
            // 0x17498c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174990u; }
        if (ctx->pc != 0x174990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174990u; }
        if (ctx->pc != 0x174990u) { return; }
    }
    ctx->pc = 0x174990u;
label_174990:
    // 0x174990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x174990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174994:
    // 0x174994: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_174998:
    if (ctx->pc == 0x174998u) {
        ctx->pc = 0x17499Cu;
        goto label_17499c;
    }
    ctx->pc = 0x174994u;
    {
        const bool branch_taken_0x174994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x174994) {
            ctx->pc = 0x1749FCu;
            goto label_1749fc;
        }
    }
    ctx->pc = 0x17499Cu;
label_17499c:
    // 0x17499c: 0x8e820364  lw          $v0, 0x364($s4)
    ctx->pc = 0x17499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 868)));
label_1749a0:
    // 0x1749a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1749a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1749a4:
    // 0x1749a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1749a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1749a8:
    // 0x1749a8: 0xc04d9ec  jal         func_1367B0
label_1749ac:
    if (ctx->pc == 0x1749ACu) {
        ctx->pc = 0x1749ACu;
            // 0x1749ac: 0x8e8402c0  lw          $a0, 0x2C0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
        ctx->pc = 0x1749B0u;
        goto label_1749b0;
    }
    ctx->pc = 0x1749A8u;
    SET_GPR_U32(ctx, 31, 0x1749B0u);
    ctx->pc = 0x1749ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749A8u;
            // 0x1749ac: 0x8e8402c0  lw          $a0, 0x2C0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749B0u; }
        if (ctx->pc != 0x1749B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749B0u; }
        if (ctx->pc != 0x1749B0u) { return; }
    }
    ctx->pc = 0x1749B0u;
label_1749b0:
    // 0x1749b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1749b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1749b4:
    // 0x1749b4: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_1749b8:
    if (ctx->pc == 0x1749B8u) {
        ctx->pc = 0x1749BCu;
        goto label_1749bc;
    }
    ctx->pc = 0x1749B4u;
    {
        const bool branch_taken_0x1749b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749b4) {
            ctx->pc = 0x1749FCu;
            goto label_1749fc;
        }
    }
    ctx->pc = 0x1749BCu;
label_1749bc:
    // 0x1749bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1749bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1749c0:
    // 0x1749c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1749c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1749c4:
    // 0x1749c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1749c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1749c8:
    // 0x1749c8: 0x320f809  jalr        $t9
label_1749cc:
    if (ctx->pc == 0x1749CCu) {
        ctx->pc = 0x1749CCu;
            // 0x1749cc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1749D0u;
        goto label_1749d0;
    }
    ctx->pc = 0x1749C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1749D0u);
        ctx->pc = 0x1749CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749C8u;
            // 0x1749cc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1749D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1749D0u; }
            if (ctx->pc != 0x1749D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1749D0u;
label_1749d0:
    // 0x1749d0: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x1749d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1749d4:
    // 0x1749d4: 0xc041c60  jal         func_107180
label_1749d8:
    if (ctx->pc == 0x1749D8u) {
        ctx->pc = 0x1749D8u;
            // 0x1749d8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1749DCu;
        goto label_1749dc;
    }
    ctx->pc = 0x1749D4u;
    SET_GPR_U32(ctx, 31, 0x1749DCu);
    ctx->pc = 0x1749D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749D4u;
            // 0x1749d8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749DCu; }
        if (ctx->pc != 0x1749DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749DCu; }
        if (ctx->pc != 0x1749DCu) { return; }
    }
    ctx->pc = 0x1749DCu;
label_1749dc:
    // 0x1749dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1749dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1749e0:
    // 0x1749e0: 0xc04dd64  jal         func_137590
label_1749e4:
    if (ctx->pc == 0x1749E4u) {
        ctx->pc = 0x1749E4u;
            // 0x1749e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1749E8u;
        goto label_1749e8;
    }
    ctx->pc = 0x1749E0u;
    SET_GPR_U32(ctx, 31, 0x1749E8u);
    ctx->pc = 0x1749E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1749E0u;
            // 0x1749e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749E8u; }
        if (ctx->pc != 0x1749E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749E8u; }
        if (ctx->pc != 0x1749E8u) { return; }
    }
    ctx->pc = 0x1749E8u;
label_1749e8:
    // 0x1749e8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1749e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1749ec:
    // 0x1749ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1749ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1749f0:
    // 0x1749f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1749f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1749f4:
    // 0x1749f4: 0x320f809  jalr        $t9
label_1749f8:
    if (ctx->pc == 0x1749F8u) {
        ctx->pc = 0x1749F8u;
            // 0x1749f8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1749FCu;
        goto label_1749fc;
    }
    ctx->pc = 0x1749F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1749FCu);
        ctx->pc = 0x1749F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1749F4u;
            // 0x1749f8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1749FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1749FCu; }
            if (ctx->pc != 0x1749FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1749FCu;
label_1749fc:
    // 0x1749fc: 0x0  nop
    ctx->pc = 0x1749fcu;
    // NOP
label_174a00:
    // 0x174a00: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_174a04:
    // 0x174a04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174a08:
    // 0x174a08: 0x8e83035c  lw          $v1, 0x35C($s4)
    ctx->pc = 0x174a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 860)));
label_174a0c:
    // 0x174a0c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x174a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_174a10:
    // 0x174a10: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_174a14:
    if (ctx->pc == 0x174A14u) {
        ctx->pc = 0x174A18u;
        goto label_174a18;
    }
    ctx->pc = 0x174A10u;
    {
        const bool branch_taken_0x174a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174a10) {
            ctx->pc = 0x17497Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17497c;
        }
    }
    ctx->pc = 0x174A18u;
label_174a18:
    // 0x174a18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x174a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_174a1c:
    // 0x174a1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_174a20:
    // 0x174a20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_174a24:
    // 0x174a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174a28:
    // 0x174a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174a2c:
    // 0x174a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174a30:
    // 0x174a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174a34:
    // 0x174a34: 0x3e00008  jr          $ra
label_174a38:
    if (ctx->pc == 0x174A38u) {
        ctx->pc = 0x174A38u;
            // 0x174a38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x174A3Cu;
        goto label_fallthrough_0x174a34;
    }
    ctx->pc = 0x174A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A34u;
            // 0x174a38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x174a34:
    ctx->pc = 0x174A3Cu;
}
