#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PhotoNetaEnter__11CMenuInventFii
// Address: 0x206de0 - 0x2070e4
void PhotoNetaEnter__11CMenuInventFii_0x206de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PhotoNetaEnter__11CMenuInventFii_0x206de0");
#endif

    switch (ctx->pc) {
        case 0x206e50u: goto label_206e50;
        case 0x206e94u: goto label_206e94;
        case 0x206e9cu: goto label_206e9c;
        case 0x206ef8u: goto label_206ef8;
        case 0x206f10u: goto label_206f10;
        case 0x206f2cu: goto label_206f2c;
        case 0x206f5cu: goto label_206f5c;
        case 0x206f94u: goto label_206f94;
        case 0x206f9cu: goto label_206f9c;
        case 0x206fc0u: goto label_206fc0;
        case 0x206fccu: goto label_206fcc;
        case 0x206fe8u: goto label_206fe8;
        case 0x207004u: goto label_207004;
        case 0x207018u: goto label_207018;
        case 0x207048u: goto label_207048;
        case 0x207050u: goto label_207050;
        case 0x207068u: goto label_207068;
        case 0x2070c4u: goto label_2070c4;
        case 0x2070ccu: goto label_2070cc;
        default: break;
    }

    ctx->pc = 0x206de0u;

    // 0x206de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x206de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x206de4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x206de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x206de8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x206de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x206dec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x206decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x206df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x206df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x206df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206df8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x206df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206e00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x206e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e04: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x206e04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x206e08: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
    // 0x206e0c: 0x10a300a3  beq         $a1, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x206E0Cu;
    {
        const bool branch_taken_0x206e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x206E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E0Cu;
            // 0x206e10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e0c) {
            ctx->pc = 0x20709Cu;
            goto label_20709c;
        }
    }
    ctx->pc = 0x206E14u;
    // 0x206e14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x206e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x206e18: 0x10a3009c  beq         $a1, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x206E18u;
    {
        const bool branch_taken_0x206e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x206E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E18u;
            // 0x206e1c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e18) {
            ctx->pc = 0x20708Cu;
            goto label_20708c;
        }
    }
    ctx->pc = 0x206E20u;
    // 0x206e20: 0x10a3007b  beq         $a1, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x206E20u;
    {
        const bool branch_taken_0x206e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x206E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E20u;
            // 0x206e24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e20) {
            ctx->pc = 0x207010u;
            goto label_207010;
        }
    }
    ctx->pc = 0x206E28u;
    // 0x206e28: 0x10a30071  beq         $a1, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x206E28u;
    {
        const bool branch_taken_0x206e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x206E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E28u;
            // 0x206e2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e28) {
            ctx->pc = 0x206FF0u;
            goto label_206ff0;
        }
    }
    ctx->pc = 0x206E30u;
    // 0x206e30: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x206E30u;
    {
        const bool branch_taken_0x206e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x206e30) {
            ctx->pc = 0x206F44u;
            goto label_206f44;
        }
    }
    ctx->pc = 0x206E38u;
    // 0x206e38: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206E38u;
    {
        const bool branch_taken_0x206e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x206e38) {
            ctx->pc = 0x206E48u;
            goto label_206e48;
        }
    }
    ctx->pc = 0x206E40u;
    // 0x206e40: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x206E40u;
    {
        const bool branch_taken_0x206e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206e40) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x206E48u;
label_206e48:
    // 0x206e48: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x206E48u;
    SET_GPR_U32(ctx, 31, 0x206E50u);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E50u; }
        if (ctx->pc != 0x206E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E50u; }
        if (ctx->pc != 0x206E50u) { return; }
    }
    ctx->pc = 0x206E50u;
label_206e50:
    // 0x206e50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206e54: 0x12230039  beq         $s1, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x206E54u;
    {
        const bool branch_taken_0x206e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x206E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E54u;
            // 0x206e58: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e54) {
            ctx->pc = 0x206F3Cu;
            goto label_206f3c;
        }
    }
    ctx->pc = 0x206E5Cu;
    // 0x206e5c: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x206E5Cu;
    {
        const bool branch_taken_0x206e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x206E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E5Cu;
            // 0x206e60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e5c) {
            ctx->pc = 0x206E74u;
            goto label_206e74;
        }
    }
    ctx->pc = 0x206E64u;
    // 0x206e64: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206E64u;
    {
        const bool branch_taken_0x206e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x206e64) {
            ctx->pc = 0x206E74u;
            goto label_206e74;
        }
    }
    ctx->pc = 0x206E6Cu;
    // 0x206e6c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x206E6Cu;
    {
        const bool branch_taken_0x206e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206e6c) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x206E74u;
