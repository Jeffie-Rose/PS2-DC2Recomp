#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsMakeObject__11CMenuInventFii
// Address: 0x2048d0 - 0x204e70
void IsMakeObject__11CMenuInventFii_0x2048d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsMakeObject__11CMenuInventFii_0x2048d0");
#endif

    switch (ctx->pc) {
        case 0x204930u: goto label_204930;
        case 0x2049a4u: goto label_2049a4;
        case 0x2049acu: goto label_2049ac;
        case 0x2049b4u: goto label_2049b4;
        case 0x2049d4u: goto label_2049d4;
        case 0x2049fcu: goto label_2049fc;
        case 0x204a1cu: goto label_204a1c;
        case 0x204a2cu: goto label_204a2c;
        case 0x204a44u: goto label_204a44;
        case 0x204a54u: goto label_204a54;
        case 0x204a64u: goto label_204a64;
        case 0x204a6cu: goto label_204a6c;
        case 0x204a74u: goto label_204a74;
        case 0x204ab4u: goto label_204ab4;
        case 0x204aecu: goto label_204aec;
        case 0x204b40u: goto label_204b40;
        case 0x204b60u: goto label_204b60;
        case 0x204b74u: goto label_204b74;
        case 0x204b9cu: goto label_204b9c;
        case 0x204bb8u: goto label_204bb8;
        case 0x204bc0u: goto label_204bc0;
        case 0x204bd0u: goto label_204bd0;
        case 0x204be0u: goto label_204be0;
        case 0x204c18u: goto label_204c18;
        case 0x204c40u: goto label_204c40;
        case 0x204c4cu: goto label_204c4c;
        case 0x204c7cu: goto label_204c7c;
        case 0x204c88u: goto label_204c88;
        case 0x204c98u: goto label_204c98;
        case 0x204cb8u: goto label_204cb8;
        case 0x204cccu: goto label_204ccc;
        case 0x204cd8u: goto label_204cd8;
        case 0x204d00u: goto label_204d00;
        case 0x204d08u: goto label_204d08;
        case 0x204d14u: goto label_204d14;
        case 0x204d1cu: goto label_204d1c;
        case 0x204d2cu: goto label_204d2c;
        case 0x204d34u: goto label_204d34;
        case 0x204d40u: goto label_204d40;
        case 0x204d60u: goto label_204d60;
        case 0x204d90u: goto label_204d90;
        case 0x204da4u: goto label_204da4;
        case 0x204dc0u: goto label_204dc0;
        case 0x204dccu: goto label_204dcc;
        case 0x204de4u: goto label_204de4;
        case 0x204df4u: goto label_204df4;
        case 0x204dfcu: goto label_204dfc;
        case 0x204e20u: goto label_204e20;
        case 0x204e30u: goto label_204e30;
        case 0x204e38u: goto label_204e38;
        default: break;
    }

    ctx->pc = 0x2048d0u;

    // 0x2048d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2048d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2048d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2048d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2048d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2048dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2048dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2048e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2048e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2048e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2048e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2048e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2048e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048ec: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2048f0: 0x10620147  beq         $v1, $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x2048F0u;
    {
        const bool branch_taken_0x2048f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2048F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048F0u;
            // 0x2048f4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048f0) {
            ctx->pc = 0x204E10u;
            goto label_204e10;
        }
    }
    ctx->pc = 0x2048F8u;
    // 0x2048f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048fc: 0x10620135  beq         $v1, $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x2048FCu;
    {
        const bool branch_taken_0x2048fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048FCu;
            // 0x204900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048fc) {
            ctx->pc = 0x204DD4u;
            goto label_204dd4;
        }
    }
    ctx->pc = 0x204904u;
    // 0x204904: 0x106200f7  beq         $v1, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x204904u;
    {
        const bool branch_taken_0x204904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204904u;
            // 0x204908: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204904) {
            ctx->pc = 0x204CE4u;
            goto label_204ce4;
        }
    }
    ctx->pc = 0x20490Cu;
    // 0x20490c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204910: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x204910u;
    {
        const bool branch_taken_0x204910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x204910) {
            ctx->pc = 0x204BD8u;
            goto label_204bd8;
        }
    }
    ctx->pc = 0x204918u;
    // 0x204918: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204918u;
    {
        const bool branch_taken_0x204918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204918) {
            ctx->pc = 0x204928u;
            goto label_204928;
        }
    }
    ctx->pc = 0x204920u;
    // 0x204920: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x204920u;
    {
        const bool branch_taken_0x204920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204920u;
            // 0x204924: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204920) {
            ctx->pc = 0x204E50u;
            goto label_204e50;
        }
    }
    ctx->pc = 0x204928u;
label_204928:
    // 0x204928: 0xc08e834  jal         func_23A0D0
    ctx->pc = 0x204928u;
    SET_GPR_U32(ctx, 31, 0x204930u);
    ctx->pc = 0x23A0D0u;
    if (runtime->hasFunction(0x23A0D0u)) {
        auto targetFn = runtime->lookupFunction(0x23A0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204930u; }
        if (ctx->pc != 0x204930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectMakeObject__14CBaseMenuClassFi_0x23a0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204930u; }
        if (ctx->pc != 0x204930u) { return; }
    }
    ctx->pc = 0x204930u;