label_206e74:
    // 0x206e74: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x206E74u;
    {
        const bool branch_taken_0x206e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206E74u;
            // 0x206e78: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e74) {
            ctx->pc = 0x206F3Cu;
            goto label_206f3c;
        }
    }
    ctx->pc = 0x206E7Cu;
    // 0x206e7c: 0xa6400390  sh          $zero, 0x390($s2)
    ctx->pc = 0x206e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 912), (uint16_t)GPR_U32(ctx, 0));
    // 0x206e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e88: 0xa3829160  sb          $v0, -0x6EA0($gp)
    ctx->pc = 0x206e88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938976), (uint8_t)GPR_U32(ctx, 2));
    // 0x206e8c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206E8Cu;
    SET_GPR_U32(ctx, 31, 0x206E94u);
    ctx->pc = 0x206E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E8Cu;
            // 0x206e90: 0x24a59990  addiu       $a1, $a1, -0x6670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E94u; }
        if (ctx->pc != 0x206E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E94u; }
        if (ctx->pc != 0x206E94u) { return; }
    }
    ctx->pc = 0x206E94u;
label_206e94:
    // 0x206e94: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206E94u;
    SET_GPR_U32(ctx, 31, 0x206E9Cu);
    ctx->pc = 0x206E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E94u;
            // 0x206e98: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E9Cu; }
        if (ctx->pc != 0x206E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E9Cu; }
        if (ctx->pc != 0x206E9Cu) { return; }
    }
    ctx->pc = 0x206E9Cu;
label_206e9c:
    // 0x206e9c: 0x83839164  lb          $v1, -0x6E9C($gp)
    ctx->pc = 0x206e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938980)));
    // 0x206ea0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x206ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x206ea4: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x206ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
    // 0x206ea8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x206ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x206eac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x206eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x206eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206eb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x206eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x206eb8: 0xa7829168  sh          $v0, -0x6E98($gp)
    ctx->pc = 0x206eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938984), (uint16_t)GPR_U32(ctx, 2));
    // 0x206ebc: 0x87919168  lh          $s1, -0x6E98($gp)
    ctx->pc = 0x206ebcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938984)));
    // 0x206ec0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x206ec4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x206ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206ec8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x206ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x206ecc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x206ed0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206ED0u;
    {
        const bool branch_taken_0x206ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206ED0u;
            // 0x206ed4: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ed0) {
            ctx->pc = 0x206EE4u;
            goto label_206ee4;
        }
    }
    ctx->pc = 0x206ED8u;
    // 0x206ed8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x206ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x206edc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x206EDCu;
    {
        const bool branch_taken_0x206edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206EDCu;
            // 0x206ee0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206edc) {
            ctx->pc = 0x206EE8u;
            goto label_206ee8;
        }
    }
    ctx->pc = 0x206EE4u;
label_206ee4:
    // 0x206ee4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x206ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_206ee8:
    // 0x206ee8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x206eec: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x206eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x206ef0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x206EF0u;
    SET_GPR_U32(ctx, 31, 0x206EF8u);
    ctx->pc = 0x206EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206EF0u;
            // 0x206ef4: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EF8u; }
        if (ctx->pc != 0x206EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EF8u; }
        if (ctx->pc != 0x206EF8u) { return; }
    }
    ctx->pc = 0x206EF8u;
label_206ef8:
    // 0x206ef8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x206efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f00: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x206f04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x206f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x206f08: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x206F08u;
    SET_GPR_U32(ctx, 31, 0x206F10u);
    ctx->pc = 0x206F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F08u;
            // 0x206f0c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F10u; }
        if (ctx->pc != 0x206F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F10u; }
        if (ctx->pc != 0x206F10u) { return; }
    }
    ctx->pc = 0x206F10u;
label_206f10:
    // 0x206f10: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x206f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x206f14: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x206f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f1c: 0x24a570f0  addiu       $a1, $a1, 0x70F0
    ctx->pc = 0x206f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28912));
    // 0x206f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f24: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x206F24u;
    SET_GPR_U32(ctx, 31, 0x206F2Cu);
    ctx->pc = 0x206F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F24u;
            // 0x206f28: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F2Cu; }
        if (ctx->pc != 0x206F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F2Cu; }
        if (ctx->pc != 0x206F2Cu) { return; }
    }
    ctx->pc = 0x206F2Cu;