label_204930:
    // 0x204930: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x204930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204934: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x204934u;
    {
        const bool branch_taken_0x204934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x204938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204934u;
            // 0x204938: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204934) {
            ctx->pc = 0x20494Cu;
            goto label_20494c;
        }
    }
    ctx->pc = 0x20493Cu;
    // 0x20493c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204940: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x204940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    // 0x204944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x204944u;
    {
        const bool branch_taken_0x204944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204944u;
            // 0x204948: 0xae200164  sw          $zero, 0x164($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204944) {
            ctx->pc = 0x204960u;
            goto label_204960;
        }
    }
    ctx->pc = 0x20494Cu;
label_20494c:
    // 0x20494c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20494Cu;
    {
        const bool branch_taken_0x20494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x204950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20494Cu;
            // 0x204950: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20494c) {
            ctx->pc = 0x204964u;
            goto label_204964;
        }
    }
    ctx->pc = 0x204954u;
    // 0x204954: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x204954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x204958: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x204958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20495c: 0xae220164  sw          $v0, 0x164($s1)
    ctx->pc = 0x20495cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 2));
label_204960:
    // 0x204960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_204964:
    // 0x204964: 0x1202008f  beq         $s0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x204964u;
    {
        const bool branch_taken_0x204964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x204964) {
            ctx->pc = 0x204BA4u;
            goto label_204ba4;
        }
    }
    ctx->pc = 0x20496Cu;
    // 0x20496c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204970: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204970u;
    {
        const bool branch_taken_0x204970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x204970) {
            ctx->pc = 0x204980u;
            goto label_204980;
        }
    }
    ctx->pc = 0x204978u;
    // 0x204978: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x204978u;
    {
        const bool branch_taken_0x204978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20497Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204978u;
            // 0x20497c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204978) {
            ctx->pc = 0x204E58u;
            goto label_204e58;
        }
    }
    ctx->pc = 0x204980u;
label_204980:
    // 0x204980: 0x82220108  lb          $v0, 0x108($s1)
    ctx->pc = 0x204980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x204984: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x204984u;
    {
        const bool branch_taken_0x204984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204984) {
            ctx->pc = 0x204BA4u;
            goto label_204ba4;
        }
    }
    ctx->pc = 0x20498Cu;
    // 0x20498c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x204990: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x204994: 0x8e260100  lw          $a2, 0x100($s1)
    ctx->pc = 0x204994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x204998: 0x8c27d8d0  lw          $a3, -0x2730($at)
    ctx->pc = 0x204998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x20499c: 0xc07ffcc  jal         func_1FFF30
    ctx->pc = 0x20499Cu;
    SET_GPR_U32(ctx, 31, 0x2049A4u);
    ctx->pc = 0x2049A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20499Cu;
            // 0x2049a0: 0x8f8490dc  lw          $a0, -0x6F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF30u;
    if (runtime->hasFunction(0x1FFF30u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049A4u; }
        if (ctx->pc != 0x2049A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMakeItem__17CInventDataManageFiiP13CGameDataUsed_0x1fff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049A4u; }
        if (ctx->pc != 0x2049A4u) { return; }
    }
    ctx->pc = 0x2049A4u;
label_2049a4:
    // 0x2049a4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2049A4u;
    SET_GPR_U32(ctx, 31, 0x2049ACu);
    ctx->pc = 0x2049A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2049A4u;
            // 0x2049a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049ACu; }
        if (ctx->pc != 0x2049ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049ACu; }
        if (ctx->pc != 0x2049ACu) { return; }
    }
    ctx->pc = 0x2049ACu;
label_2049ac:
    // 0x2049ac: 0xc067610  jal         func_19D840
    ctx->pc = 0x2049ACu;
    SET_GPR_U32(ctx, 31, 0x2049B4u);
    ctx->pc = 0x2049B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2049ACu;
            // 0x2049b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049B4u; }
        if (ctx->pc != 0x2049B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049B4u; }
        if (ctx->pc != 0x2049B4u) { return; }
    }
    ctx->pc = 0x2049B4u;
label_2049b4:
    // 0x2049b4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2049B4u;
    {
        const bool branch_taken_0x2049b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2049B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2049B4u;
            // 0x2049b8: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049b4) {
            ctx->pc = 0x2049DCu;
            goto label_2049dc;
        }
    }
    ctx->pc = 0x2049BCu;
    // 0x2049bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2049bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2049c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2049c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2049c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2049c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049c8: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2049c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2049cc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2049CCu;
    SET_GPR_U32(ctx, 31, 0x2049D4u);
    ctx->pc = 0x2049D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2049CCu;
            // 0x2049d0: 0x24a59740  addiu       $a1, $a1, -0x68C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049D4u; }
        if (ctx->pc != 0x2049D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049D4u; }
        if (ctx->pc != 0x2049D4u) { return; }
    }
    ctx->pc = 0x2049D4u;
label_2049d4:
    // 0x2049d4: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x2049D4u;
    {
        const bool branch_taken_0x2049d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2049d4) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x2049DCu;