label_206f2c:
    // 0x206f2c: 0xaf82916c  sw          $v0, -0x6E94($gp)
    ctx->pc = 0x206f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938988), GPR_U32(ctx, 2));
    // 0x206f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206f34: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x206F34u;
    {
        const bool branch_taken_0x206f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206F34u;
            // 0x206f38: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f34) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x206F3Cu;
label_206f3c:
    // 0x206f3c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x206F3Cu;
    {
        const bool branch_taken_0x206f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206F3Cu;
            // 0x206f40: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f3c) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x206F44u;
label_206f44:
    // 0x206f44: 0x86430390  lh          $v1, 0x390($s2)
    ctx->pc = 0x206f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 912)));
    // 0x206f48: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x206F48u;
    {
        const bool branch_taken_0x206f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206f48) {
            ctx->pc = 0x206F74u;
            goto label_206f74;
        }
    }
    ctx->pc = 0x206F50u;
    // 0x206f50: 0x8f84916c  lw          $a0, -0x6E94($gp)
    ctx->pc = 0x206f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x206f54: 0xc08bb60  jal         func_22ED80
    ctx->pc = 0x206F54u;
    SET_GPR_U32(ctx, 31, 0x206F5Cu);
    ctx->pc = 0x206F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F54u;
            // 0x206f58: 0x87859168  lh          $a1, -0x6E98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ED80u;
    if (runtime->hasFunction(0x22ED80u)) {
        auto targetFn = runtime->lookupFunction(0x22ED80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F5Cu; }
        if (ctx->pc != 0x206F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunStarDust__FP9CStarDusti_0x22ed80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F5Cu; }
        if (ctx->pc != 0x206F5Cu) { return; }
    }
    ctx->pc = 0x206F5Cu;
label_206f5c:
    // 0x206f5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206F5Cu;
    {
        const bool branch_taken_0x206f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206f5c) {
            ctx->pc = 0x206F7Cu;
            goto label_206f7c;
        }
    }
    ctx->pc = 0x206F64u;
    // 0x206f64: 0x86430390  lh          $v1, 0x390($s2)
    ctx->pc = 0x206f64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 912)));
    // 0x206f68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x206F6Cu;
    {
        const bool branch_taken_0x206f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206F6Cu;
            // 0x206f70: 0xa6430390  sh          $v1, 0x390($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 912), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f6c) {
            ctx->pc = 0x206F7Cu;
            goto label_206f7c;
        }
    }
    ctx->pc = 0x206F74u;
label_206f74:
    // 0x206f74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206f78: 0xa6430390  sh          $v1, 0x390($s2)
    ctx->pc = 0x206f78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 912), (uint16_t)GPR_U32(ctx, 3));
label_206f7c:
    // 0x206f7c: 0x86430390  lh          $v1, 0x390($s2)
    ctx->pc = 0x206f7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 912)));
    // 0x206f80: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x206f80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x206f84: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x206F84u;
    {
        const bool branch_taken_0x206f84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x206f84) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x206F8Cu;
    // 0x206f8c: 0xc07fec0  jal         func_1FFB00
    ctx->pc = 0x206F8Cu;
    SET_GPR_U32(ctx, 31, 0x206F94u);
    ctx->pc = 0x1FFB00u;
    if (runtime->hasFunction(0x1FFB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FFB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F94u; }
        if (ctx->pc != 0x206F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPhotoFlag__Fv_0x1ffb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F94u; }
        if (ctx->pc != 0x206F94u) { return; }
    }
    ctx->pc = 0x206F94u;
label_206f94:
    // 0x206f94: 0xc07fa8c  jal         func_1FEA30
    ctx->pc = 0x206F94u;
    SET_GPR_U32(ctx, 31, 0x206F9Cu);
    ctx->pc = 0x206F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F94u;
            // 0x206f98: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA30u;
    if (runtime->hasFunction(0x1FEA30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F9Cu; }
        if (ctx->pc != 0x206F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PhotoCheckEnd__15CInventUserDataFv_0x1fea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F9Cu; }
        if (ctx->pc != 0x206F9Cu) { return; }
    }
    ctx->pc = 0x206F9Cu;