label_2049dc:
    // 0x2049dc: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2049e0: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2049E0u;
    {
        const bool branch_taken_0x2049e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2049E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2049E0u;
            // 0x2049e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049e0) {
            ctx->pc = 0x204A04u;
            goto label_204a04;
        }
    }
    ctx->pc = 0x2049E8u;
    // 0x2049e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2049e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2049ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2049ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049f0: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2049f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2049f4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2049F4u;
    SET_GPR_U32(ctx, 31, 0x2049FCu);
    ctx->pc = 0x2049F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2049F4u;
            // 0x2049f8: 0x24a59750  addiu       $a1, $a1, -0x68B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049FCu; }
        if (ctx->pc != 0x2049FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049FCu; }
        if (ctx->pc != 0x2049FCu) { return; }
    }
    ctx->pc = 0x2049FCu;
label_2049fc:
    // 0x2049fc: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x2049FCu;
    {
        const bool branch_taken_0x2049fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2049fc) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204A04u;
label_204a04:
    // 0x204a04: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x204a08: 0x240200a5  addiu       $v0, $zero, 0xA5
    ctx->pc = 0x204a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x204a0c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204A0Cu;
    {
        const bool branch_taken_0x204a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204a0c) {
            ctx->pc = 0x204A2Cu;
            goto label_204a2c;
        }
    }
    ctx->pc = 0x204A14u;
    // 0x204a14: 0xc064220  jal         func_190880
    ctx->pc = 0x204A14u;
    SET_GPR_U32(ctx, 31, 0x204A1Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A1Cu; }
        if (ctx->pc != 0x204A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A1Cu; }
        if (ctx->pc != 0x204A1Cu) { return; }
    }
    ctx->pc = 0x204A1Cu;
label_204a1c:
    // 0x204a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a20: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x204a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x204a24: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x204A24u;
    SET_GPR_U32(ctx, 31, 0x204A2Cu);
    ctx->pc = 0x204A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204A24u;
            // 0x204a28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A2Cu; }
        if (ctx->pc != 0x204A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A2Cu; }
        if (ctx->pc != 0x204A2Cu) { return; }
    }
    ctx->pc = 0x204A2Cu;
label_204a2c:
    // 0x204a2c: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x204a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x204a30: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x204a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x204a34: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204A34u;
    {
        const bool branch_taken_0x204a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204a34) {
            ctx->pc = 0x204A54u;
            goto label_204a54;
        }
    }
    ctx->pc = 0x204A3Cu;
    // 0x204a3c: 0xc064220  jal         func_190880
    ctx->pc = 0x204A3Cu;
    SET_GPR_U32(ctx, 31, 0x204A44u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A44u; }
        if (ctx->pc != 0x204A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A44u; }
        if (ctx->pc != 0x204A44u) { return; }
    }
    ctx->pc = 0x204A44u;
label_204a44:
    // 0x204a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a48: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x204a4c: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x204A4Cu;
    SET_GPR_U32(ctx, 31, 0x204A54u);
    ctx->pc = 0x204A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204A4Cu;
            // 0x204a50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A54u; }
        if (ctx->pc != 0x204A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A54u; }
        if (ctx->pc != 0x204A54u) { return; }
    }
    ctx->pc = 0x204A54u;
label_204a54:
    // 0x204a54: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x204a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x204a58: 0x8e260100  lw          $a2, 0x100($s1)
    ctx->pc = 0x204a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x204a5c: 0xc07ffa0  jal         func_1FFE80
    ctx->pc = 0x204A5Cu;
    SET_GPR_U32(ctx, 31, 0x204A64u);
    ctx->pc = 0x204A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204A5Cu;
            // 0x204a60: 0x8f8490dc  lw          $a0, -0x6F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE80u;
    if (runtime->hasFunction(0x1FFE80u)) {
        auto targetFn = runtime->lookupFunction(0x1FFE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A64u; }
        if (ctx->pc != 0x204A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteUserUsedItem__17CInventDataManageFii_0x1ffe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A64u; }
        if (ctx->pc != 0x204A64u) { return; }
    }
    ctx->pc = 0x204A64u;
label_204a64:
    // 0x204a64: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x204A64u;
    SET_GPR_U32(ctx, 31, 0x204A6Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A6Cu; }
        if (ctx->pc != 0x204A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A6Cu; }
        if (ctx->pc != 0x204A6Cu) { return; }
    }
    ctx->pc = 0x204A6Cu;
label_204a6c:
    // 0x204a6c: 0xc067610  jal         func_19D840
    ctx->pc = 0x204A6Cu;
    SET_GPR_U32(ctx, 31, 0x204A74u);
    ctx->pc = 0x204A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204A6Cu;
            // 0x204a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A74u; }
        if (ctx->pc != 0x204A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A74u; }
        if (ctx->pc != 0x204A74u) { return; }
    }
    ctx->pc = 0x204A74u;
label_204a74:
    // 0x204a74: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x204a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x204a78: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x204a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x204a7c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x204a80: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x204a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x204a84: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x204a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x204a88: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x204a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x204a8c: 0x0  nop
    ctx->pc = 0x204a8cu;
    // NOP
    // 0x204a90: 0x0  nop
    ctx->pc = 0x204a90u;
    // NOP
    // 0x204a94: 0x1010  mfhi        $v0
    ctx->pc = 0x204a94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x204a98: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x204a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x204a9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x204a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204aa0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x204aa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x204aa4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x204AA4u;
    {
        const bool branch_taken_0x204aa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204AA4u;
            // 0x204aa8: 0x24820005  addiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204aa4) {
            ctx->pc = 0x204AD8u;
            goto label_204ad8;
        }
    }
    ctx->pc = 0x204AACu;
    // 0x204aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x204AACu;
    {
        const bool branch_taken_0x204aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204aac) {
            ctx->pc = 0x204AC0u;
            goto label_204ac0;
        }
    }
    ctx->pc = 0x204AB4u;
label_204ab4:
    // 0x204ab4: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x204ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x204ab8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204abc: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x204abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
label_204ac0:
    // 0x204ac0: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x204ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x204ac4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x204ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x204ac8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x204AC8u;
    {
        const bool branch_taken_0x204ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204ac8) {
            ctx->pc = 0x204AB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204ab4;
        }
    }
    ctx->pc = 0x204AD0u;
    // 0x204ad0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x204AD0u;
    {
        const bool branch_taken_0x204ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ad0) {
            ctx->pc = 0x204B0Cu;
            goto label_204b0c;
        }
    }
    ctx->pc = 0x204AD8u;
label_204ad8:
    // 0x204ad8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x204ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x204adc: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x204ADCu;
    {
        const bool branch_taken_0x204adc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x204adc) {
            ctx->pc = 0x204B0Cu;
            goto label_204b0c;
        }
    }
    ctx->pc = 0x204AE4u;
    // 0x204ae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x204AE4u;
    {
        const bool branch_taken_0x204ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ae4) {
            ctx->pc = 0x204AF8u;
            goto label_204af8;
        }
    }
    ctx->pc = 0x204AECu;
label_204aec:
    // 0x204aec: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x204aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x204af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204af4: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x204af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
label_204af8:
    // 0x204af8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x204afc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x204afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x204b00: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x204b00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x204b04: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x204B04u;
    {
        const bool branch_taken_0x204b04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b04) {
            ctx->pc = 0x204AECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204aec;
        }
    }
    ctx->pc = 0x204B0Cu;
label_204b0c:
    // 0x204b0c: 0x0  nop
    ctx->pc = 0x204b0cu;
    // NOP
    // 0x204b10: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x204b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x204b14: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x204b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x204b18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x204b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x204b1c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x204b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x204b20: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x204b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    // 0x204b24: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x204b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x204b28: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x204b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x204b2c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x204b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x204b30: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x204b30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
    // 0x204b34: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x204b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x204b38: 0xc04e748  jal         func_139D20
    ctx->pc = 0x204B38u;
    SET_GPR_U32(ctx, 31, 0x204B40u);
    ctx->pc = 0x204B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204B38u;
            // 0x204b3c: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B40u; }
        if (ctx->pc != 0x204B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B40u; }
        if (ctx->pc != 0x204B40u) { return; }
    }
    ctx->pc = 0x204B40u;
label_204b40:
    // 0x204b40: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x204b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x204b44: 0x8c23dc14  lw          $v1, -0x23EC($at)
    ctx->pc = 0x204b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958100)));
    // 0x204b48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x204b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x204b4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x204b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x204b50: 0x8c22dc10  lw          $v0, -0x23F0($at)
    ctx->pc = 0x204b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958096)));
    // 0x204b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204b58: 0xc052330  jal         func_148CC0
    ctx->pc = 0x204B58u;
    SET_GPR_U32(ctx, 31, 0x204B60u);
    ctx->pc = 0x204B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204B58u;
            // 0x204b5c: 0xae220578  sw          $v0, 0x578($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B60u; }
        if (ctx->pc != 0x204B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B60u; }
        if (ctx->pc != 0x204B60u) { return; }
    }
    ctx->pc = 0x204B60u;
label_204b60:
    // 0x204b60: 0x8e250578  lw          $a1, 0x578($s1)
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x204b64: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x204b68: 0x24849760  addiu       $a0, $a0, -0x68A0
    ctx->pc = 0x204b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940512));
    // 0x204b6c: 0xc05224c  jal         func_148930
    ctx->pc = 0x204B6Cu;
    SET_GPR_U32(ctx, 31, 0x204B74u);
    ctx->pc = 0x204B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204B6Cu;
            // 0x204b70: 0x27a6007c  addiu       $a2, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B74u; }
        if (ctx->pc != 0x204B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B74u; }
        if (ctx->pc != 0x204B74u) { return; }
    }
    ctx->pc = 0x204B74u;
label_204b74:
    // 0x204b74: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x204b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x204b78: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x204b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x204b7c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x204b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x204b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204B80u;
    {
        const bool branch_taken_0x204b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204B80u;
            // 0x204b84: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b80) {
            ctx->pc = 0x204B90u;
            goto label_204b90;
        }
    }
    ctx->pc = 0x204B88u;
    // 0x204b88: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x204b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x204b8c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x204b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_204b90:
    // 0x204b90: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x204b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x204b94: 0xc04e748  jal         func_139D20
    ctx->pc = 0x204B94u;
    SET_GPR_U32(ctx, 31, 0x204B9Cu);
    ctx->pc = 0x204B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204B94u;
            // 0x204b98: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B9Cu; }
        if (ctx->pc != 0x204B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B9Cu; }
        if (ctx->pc != 0x204B9Cu) { return; }
    }
    ctx->pc = 0x204B9Cu;
label_204b9c:
    // 0x204b9c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x204B9Cu;
    {
        const bool branch_taken_0x204b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b9c) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204BA4u;