label_206f9c:
    // 0x206f9c: 0x86430110  lh          $v1, 0x110($s2)
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x206fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206fa4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206FA4u;
    {
        const bool branch_taken_0x206fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FA4u;
            // 0x206fa8: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fa4) {
            ctx->pc = 0x206FC4u;
            goto label_206fc4;
        }
    }
    ctx->pc = 0x206FACu;
    // 0x206fac: 0x86420112  lh          $v0, 0x112($s2)
    ctx->pc = 0x206facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x206fb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206FB0u;
    {
        const bool branch_taken_0x206fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FB0u;
            // 0x206fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fb0) {
            ctx->pc = 0x206FC0u;
            goto label_206fc0;
        }
    }
    ctx->pc = 0x206FB8u;
    // 0x206fb8: 0xc0807b0  jal         func_201EC0
    ctx->pc = 0x206FB8u;
    SET_GPR_U32(ctx, 31, 0x206FC0u);
    ctx->pc = 0x201EC0u;
    if (runtime->hasFunction(0x201EC0u)) {
        auto targetFn = runtime->lookupFunction(0x201EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FC0u; }
        if (ctx->pc != 0x206FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataRecordBoard__11CMenuInventFv_0x201ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FC0u; }
        if (ctx->pc != 0x206FC0u) { return; }
    }
    ctx->pc = 0x206FC0u;
label_206fc0:
    // 0x206fc0: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x206fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_206fc4:
    // 0x206fc4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206FC4u;
    SET_GPR_U32(ctx, 31, 0x206FCCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FCCu; }
        if (ctx->pc != 0x206FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FCCu; }
        if (ctx->pc != 0x206FCCu) { return; }
    }
    ctx->pc = 0x206FCCu;
label_206fcc:
    // 0x206fcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x206fd0: 0xa3809160  sb          $zero, -0x6EA0($gp)
    ctx->pc = 0x206fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938976), (uint8_t)GPR_U32(ctx, 0));
    // 0x206fd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fdc: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x206fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x206fe0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206FE0u;
    SET_GPR_U32(ctx, 31, 0x206FE8u);
    ctx->pc = 0x206FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206FE0u;
            // 0x206fe4: 0x24a599a0  addiu       $a1, $a1, -0x6660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FE8u; }
        if (ctx->pc != 0x206FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FE8u; }
        if (ctx->pc != 0x206FE8u) { return; }
    }
    ctx->pc = 0x206FE8u;
label_206fe8:
    // 0x206fe8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x206FE8u;
    {
        const bool branch_taken_0x206fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fe8) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x206FF0u;
label_206ff0:
    // 0x206ff0: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x206FF0u;
    {
        const bool branch_taken_0x206ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FF0u;
            // 0x206ff4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ff0) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x206FF8u;
    // 0x206ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ffc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206FFCu;
    SET_GPR_U32(ctx, 31, 0x207004u);
    ctx->pc = 0x207000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206FFCu;
            // 0x207000: 0x24a599b0  addiu       $a1, $a1, -0x6650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207004u; }
        if (ctx->pc != 0x207004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207004u; }
        if (ctx->pc != 0x207004u) { return; }
    }
    ctx->pc = 0x207004u;
label_207004:
    // 0x207004: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x207004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207008: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x207008u;
    {
        const bool branch_taken_0x207008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207008u;
            // 0x20700c: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207008) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x207010u;
label_207010:
    // 0x207010: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x207010u;
    SET_GPR_U32(ctx, 31, 0x207018u);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207018u; }
        if (ctx->pc != 0x207018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207018u; }
        if (ctx->pc != 0x207018u) { return; }
    }
    ctx->pc = 0x207018u;
label_207018:
    // 0x207018: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20701c: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x20701Cu;
    {
        const bool branch_taken_0x20701c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x207020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20701Cu;
            // 0x207020: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20701c) {
            ctx->pc = 0x207084u;
            goto label_207084;
        }
    }
    ctx->pc = 0x207024u;
    // 0x207024: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207024u;
    {
        const bool branch_taken_0x207024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x207024) {
            ctx->pc = 0x207034u;
            goto label_207034;
        }
    }
    ctx->pc = 0x20702Cu;
    // 0x20702c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20702Cu;
    {
        const bool branch_taken_0x20702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20702c) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x207034u;