label_204ba4:
    // 0x204ba4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x204ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x204ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bac: 0x24a59778  addiu       $a1, $a1, -0x6888
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940536));
    // 0x204bb0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x204BB0u;
    SET_GPR_U32(ctx, 31, 0x204BB8u);
    ctx->pc = 0x204BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BB0u;
            // 0x204bb4: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BB8u; }
        if (ctx->pc != 0x204BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BB8u; }
        if (ctx->pc != 0x204BB8u) { return; }
    }
    ctx->pc = 0x204BB8u;
label_204bb8:
    // 0x204bb8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x204BB8u;
    SET_GPR_U32(ctx, 31, 0x204BC0u);
    ctx->pc = 0x204BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BB8u;
            // 0x204bbc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BC0u; }
        if (ctx->pc != 0x204BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BC0u; }
        if (ctx->pc != 0x204BC0u) { return; }
    }
    ctx->pc = 0x204BC0u;
label_204bc0:
    // 0x204bc0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x204bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204bc4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x204bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204bc8: 0xc08f08c  jal         func_23C230
    ctx->pc = 0x204BC8u;
    SET_GPR_U32(ctx, 31, 0x204BD0u);
    ctx->pc = 0x204BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BC8u;
            // 0x204bcc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C230u;
    if (runtime->hasFunction(0x23C230u)) {
        auto targetFn = runtime->lookupFunction(0x23C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BD0u; }
        if (ctx->pc != 0x204BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeR__12CMenuKeyFuncFii_0x23c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BD0u; }
        if (ctx->pc != 0x204BD0u) { return; }
    }
    ctx->pc = 0x204BD0u;
label_204bd0:
    // 0x204bd0: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x204BD0u;
    {
        const bool branch_taken_0x204bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204bd0) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204BD8u;
label_204bd8:
    // 0x204bd8: 0xc05239c  jal         func_148E70
    ctx->pc = 0x204BD8u;
    SET_GPR_U32(ctx, 31, 0x204BE0u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BE0u; }
        if (ctx->pc != 0x204BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BE0u; }
        if (ctx->pc != 0x204BE0u) { return; }
    }
    ctx->pc = 0x204BE0u;
label_204be0:
    // 0x204be0: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x204BE0u;
    {
        const bool branch_taken_0x204be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204BE0u;
            // 0x204be4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204be0) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204BE8u;
    // 0x204be8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x204be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x204bec: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x204becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
    // 0x204bf0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x204bf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204bf4: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x204bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x204bf8: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x204bf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x204bfc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x204bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x204c00: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x204c00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x204c04: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x204c04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x204c08: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x204c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x204c0c: 0x8e260104  lw          $a2, 0x104($s1)
    ctx->pc = 0x204c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x204c10: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x204C10u;
    SET_GPR_U32(ctx, 31, 0x204C18u);
    ctx->pc = 0x204C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C10u;
            // 0x204c14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C270u;
    if (runtime->hasFunction(0x22C270u)) {
        auto targetFn = runtime->lookupFunction(0x22C270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C18u; }
        if (ctx->pc != 0x204C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii_0x22c270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C18u; }
        if (ctx->pc != 0x204C18u) { return; }
    }
    ctx->pc = 0x204C18u;
label_204c18:
    // 0x204c18: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x204c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x204c1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x204c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x204c20: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x204c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x204c24: 0x8c247ab8  lw          $a0, 0x7AB8($at)
    ctx->pc = 0x204c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31416)));
    // 0x204c28: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
    // 0x204c2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x204c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c30: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x204c34: 0x8c50004c  lw          $s0, 0x4C($v0)
    ctx->pc = 0x204c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x204c38: 0xc08bee4  jal         func_22FB90
    ctx->pc = 0x204C38u;
    SET_GPR_U32(ctx, 31, 0x204C40u);
    ctx->pc = 0x204C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C38u;
            // 0x204c3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB90u;
    if (runtime->hasFunction(0x22FB90u)) {
        auto targetFn = runtime->lookupFunction(0x22FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C40u; }
        if (ctx->pc != 0x204C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi_0x22fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C40u; }
        if (ctx->pc != 0x204C40u) { return; }
    }
    ctx->pc = 0x204C40u;
label_204c40:
    // 0x204c40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x204c44: 0xc08bfa4  jal         func_22FE90
    ctx->pc = 0x204C44u;
    SET_GPR_U32(ctx, 31, 0x204C4Cu);
    ctx->pc = 0x204C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C44u;
            // 0x204c48: 0x8c247ab8  lw          $a0, 0x7AB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FE90u;
    if (runtime->hasFunction(0x22FE90u)) {
        auto targetFn = runtime->lookupFunction(0x22FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C4Cu; }
        if (ctx->pc != 0x204C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStart__11CMenuEffectFv_0x22fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C4Cu; }
        if (ctx->pc != 0x204C4Cu) { return; }
    }
    ctx->pc = 0x204C4Cu;
label_204c4c:
    // 0x204c4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x204c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x204c50: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x204c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x204c54: 0x8c247abc  lw          $a0, 0x7ABC($at)
    ctx->pc = 0x204c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
    // 0x204c58: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x204c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x204c5c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x204c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x204c60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x204c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c64: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x204c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x204c68: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x204c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
    // 0x204c6c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x204c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x204c70: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x204c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204c74: 0xc08bee4  jal         func_22FB90
    ctx->pc = 0x204C74u;
    SET_GPR_U32(ctx, 31, 0x204C7Cu);
    ctx->pc = 0x204C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C74u;
            // 0x204c78: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB90u;
    if (runtime->hasFunction(0x22FB90u)) {
        auto targetFn = runtime->lookupFunction(0x22FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C7Cu; }
        if (ctx->pc != 0x204C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PresetEffect__11CMenuEffectFP9mgCMemoryP10mgCTextureiPi_0x22fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C7Cu; }
        if (ctx->pc != 0x204C7Cu) { return; }
    }
    ctx->pc = 0x204C7Cu;
label_204c7c:
    // 0x204c7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x204c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x204c80: 0xc08bfa4  jal         func_22FE90
    ctx->pc = 0x204C80u;
    SET_GPR_U32(ctx, 31, 0x204C88u);
    ctx->pc = 0x204C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C80u;
            // 0x204c84: 0x8c247abc  lw          $a0, 0x7ABC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FE90u;
    if (runtime->hasFunction(0x22FE90u)) {
        auto targetFn = runtime->lookupFunction(0x22FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C88u; }
        if (ctx->pc != 0x204C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectStart__11CMenuEffectFv_0x22fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C88u; }
        if (ctx->pc != 0x204C88u) { return; }
    }
    ctx->pc = 0x204C88u;
label_204c88:
    // 0x204c88: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x204c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204c8c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x204c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204c90: 0xc08f08c  jal         func_23C230
    ctx->pc = 0x204C90u;
    SET_GPR_U32(ctx, 31, 0x204C98u);
    ctx->pc = 0x204C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C90u;
            // 0x204c94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C230u;
    if (runtime->hasFunction(0x23C230u)) {
        auto targetFn = runtime->lookupFunction(0x23C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C98u; }
        if (ctx->pc != 0x204C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeR__12CMenuKeyFuncFii_0x23c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C98u; }
        if (ctx->pc != 0x204C98u) { return; }
    }
    ctx->pc = 0x204C98u;
label_204c98:
    // 0x204c98: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x204c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204c9c: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x204c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x204ca0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204CA0u;
    {
        const bool branch_taken_0x204ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204CA0u;
            // 0x204ca4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ca0) {
            ctx->pc = 0x204CACu;
            goto label_204cac;
        }
    }
    ctx->pc = 0x204CA8u;
    // 0x204ca8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x204ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_204cac:
    // 0x204cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cb0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x204CB0u;
    SET_GPR_U32(ctx, 31, 0x204CB8u);
    ctx->pc = 0x204CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204CB0u;
            // 0x204cb4: 0x24a59778  addiu       $a1, $a1, -0x6888 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CB8u; }
        if (ctx->pc != 0x204CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CB8u; }
        if (ctx->pc != 0x204CB8u) { return; }
    }
    ctx->pc = 0x204CB8u;
label_204cb8:
    // 0x204cb8: 0x8e250578  lw          $a1, 0x578($s1)
    ctx->pc = 0x204cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x204cbc: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x204cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x204cc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x204cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cc4: 0xc094288  jal         func_250A20
    ctx->pc = 0x204CC4u;
    SET_GPR_U32(ctx, 31, 0x204CCCu);
    ctx->pc = 0x204CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204CC4u;
            // 0x204cc8: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CCCu; }
        if (ctx->pc != 0x204CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CCCu; }
        if (ctx->pc != 0x204CCCu) { return; }
    }
    ctx->pc = 0x204CCCu;
label_204ccc:
    // 0x204ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cd0: 0xc080884  jal         func_202210
    ctx->pc = 0x204CD0u;
    SET_GPR_U32(ctx, 31, 0x204CD8u);
    ctx->pc = 0x204CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204CD0u;
            // 0x204cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202210u;
    if (runtime->hasFunction(0x202210u)) {
        auto targetFn = runtime->lookupFunction(0x202210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CD8u; }
        if (ctx->pc != 0x204CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateModeSwapForm__11CMenuInventFi_0x202210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204CD8u; }
        if (ctx->pc != 0x204CD8u) { return; }
    }
    ctx->pc = 0x204CD8u;
label_204cd8:
    // 0x204cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204cdc: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x204CDCu;
    {
        const bool branch_taken_0x204cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204CDCu;
            // 0x204ce0: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cdc) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204CE4u;
label_204ce4:
    // 0x204ce4: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x204ce8: 0x8c237abc  lw          $v1, 0x7ABC($at)
    ctx->pc = 0x204ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
    // 0x204cec: 0x84630036  lh          $v1, 0x36($v1)
    ctx->pc = 0x204cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x204cf0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x204CF0u;
    {
        const bool branch_taken_0x204cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204cf0) {
            ctx->pc = 0x204D60u;
            goto label_204d60;
        }
    }
    ctx->pc = 0x204CF8u;
    // 0x204cf8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x204CF8u;
    SET_GPR_U32(ctx, 31, 0x204D00u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D00u; }
        if (ctx->pc != 0x204D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D00u; }
        if (ctx->pc != 0x204D00u) { return; }
    }
    ctx->pc = 0x204D00u;