label_207034:
    // 0x207034: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x207034u;
    {
        const bool branch_taken_0x207034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207034u;
            // 0x207038: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207034) {
            ctx->pc = 0x207084u;
            goto label_207084;
        }
    }
    ctx->pc = 0x20703Cu;
    // 0x20703c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207040: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x207040u;
    SET_GPR_U32(ctx, 31, 0x207048u);
    ctx->pc = 0x207044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207040u;
            // 0x207044: 0x24a599c0  addiu       $a1, $a1, -0x6640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207048u; }
        if (ctx->pc != 0x207048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207048u; }
        if (ctx->pc != 0x207048u) { return; }
    }
    ctx->pc = 0x207048u;
label_207048:
    // 0x207048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20704c: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x20704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_207050:
    // 0x207050: 0x906305c4  lbu         $v1, 0x5C4($v1)
    ctx->pc = 0x207050u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1476)));
    // 0x207054: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207054u;
    {
        const bool branch_taken_0x207054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207054) {
            ctx->pc = 0x207068u;
            goto label_207068;
        }
    }
    ctx->pc = 0x20705Cu;
    // 0x20705c: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x207060: 0xc07fadc  jal         func_1FEB70
    ctx->pc = 0x207060u;
    SET_GPR_U32(ctx, 31, 0x207068u);
    ctx->pc = 0x207064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207060u;
            // 0x207064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    if (runtime->hasFunction(0x1FEB70u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207068u; }
        if (ctx->pc != 0x207068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeletePhotoData__15CInventUserDataFi_0x1feb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207068u; }
        if (ctx->pc != 0x207068u) { return; }
    }
    ctx->pc = 0x207068u;
label_207068:
    // 0x207068: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20706c: 0x2a23001e  slti        $v1, $s1, 0x1E
    ctx->pc = 0x20706cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x207070: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x207070u;
    {
        const bool branch_taken_0x207070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207070u;
            // 0x207074: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207070) {
            ctx->pc = 0x207050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207050;
        }
    }
    ctx->pc = 0x207078u;
    // 0x207078: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20707c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20707Cu;
    {
        const bool branch_taken_0x20707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20707Cu;
            // 0x207080: 0xa6430002  sh          $v1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20707c) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x207084u;
label_207084:
    // 0x207084: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x207084u;
    {
        const bool branch_taken_0x207084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207084u;
            // 0x207088: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207084) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x20708Cu;
label_20708c:
    // 0x20708c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20708Cu;
    {
        const bool branch_taken_0x20708c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20708c) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x207094u;
    // 0x207094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207094u;
    {
        const bool branch_taken_0x207094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207094u;
            // 0x207098: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207094) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x20709Cu;
label_20709c:
    // 0x20709c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20709Cu;
    {
        const bool branch_taken_0x20709c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20709c) {
            ctx->pc = 0x2070A8u;
            goto label_2070a8;
        }
    }
    ctx->pc = 0x2070A4u;
    // 0x2070a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2070a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2070a8:
    // 0x2070a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2070A8u;
    {
        const bool branch_taken_0x2070a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070A8u;
            // 0x2070ac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070a8) {
            ctx->pc = 0x2070CCu;
            goto label_2070cc;
        }
    }
    ctx->pc = 0x2070B0u;
    // 0x2070b0: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x2070b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2070b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2070b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070b8: 0x24a599d0  addiu       $a1, $a1, -0x6630
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941136));
    // 0x2070bc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2070BCu;
    SET_GPR_U32(ctx, 31, 0x2070C4u);
    ctx->pc = 0x2070C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2070BCu;
            // 0x2070c0: 0xa6400002  sh          $zero, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2070C4u; }
        if (ctx->pc != 0x2070C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2070C4u; }
        if (ctx->pc != 0x2070C4u) { return; }
    }
    ctx->pc = 0x2070C4u;
label_2070c4:
    // 0x2070c4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2070C4u;
    SET_GPR_U32(ctx, 31, 0x2070CCu);
    ctx->pc = 0x2070C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2070C4u;
            // 0x2070c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2070CCu; }
        if (ctx->pc != 0x2070CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2070CCu; }
        if (ctx->pc != 0x2070CCu) { return; }
    }
    ctx->pc = 0x2070CCu;
label_2070cc:
    // 0x2070cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2070ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2070d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2070d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2070d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2070d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2070d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2070d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2070dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2070DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2070E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070DCu;
            // 0x2070e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2070E4u;
}