label_204d00:
    // 0x204d00: 0xc067660  jal         func_19D980
    ctx->pc = 0x204D00u;
    SET_GPR_U32(ctx, 31, 0x204D08u);
    ctx->pc = 0x204D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D00u;
            // 0x204d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D980u;
    if (runtime->hasFunction(0x19D980u)) {
        auto targetFn = runtime->lookupFunction(0x19D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D08u; }
        if (ctx->pc != 0x204D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D08u; }
        if (ctx->pc != 0x204D08u) { return; }
    }
    ctx->pc = 0x204D08u;
label_204d08:
    // 0x204d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x204D0Cu;
    {
        const bool branch_taken_0x204d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D0Cu;
            // 0x204d10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d0c) {
            ctx->pc = 0x204D44u;
            goto label_204d44;
        }
    }
    ctx->pc = 0x204D14u;
label_204d14:
    // 0x204d14: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x204D14u;
    SET_GPR_U32(ctx, 31, 0x204D1Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D1Cu; }
        if (ctx->pc != 0x204D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D1Cu; }
        if (ctx->pc != 0x204D1Cu) { return; }
    }
    ctx->pc = 0x204D1Cu;
label_204d1c:
    // 0x204d1c: 0x8e2600fc  lw          $a2, 0xFC($s1)
    ctx->pc = 0x204d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x204d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d24: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x204D24u;
    SET_GPR_U32(ctx, 31, 0x204D2Cu);
    ctx->pc = 0x204D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D24u;
            // 0x204d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D2Cu; }
        if (ctx->pc != 0x204D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D2Cu; }
        if (ctx->pc != 0x204D2Cu) { return; }
    }
    ctx->pc = 0x204D2Cu;
label_204d2c:
    // 0x204d2c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x204D2Cu;
    SET_GPR_U32(ctx, 31, 0x204D34u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D34u; }
        if (ctx->pc != 0x204D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D34u; }
        if (ctx->pc != 0x204D34u) { return; }
    }
    ctx->pc = 0x204D34u;
label_204d34:
    // 0x204d34: 0x8e2500fc  lw          $a1, 0xFC($s1)
    ctx->pc = 0x204d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x204d38: 0xc067ae4  jal         func_19EB90
    ctx->pc = 0x204D38u;
    SET_GPR_U32(ctx, 31, 0x204D40u);
    ctx->pc = 0x204D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D38u;
            // 0x204d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EB90u;
    if (runtime->hasFunction(0x19EB90u)) {
        auto targetFn = runtime->lookupFunction(0x19EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D40u; }
        if (ctx->pc != 0x204D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostume__16CUserDataManagerFi_0x19eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D40u; }
        if (ctx->pc != 0x204D40u) { return; }
    }
    ctx->pc = 0x204D40u;
label_204d40:
    // 0x204d40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_204d44:
    // 0x204d44: 0x0  nop
    ctx->pc = 0x204d44u;
    // NOP
    // 0x204d48: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x204d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x204d4c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x204d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x204d50: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x204D50u;
    {
        const bool branch_taken_0x204d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204d50) {
            ctx->pc = 0x204D14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204d14;
        }
    }
    ctx->pc = 0x204D58u;
    // 0x204d58: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x204D58u;
    SET_GPR_U32(ctx, 31, 0x204D60u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D60u; }
        if (ctx->pc != 0x204D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D60u; }
        if (ctx->pc != 0x204D60u) { return; }
    }
    ctx->pc = 0x204D60u;
label_204d60:
    // 0x204d60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x204d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x204d64: 0x8c227abc  lw          $v0, 0x7ABC($at)
    ctx->pc = 0x204d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
    // 0x204d68: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x204d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x204d6c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x204D6Cu;
    {
        const bool branch_taken_0x204d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204d6c) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204D74u;
    // 0x204d74: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x204d74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x204d78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x204d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x204d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d80: 0x24a59788  addiu       $a1, $a1, -0x6878
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940552));
    // 0x204d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204d88: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x204D88u;
    SET_GPR_U32(ctx, 31, 0x204D90u);
    ctx->pc = 0x204D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D88u;
            // 0x204d8c: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D90u; }
        if (ctx->pc != 0x204D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D90u; }
        if (ctx->pc != 0x204D90u) { return; }
    }
    ctx->pc = 0x204D90u;
label_204d90:
    // 0x204d90: 0xdf829120  ld          $v0, -0x6EE0($gp)
    ctx->pc = 0x204d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938912)));
    // 0x204d94: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x204d98: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x204d98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x204d9c: 0xc065810  jal         func_196040
    ctx->pc = 0x204D9Cu;
    SET_GPR_U32(ctx, 31, 0x204DA4u);
    ctx->pc = 0x204DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D9Cu;
            // 0x204da0: 0x8e2400fc  lw          $a0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DA4u; }
        if (ctx->pc != 0x204DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DA4u; }
        if (ctx->pc != 0x204DA4u) { return; }
    }
    ctx->pc = 0x204DA4u;
label_204da4:
    // 0x204da4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x204da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x204da8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x204da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x204dac: 0x8c30ca50  lw          $s0, -0x35B0($at)
    ctx->pc = 0x204dacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x204db0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x204db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x204db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204db8: 0xc087720  jal         func_21DC80
    ctx->pc = 0x204DB8u;
    SET_GPR_U32(ctx, 31, 0x204DC0u);
    ctx->pc = 0x204DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204DB8u;
            // 0x204dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DC0u; }
        if (ctx->pc != 0x204DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DC0u; }
        if (ctx->pc != 0x204DC0u) { return; }
    }
    ctx->pc = 0x204DC0u;
label_204dc0:
    // 0x204dc0: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x204dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x204dc4: 0xc0877b8  jal         func_21DEE0
    ctx->pc = 0x204DC4u;
    SET_GPR_U32(ctx, 31, 0x204DCCu);
    ctx->pc = 0x204DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204DC4u;
            // 0x204dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DCCu; }
        if (ctx->pc != 0x204DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DCCu; }
        if (ctx->pc != 0x204DCCu) { return; }
    }
    ctx->pc = 0x204DCCu;
label_204dcc:
    // 0x204dcc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x204DCCu;
    {
        const bool branch_taken_0x204dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204dcc) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204DD4u;
label_204dd4:
    // 0x204dd4: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x204DD4u;
    {
        const bool branch_taken_0x204dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204DD4u;
            // 0x204dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204dd4) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204DDCu;
    // 0x204ddc: 0xc080884  jal         func_202210
    ctx->pc = 0x204DDCu;
    SET_GPR_U32(ctx, 31, 0x204DE4u);
    ctx->pc = 0x202210u;
    if (runtime->hasFunction(0x202210u)) {
        auto targetFn = runtime->lookupFunction(0x202210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DE4u; }
        if (ctx->pc != 0x204DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateModeSwapForm__11CMenuInventFi_0x202210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DE4u; }
        if (ctx->pc != 0x204DE4u) { return; }
    }
    ctx->pc = 0x204DE4u;
label_204de4:
    // 0x204de4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x204de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x204de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dec: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x204DECu;
    SET_GPR_U32(ctx, 31, 0x204DF4u);
    ctx->pc = 0x204DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204DECu;
            // 0x204df0: 0x24a59798  addiu       $a1, $a1, -0x6868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DF4u; }
        if (ctx->pc != 0x204DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DF4u; }
        if (ctx->pc != 0x204DF4u) { return; }
    }
    ctx->pc = 0x204DF4u;
label_204df4:
    // 0x204df4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x204DF4u;
    SET_GPR_U32(ctx, 31, 0x204DFCu);
    ctx->pc = 0x204DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204DF4u;
            // 0x204df8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DFCu; }
        if (ctx->pc != 0x204DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204DFCu; }
        if (ctx->pc != 0x204DFCu) { return; }
    }
    ctx->pc = 0x204DFCu;
label_204dfc:
    // 0x204dfc: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x204dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e04: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x204e04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x204E08u;
    {
        const bool branch_taken_0x204e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E08u;
            // 0x204e0c: 0xa2220108  sb          $v0, 0x108($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e08) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204E10u;
label_204e10:
    // 0x204e10: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x204E10u;
    {
        const bool branch_taken_0x204e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E10u;
            // 0x204e14: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e10) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204E18u;
    // 0x204e18: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x204E18u;
    SET_GPR_U32(ctx, 31, 0x204E20u);
    ctx->pc = 0x204E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204E18u;
            // 0x204e1c: 0x24a59798  addiu       $a1, $a1, -0x6868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E20u; }
        if (ctx->pc != 0x204E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E20u; }
        if (ctx->pc != 0x204E20u) { return; }
    }
    ctx->pc = 0x204E20u;
label_204e20:
    // 0x204e20: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x204e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204e24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x204e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204e28: 0xc08f08c  jal         func_23C230
    ctx->pc = 0x204E28u;
    SET_GPR_U32(ctx, 31, 0x204E30u);
    ctx->pc = 0x204E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204E28u;
            // 0x204e2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C230u;
    if (runtime->hasFunction(0x23C230u)) {
        auto targetFn = runtime->lookupFunction(0x23C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E30u; }
        if (ctx->pc != 0x204E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeR__12CMenuKeyFuncFii_0x23c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E30u; }
        if (ctx->pc != 0x204E30u) { return; }
    }
    ctx->pc = 0x204E30u;
label_204e30:
    // 0x204e30: 0xc094274  jal         func_2509D0
    ctx->pc = 0x204E30u;
    SET_GPR_U32(ctx, 31, 0x204E38u);
    ctx->pc = 0x204E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204E30u;
            // 0x204e34: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E38u; }
        if (ctx->pc != 0x204E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204E38u; }
        if (ctx->pc != 0x204E38u) { return; }
    }
    ctx->pc = 0x204E38u;
label_204e38:
    // 0x204e38: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x204e38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e40: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x204e40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e44: 0xa2200108  sb          $zero, 0x108($s1)
    ctx->pc = 0x204e44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 0));
    // 0x204e48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204E48u;
    {
        const bool branch_taken_0x204e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E48u;
            // 0x204e4c: 0xa2220eb6  sb          $v0, 0xEB6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3766), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e48) {
            ctx->pc = 0x204E54u;
            goto label_204e54;
        }
    }
    ctx->pc = 0x204E50u;
label_204e50:
    // 0x204e50: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x204e50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
label_204e54:
    // 0x204e54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x204e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_204e58:
    // 0x204e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204e68: 0x3e00008  jr          $ra
    ctx->pc = 0x204E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204E68u;
            // 0x204e6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204E70u;
}
