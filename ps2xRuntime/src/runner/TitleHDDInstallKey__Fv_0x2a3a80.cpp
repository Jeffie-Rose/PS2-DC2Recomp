#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleHDDInstallKey__Fv
// Address: 0x2a3a80 - 0x2a4618
void TitleHDDInstallKey__Fv_0x2a3a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleHDDInstallKey__Fv_0x2a3a80");
#endif

    switch (ctx->pc) {
        case 0x2a3aa4u: goto label_2a3aa4;
        case 0x2a3ae0u: goto label_2a3ae0;
        case 0x2a3afcu: goto label_2a3afc;
        case 0x2a3b10u: goto label_2a3b10;
        case 0x2a3b38u: goto label_2a3b38;
        case 0x2a3b48u: goto label_2a3b48;
        case 0x2a3b58u: goto label_2a3b58;
        case 0x2a3b70u: goto label_2a3b70;
        case 0x2a3b94u: goto label_2a3b94;
        case 0x2a3bb4u: goto label_2a3bb4;
        case 0x2a3c00u: goto label_2a3c00;
        case 0x2a3ca8u: goto label_2a3ca8;
        case 0x2a3cc8u: goto label_2a3cc8;
        case 0x2a3cdcu: goto label_2a3cdc;
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3d0cu: goto label_2a3d0c;
        case 0x2a3d64u: goto label_2a3d64;
        case 0x2a3d6cu: goto label_2a3d6c;
        case 0x2a3d74u: goto label_2a3d74;
        case 0x2a3dd8u: goto label_2a3dd8;
        case 0x2a3dfcu: goto label_2a3dfc;
        case 0x2a3e2cu: goto label_2a3e2c;
        case 0x2a3e44u: goto label_2a3e44;
        case 0x2a3e5cu: goto label_2a3e5c;
        case 0x2a3e74u: goto label_2a3e74;
        case 0x2a3ec4u: goto label_2a3ec4;
        case 0x2a3ed8u: goto label_2a3ed8;
        case 0x2a3ef8u: goto label_2a3ef8;
        case 0x2a3f14u: goto label_2a3f14;
        case 0x2a3f24u: goto label_2a3f24;
        case 0x2a3f34u: goto label_2a3f34;
        case 0x2a3f40u: goto label_2a3f40;
        case 0x2a3f58u: goto label_2a3f58;
        case 0x2a3f80u: goto label_2a3f80;
        case 0x2a3fa4u: goto label_2a3fa4;
        case 0x2a3fbcu: goto label_2a3fbc;
        case 0x2a3fd0u: goto label_2a3fd0;
        case 0x2a401cu: goto label_2a401c;
        case 0x2a4044u: goto label_2a4044;
        case 0x2a4064u: goto label_2a4064;
        case 0x2a4094u: goto label_2a4094;
        case 0x2a40bcu: goto label_2a40bc;
        case 0x2a40d8u: goto label_2a40d8;
        case 0x2a40f8u: goto label_2a40f8;
        case 0x2a410cu: goto label_2a410c;
        case 0x2a4130u: goto label_2a4130;
        case 0x2a4148u: goto label_2a4148;
        case 0x2a4154u: goto label_2a4154;
        case 0x2a4178u: goto label_2a4178;
        case 0x2a41a4u: goto label_2a41a4;
        case 0x2a41c4u: goto label_2a41c4;
        case 0x2a41ecu: goto label_2a41ec;
        case 0x2a41f8u: goto label_2a41f8;
        case 0x2a421cu: goto label_2a421c;
        case 0x2a4234u: goto label_2a4234;
        case 0x2a425cu: goto label_2a425c;
        case 0x2a427cu: goto label_2a427c;
        case 0x2a4294u: goto label_2a4294;
        case 0x2a42b0u: goto label_2a42b0;
        case 0x2a42c8u: goto label_2a42c8;
        case 0x2a42e0u: goto label_2a42e0;
        case 0x2a42ecu: goto label_2a42ec;
        case 0x2a4304u: goto label_2a4304;
        case 0x2a432cu: goto label_2a432c;
        case 0x2a4344u: goto label_2a4344;
        case 0x2a4364u: goto label_2a4364;
        case 0x2a438cu: goto label_2a438c;
        case 0x2a43a4u: goto label_2a43a4;
        case 0x2a43acu: goto label_2a43ac;
        case 0x2a43c0u: goto label_2a43c0;
        case 0x2a43d8u: goto label_2a43d8;
        case 0x2a43e8u: goto label_2a43e8;
        case 0x2a43f4u: goto label_2a43f4;
        case 0x2a4400u: goto label_2a4400;
        case 0x2a440cu: goto label_2a440c;
        case 0x2a442cu: goto label_2a442c;
        case 0x2a4444u: goto label_2a4444;
        case 0x2a4460u: goto label_2a4460;
        case 0x2a449cu: goto label_2a449c;
        case 0x2a44b0u: goto label_2a44b0;
        case 0x2a44c0u: goto label_2a44c0;
        case 0x2a44ccu: goto label_2a44cc;
        case 0x2a44e4u: goto label_2a44e4;
        case 0x2a44f0u: goto label_2a44f0;
        case 0x2a4508u: goto label_2a4508;
        case 0x2a4510u: goto label_2a4510;
        case 0x2a4528u: goto label_2a4528;
        case 0x2a4540u: goto label_2a4540;
        case 0x2a4554u: goto label_2a4554;
        case 0x2a4588u: goto label_2a4588;
        case 0x2a45d0u: goto label_2a45d0;
        default: break;
    }

    ctx->pc = 0x2a3a80u;

    // 0x2a3a80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a3a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a3a84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a3a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a3a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a3a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a3a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a3a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a3a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a3a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a3a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a3a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3a9c: 0xc08f86c  jal         func_23E1B0
    ctx->pc = 0x2A3A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A3AA4u);
    ctx->pc = 0x2A3AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A9Cu;
            // 0x2a3aa0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E1B0u;
    if (runtime->hasFunction(0x23E1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AA4u; }
        if (ctx->pc != 0x2A3AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckPushButton__Fv_0x23e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AA4u; }
        if (ctx->pc != 0x2A3AA4u) { return; }
    }
    ctx->pc = 0x2A3AA4u;
label_2a3aa4:
    // 0x2a3aa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a3aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3aa8: 0x87829a0c  lh          $v0, -0x65F4($gp)
    ctx->pc = 0x2a3aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941196)));
    // 0x2a3aac: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x2a3aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2a3ab0: 0x10200148  beqz        $at, . + 4 + (0x148 << 2)
    ctx->pc = 0x2A3AB0u;
    {
        const bool branch_taken_0x2a3ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3AB0u;
            // 0x2a3ab4: 0x200082a  slt         $at, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ab0) {
            ctx->pc = 0x2A3FD4u;
            goto label_2a3fd4;
        }
    }
    ctx->pc = 0x2A3AB8u;
    // 0x2a3ab8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2a3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2a3abc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3ac0: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x2a3ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
    // 0x2a3ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3ac8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3acc: 0x400008  jr          $v0
    ctx->pc = 0x2A3ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3AD4u: goto label_2a3ad4;
            case 0x2A3AF0u: goto label_2a3af0;
            case 0x2A3B50u: goto label_2a3b50;
            case 0x2A3CD0u: goto label_2a3cd0;
            case 0x2A3D5Cu: goto label_2a3d5c;
            case 0x2A3E4Cu: goto label_2a3e4c;
            case 0x2A3ECCu: goto label_2a3ecc;
            case 0x2A3F1Cu: goto label_2a3f1c;
            case 0x2A3F48u: goto label_2a3f48;
            case 0x2A3F60u: goto label_2a3f60;
            case 0x2A3F94u: goto label_2a3f94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3AD4u;
label_2a3ad4:
    // 0x2a3ad4: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3ad8: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A3AD8u;
    SET_GPR_U32(ctx, 31, 0x2A3AE0u);
    ctx->pc = 0x2A3ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3AD8u;
            // 0x2a3adc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AE0u; }
        if (ctx->pc != 0x2A3AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AE0u; }
        if (ctx->pc != 0x2A3AE0u) { return; }
    }
    ctx->pc = 0x2A3AE0u;
label_2a3ae0:
    // 0x2a3ae0: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x2A3AE0u;
    {
        const bool branch_taken_0x2a3ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3ae0) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3AE8u;
    // 0x2a3ae8: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x2A3AE8u;
    {
        const bool branch_taken_0x2a3ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3AE8u;
            // 0x2a3aec: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ae8) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3AF0u;
label_2a3af0:
    // 0x2a3af0: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3af4: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2A3AF4u;
    SET_GPR_U32(ctx, 31, 0x2A3AFCu);
    ctx->pc = 0x2A3AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3AF4u;
            // 0x2a3af8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AFCu; }
        if (ctx->pc != 0x2A3AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AFCu; }
        if (ctx->pc != 0x2A3AFCu) { return; }
    }
    ctx->pc = 0x2A3AFCu;
label_2a3afc:
    // 0x2a3afc: 0x10400134  beqz        $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x2A3AFCu;
    {
        const bool branch_taken_0x2a3afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3afc) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3B04u;
    // 0x2a3b04: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3b08: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A3B08u;
    SET_GPR_U32(ctx, 31, 0x2A3B10u);
    ctx->pc = 0x2A3B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B08u;
            // 0x2a3b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B10u; }
        if (ctx->pc != 0x2A3B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B10u; }
        if (ctx->pc != 0x2A3B10u) { return; }
    }
    ctx->pc = 0x2A3B10u;
label_2a3b10:
    // 0x2a3b10: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3b14: 0x8f85997c  lw          $a1, -0x6684($gp)
    ctx->pc = 0x2a3b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a3b18: 0x8c236124  lw          $v1, 0x6124($at)
    ctx->pc = 0x2a3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24868)));
    // 0x2a3b1c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a3b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3b20: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x2a3b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2a3b24: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3b28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a3b2c: 0x8c226120  lw          $v0, 0x6120($at)
    ctx->pc = 0x2a3b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24864)));
    // 0x2a3b30: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2A3B30u;
    SET_GPR_U32(ctx, 31, 0x2A3B38u);
    ctx->pc = 0x2A3B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B30u;
            // 0x2a3b34: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B38u; }
        if (ctx->pc != 0x2A3B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B38u; }
        if (ctx->pc != 0x2A3B38u) { return; }
    }
    ctx->pc = 0x2A3B38u;
label_2a3b38:
    // 0x2a3b38: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a3b3c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3b40: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x2A3B40u;
    SET_GPR_U32(ctx, 31, 0x2A3B48u);
    ctx->pc = 0x2A3B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B40u;
            // 0x2a3b44: 0x24450088  addiu       $a1, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B48u; }
        if (ctx->pc != 0x2A3B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B48u; }
        if (ctx->pc != 0x2A3B48u) { return; }
    }
    ctx->pc = 0x2A3B48u;
label_2a3b48:
    // 0x2a3b48: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x2A3B48u;
    {
        const bool branch_taken_0x2a3b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B48u;
            // 0x2a3b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b48) {
            ctx->pc = 0x2A45F8u;
            goto label_2a45f8;
        }
    }
    ctx->pc = 0x2A3B50u;
label_2a3b50:
    // 0x2a3b50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a3b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a3b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b58:
    // 0x2a3b58: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2a3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2a3b5c: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x2a3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x2a3b60: 0x244262a0  addiu       $v0, $v0, 0x62A0
    ctx->pc = 0x2a3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25248));
    // 0x2a3b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b68: 0xc094558  jal         func_251560
    ctx->pc = 0x2A3B68u;
    SET_GPR_U32(ctx, 31, 0x2A3B70u);
    ctx->pc = 0x2A3B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B68u;
            // 0x2a3b6c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B70u; }
        if (ctx->pc != 0x2A3B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B70u; }
        if (ctx->pc != 0x2A3B70u) { return; }
    }
    ctx->pc = 0x2A3B70u;
label_2a3b70:
    // 0x2a3b70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a3b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a3b74: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x2a3b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a3b78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A3B78u;
    {
        const bool branch_taken_0x2a3b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B78u;
            // 0x2a3b7c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b78) {
            ctx->pc = 0x2A3B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3b58;
        }
    }
    ctx->pc = 0x2A3B80u;
    // 0x2a3b80: 0x87929a38  lh          $s2, -0x65C8($gp)
    ctx->pc = 0x2a3b80u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941240)));
    // 0x2a3b84: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a3b88: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2a3b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2a3b8c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A3B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A3B94u);
    ctx->pc = 0x2A3B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B8Cu;
            // 0x2a3b90: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B94u; }
        if (ctx->pc != 0x2A3B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B94u; }
        if (ctx->pc != 0x2A3B94u) { return; }
    }
    ctx->pc = 0x2A3B94u;
label_2a3b94:
    // 0x2a3b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3B94u;
    {
        const bool branch_taken_0x2a3b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B94u;
            // 0x2a3b98: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b94) {
            ctx->pc = 0x2A3BA8u;
            goto label_2a3ba8;
        }
    }
    ctx->pc = 0x2A3B9Cu;
    // 0x2a3b9c: 0x87829a38  lh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3b9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941240)));
    // 0x2a3ba0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a3ba4: 0xa7829a38  sh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941240), (uint16_t)GPR_U32(ctx, 2));
label_2a3ba8:
    // 0x2a3ba8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2a3ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a3bac: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A3BACu;
    SET_GPR_U32(ctx, 31, 0x2A3BB4u);
    ctx->pc = 0x2A3BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3BACu;
            // 0x2a3bb0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3BB4u; }
        if (ctx->pc != 0x2A3BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3BB4u; }
        if (ctx->pc != 0x2A3BB4u) { return; }
    }
    ctx->pc = 0x2A3BB4u;
label_2a3bb4:
    // 0x2a3bb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3BB4u;
    {
        const bool branch_taken_0x2a3bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3bb4) {
            ctx->pc = 0x2A3BC8u;
            goto label_2a3bc8;
        }
    }
    ctx->pc = 0x2A3BBCu;
    // 0x2a3bbc: 0x87829a38  lh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941240)));
    // 0x2a3bc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3bc4: 0xa7829a38  sh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941240), (uint16_t)GPR_U32(ctx, 2));
label_2a3bc8:
    // 0x2a3bc8: 0x87829a38  lh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941240)));
    // 0x2a3bcc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3BCCu;
    {
        const bool branch_taken_0x2a3bcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a3bcc) {
            ctx->pc = 0x2A3BD8u;
            goto label_2a3bd8;
        }
    }
    ctx->pc = 0x2A3BD4u;
    // 0x2a3bd4: 0xa7809a38  sh          $zero, -0x65C8($gp)
    ctx->pc = 0x2a3bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941240), (uint16_t)GPR_U32(ctx, 0));
label_2a3bd8:
    // 0x2a3bd8: 0x87829a38  lh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941240)));
    // 0x2a3bdc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a3bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3be0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3BE0u;
    {
        const bool branch_taken_0x2a3be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3be0) {
            ctx->pc = 0x2A3BECu;
            goto label_2a3bec;
        }
    }
    ctx->pc = 0x2A3BE8u;
    // 0x2a3be8: 0xa7809a38  sh          $zero, -0x65C8($gp)
    ctx->pc = 0x2a3be8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941240), (uint16_t)GPR_U32(ctx, 0));
label_2a3bec:
    // 0x2a3bec: 0x87829a38  lh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941240)));
    // 0x2a3bf0: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3BF0u;
    {
        const bool branch_taken_0x2a3bf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3BF0u;
            // 0x2a3bf4: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bf0) {
            ctx->pc = 0x2A3C04u;
            goto label_2a3c04;
        }
    }
    ctx->pc = 0x2A3BF8u;
    // 0x2a3bf8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3BF8u;
    SET_GPR_U32(ctx, 31, 0x2A3C00u);
    ctx->pc = 0x2A3BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3BF8u;
            // 0x2a3bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C00u; }
        if (ctx->pc != 0x2A3C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C00u; }
        if (ctx->pc != 0x2A3C00u) { return; }
    }
    ctx->pc = 0x2A3C00u;
label_2a3c00:
    // 0x2a3c00: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2a3c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2a3c04:
    // 0x2a3c04: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A3C04u;
    {
        const bool branch_taken_0x2a3c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C04u;
            // 0x2a3c08: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c04) {
            ctx->pc = 0x2A3CB0u;
            goto label_2a3cb0;
        }
    }
    ctx->pc = 0x2A3C0Cu;
    // 0x2a3c0c: 0x87829a38  lh          $v0, -0x65C8($gp)
    ctx->pc = 0x2a3c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941240)));
    // 0x2a3c10: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A3C10u;
    {
        const bool branch_taken_0x2a3c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C10u;
            // 0x2a3c14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c10) {
            ctx->pc = 0x2A3CA0u;
            goto label_2a3ca0;
        }
    }
    ctx->pc = 0x2A3C18u;
    // 0x2a3c18: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3c1c: 0xa7809a10  sh          $zero, -0x65F0($gp)
    ctx->pc = 0x2a3c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941200), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a3c20: 0x8c2462d0  lw          $a0, 0x62D0($at)
    ctx->pc = 0x2a3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25296)));
    // 0x2a3c24: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2a3c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a3c28: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2A3C28u;
    {
        const bool branch_taken_0x2a3c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C28u;
            // 0x2a3c2c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c28) {
            ctx->pc = 0x2A3C54u;
            goto label_2a3c54;
        }
    }
    ctx->pc = 0x2A3C30u;
    // 0x2a3c30: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3c38: 0x8c2362d4  lw          $v1, 0x62D4($at)
    ctx->pc = 0x2a3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25300)));
    // 0x2a3c3c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3C3Cu;
    {
        const bool branch_taken_0x2a3c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3c3c) {
            ctx->pc = 0x2A3C4Cu;
            goto label_2a3c4c;
        }
    }
    ctx->pc = 0x2A3C44u;
    // 0x2a3c44: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3C44u;
    {
        const bool branch_taken_0x2a3c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a3c44) {
            ctx->pc = 0x2A3C54u;
            goto label_2a3c54;
        }
    }
    ctx->pc = 0x2A3C4Cu;
label_2a3c4c:
    // 0x2a3c4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A3C4Cu;
    {
        const bool branch_taken_0x2a3c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C4Cu;
            // 0x2a3c50: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c4c) {
            ctx->pc = 0x2A3C9Cu;
            goto label_2a3c9c;
        }
    }
    ctx->pc = 0x2A3C54u;
label_2a3c54:
    // 0x2a3c54: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3C54u;
    {
        const bool branch_taken_0x2a3c54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C54u;
            // 0x2a3c58: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c54) {
            ctx->pc = 0x2A3C64u;
            goto label_2a3c64;
        }
    }
    ctx->pc = 0x2A3C5Cu;
    // 0x2a3c5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A3C5Cu;
    {
        const bool branch_taken_0x2a3c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C5Cu;
            // 0x2a3c60: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c5c) {
            ctx->pc = 0x2A3C9Cu;
            goto label_2a3c9c;
        }
    }
    ctx->pc = 0x2A3C64u;
label_2a3c64:
    // 0x2a3c64: 0x8c2262d8  lw          $v0, 0x62D8($at)
    ctx->pc = 0x2a3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25304)));
    // 0x2a3c68: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a3c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3c6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3C6Cu;
    {
        const bool branch_taken_0x2a3c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3c6c) {
            ctx->pc = 0x2A3C7Cu;
            goto label_2a3c7c;
        }
    }
    ctx->pc = 0x2A3C74u;
    // 0x2a3c74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3C74u;
    {
        const bool branch_taken_0x2a3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C74u;
            // 0x2a3c78: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c74) {
            ctx->pc = 0x2A3C9Cu;
            goto label_2a3c9c;
        }
    }
    ctx->pc = 0x2A3C7Cu;
label_2a3c7c:
    // 0x2a3c7c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3C7Cu;
    {
        const bool branch_taken_0x2a3c7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A3C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C7Cu;
            // 0x2a3c80: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c7c) {
            ctx->pc = 0x2A3C8Cu;
            goto label_2a3c8c;
        }
    }
    ctx->pc = 0x2A3C84u;
    // 0x2a3c84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3C84u;
    {
        const bool branch_taken_0x2a3c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C84u;
            // 0x2a3c88: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c84) {
            ctx->pc = 0x2A3C9Cu;
            goto label_2a3c9c;
        }
    }
    ctx->pc = 0x2A3C8Cu;
label_2a3c8c:
    // 0x2a3c8c: 0x8c2262dc  lw          $v0, 0x62DC($at)
    ctx->pc = 0x2a3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25308)));
    // 0x2a3c90: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3C90u;
    {
        const bool branch_taken_0x2a3c90 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2a3c90) {
            ctx->pc = 0x2A3C9Cu;
            goto label_2a3c9c;
        }
    }
    ctx->pc = 0x2A3C98u;
    // 0x2a3c98: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2a3c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a3c9c:
    // 0x2a3c9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3ca0:
    // 0x2a3ca0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3CA0u;
    SET_GPR_U32(ctx, 31, 0x2A3CA8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CA8u; }
        if (ctx->pc != 0x2A3CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CA8u; }
        if (ctx->pc != 0x2A3CA8u) { return; }
    }
    ctx->pc = 0x2A3CA8u;
label_2a3ca8:
    // 0x2a3ca8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2A3CA8u;
    {
        const bool branch_taken_0x2a3ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3ca8) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3CB0u;
label_2a3cb0:
    // 0x2a3cb0: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2A3CB0u;
    {
        const bool branch_taken_0x2a3cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3CB0u;
            // 0x2a3cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3cb0) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3CB8u;
    // 0x2a3cb8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a3cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a3cbc: 0xa7829a10  sh          $v0, -0x65F0($gp)
    ctx->pc = 0x2a3cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941200), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a3cc0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3CC0u;
    SET_GPR_U32(ctx, 31, 0x2A3CC8u);
    ctx->pc = 0x2A3CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3CC0u;
            // 0x2a3cc4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CC8u; }
        if (ctx->pc != 0x2A3CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CC8u; }
        if (ctx->pc != 0x2A3CC8u) { return; }
    }
    ctx->pc = 0x2A3CC8u;
label_2a3cc8:
    // 0x2a3cc8: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x2A3CC8u;
    {
        const bool branch_taken_0x2a3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3cc8) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3CD0u;
label_2a3cd0:
    // 0x2a3cd0: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a3cd4: 0xc087654  jal         func_21D950
    ctx->pc = 0x2A3CD4u;
    SET_GPR_U32(ctx, 31, 0x2A3CDCu);
    ctx->pc = 0x2A3CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3CD4u;
            // 0x2a3cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CDCu; }
        if (ctx->pc != 0x2A3CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CDCu; }
        if (ctx->pc != 0x2A3CDCu) { return; }
    }
    ctx->pc = 0x2A3CDCu;
label_2a3cdc:
    // 0x2a3cdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a3cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3ce4: 0x16440003  bne         $s2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3CE4u;
    {
        const bool branch_taken_0x2a3ce4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A3CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3CE4u;
            // 0x2a3ce8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ce4) {
            ctx->pc = 0x2A3CF4u;
            goto label_2a3cf4;
        }
    }
    ctx->pc = 0x2A3CECu;
    // 0x2a3cec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3CECu;
    SET_GPR_U32(ctx, 31, 0x2A3CF4u);
    ctx->pc = 0x2A3CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3CECu;
            // 0x2a3cf0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CF4u; }
        if (ctx->pc != 0x2A3CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CF4u; }
        if (ctx->pc != 0x2A3CF4u) { return; }
    }
    ctx->pc = 0x2A3CF4u;
label_2a3cf4:
    // 0x2a3cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3cf8: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3CF8u;
    {
        const bool branch_taken_0x2a3cf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3cf8) {
            ctx->pc = 0x2A3D0Cu;
            goto label_2a3d0c;
        }
    }
    ctx->pc = 0x2A3D00u;
    // 0x2a3d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a3d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d04: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3D04u;
    SET_GPR_U32(ctx, 31, 0x2A3D0Cu);
    ctx->pc = 0x2A3D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D04u;
            // 0x2a3d08: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D0Cu; }
        if (ctx->pc != 0x2A3D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D0Cu; }
        if (ctx->pc != 0x2A3D0Cu) { return; }
    }
    ctx->pc = 0x2A3D0Cu;
label_2a3d0c:
    // 0x2a3d0c: 0x87839a10  lh          $v1, -0x65F0($gp)
    ctx->pc = 0x2a3d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941200)));
    // 0x2a3d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3d14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3D14u;
    {
        const bool branch_taken_0x2a3d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3d14) {
            ctx->pc = 0x2A3D38u;
            goto label_2a3d38;
        }
    }
    ctx->pc = 0x2A3D1Cu;
    // 0x2a3d1c: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3D1Cu;
    {
        const bool branch_taken_0x2a3d1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3d1c) {
            ctx->pc = 0x2A3D28u;
            goto label_2a3d28;
        }
    }
    ctx->pc = 0x2A3D24u;
    // 0x2a3d24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3d28:
    // 0x2a3d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3d2c: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3D2Cu;
    {
        const bool branch_taken_0x2a3d2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3d2c) {
            ctx->pc = 0x2A3D38u;
            goto label_2a3d38;
        }
    }
    ctx->pc = 0x2A3D34u;
    // 0x2a3d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3d38:
    // 0x2a3d38: 0x146000a5  bnez        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A3D38u;
    {
        const bool branch_taken_0x2a3d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D38u;
            // 0x2a3d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d38) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3D40u;
    // 0x2a3d40: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3D40u;
    {
        const bool branch_taken_0x2a3d40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A3D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D40u;
            // 0x2a3d44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d40) {
            ctx->pc = 0x2A3D4Cu;
            goto label_2a3d4c;
        }
    }
    ctx->pc = 0x2A3D48u;
    // 0x2a3d48: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2a3d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a3d4c:
    // 0x2a3d4c: 0x162200a0  bne         $s1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2A3D4Cu;
    {
        const bool branch_taken_0x2a3d4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3d4c) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3D54u;
    // 0x2a3d54: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2A3D54u;
    {
        const bool branch_taken_0x2a3d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D54u;
            // 0x2a3d58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d54) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3D5Cu;
label_2a3d5c:
    // 0x2a3d5c: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x2A3D5Cu;
    SET_GPR_U32(ctx, 31, 0x2A3D64u);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D64u; }
        if (ctx->pc != 0x2A3D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D64u; }
        if (ctx->pc != 0x2A3D64u) { return; }
    }
    ctx->pc = 0x2A3D64u;
label_2a3d64:
    // 0x2a3d64: 0xc0c7048  jal         func_31C120
    ctx->pc = 0x2A3D64u;
    SET_GPR_U32(ctx, 31, 0x2A3D6Cu);
    ctx->pc = 0x2A3D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D64u;
            // 0x2a3d68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31C120u;
    if (runtime->hasFunction(0x31C120u)) {
        auto targetFn = runtime->lookupFunction(0x31C120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D6Cu; }
        if (ctx->pc != 0x2A3D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInstallProgress__Fv_0x31c120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D6Cu; }
        if (ctx->pc != 0x2A3D6Cu) { return; }
    }
    ctx->pc = 0x2A3D6Cu;
label_2a3d6c:
    // 0x2a3d6c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2A3D6Cu;
    SET_GPR_U32(ctx, 31, 0x2A3D74u);
    ctx->pc = 0x2A3D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D6Cu;
            // 0x2a3d70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D74u; }
        if (ctx->pc != 0x2A3D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D74u; }
        if (ctx->pc != 0x2A3D74u) { return; }
    }
    ctx->pc = 0x2A3D74u;
label_2a3d74:
    // 0x2a3d74: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3d78: 0xac2262ec  sw          $v0, 0x62EC($at)
    ctx->pc = 0x2a3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25324), GPR_U32(ctx, 2));
    // 0x2a3d7c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3d80: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2a3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2a3d84: 0x8c2362ec  lw          $v1, 0x62EC($at)
    ctx->pc = 0x2a3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25324)));
    // 0x2a3d88: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2a3d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2a3d8c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2a3d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a3d90: 0x0  nop
    ctx->pc = 0x2a3d90u;
    // NOP
    // 0x2a3d94: 0x0  nop
    ctx->pc = 0x2a3d94u;
    // NOP
    // 0x2a3d98: 0x1010  mfhi        $v0
    ctx->pc = 0x2a3d98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2a3d9c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a3da0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2a3da0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a3da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3da8: 0xa7829a14  sh          $v0, -0x65EC($gp)
    ctx->pc = 0x2a3da8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941204), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a3dac: 0x87829a14  lh          $v0, -0x65EC($gp)
    ctx->pc = 0x2a3dacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941204)));
    // 0x2a3db0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3DB0u;
    {
        const bool branch_taken_0x2a3db0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a3db0) {
            ctx->pc = 0x2A3DBCu;
            goto label_2a3dbc;
        }
    }
    ctx->pc = 0x2A3DB8u;
    // 0x2a3db8: 0xa7809a14  sh          $zero, -0x65EC($gp)
    ctx->pc = 0x2a3db8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941204), (uint16_t)GPR_U32(ctx, 0));
label_2a3dbc:
    // 0x2a3dbc: 0x87829a14  lh          $v0, -0x65EC($gp)
    ctx->pc = 0x2a3dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941204)));
    // 0x2a3dc0: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x2a3dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a3dc4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3DC4u;
    {
        const bool branch_taken_0x2a3dc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3DC4u;
            // 0x2a3dc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3dc4) {
            ctx->pc = 0x2A3DD4u;
            goto label_2a3dd4;
        }
    }
    ctx->pc = 0x2A3DCCu;
    // 0x2a3dcc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a3dd0: 0xa7829a14  sh          $v0, -0x65EC($gp)
    ctx->pc = 0x2a3dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941204), (uint16_t)GPR_U32(ctx, 2));
label_2a3dd4:
    // 0x2a3dd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a3dd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3dd8:
    // 0x2a3dd8: 0x87829a14  lh          $v0, -0x65EC($gp)
    ctx->pc = 0x2a3dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941204)));
    // 0x2a3ddc: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x2a3ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2a3de0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3DE0u;
    {
        const bool branch_taken_0x2a3de0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3DE0u;
            // 0x2a3de4: 0x3c0201f0  lui         $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3de0) {
            ctx->pc = 0x2A3DFCu;
            goto label_2a3dfc;
        }
    }
    ctx->pc = 0x2A3DE8u;
    // 0x2a3de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3dec: 0x244262a0  addiu       $v0, $v0, 0x62A0
    ctx->pc = 0x2a3decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25248));
    // 0x2a3df0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3df4: 0xc094558  jal         func_251560
    ctx->pc = 0x2A3DF4u;
    SET_GPR_U32(ctx, 31, 0x2A3DFCu);
    ctx->pc = 0x2A3DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3DF4u;
            // 0x2a3df8: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3DFCu; }
        if (ctx->pc != 0x2A3DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3DFCu; }
        if (ctx->pc != 0x2A3DFCu) { return; }
    }
    ctx->pc = 0x2A3DFCu;
label_2a3dfc:
    // 0x2a3dfc: 0x0  nop
    ctx->pc = 0x2a3dfcu;
    // NOP
    // 0x2a3e00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a3e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a3e04: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x2a3e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a3e08: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A3E08u;
    {
        const bool branch_taken_0x2a3e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E08u;
            // 0x2a3e0c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e08) {
            ctx->pc = 0x2A3DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3dd8;
        }
    }
    ctx->pc = 0x2A3E10u;
    // 0x2a3e10: 0x1e400008  bgtz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3E10u;
    {
        const bool branch_taken_0x2a3e10 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2A3E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E10u;
            // 0x2a3e14: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e10) {
            ctx->pc = 0x2A3E34u;
            goto label_2a3e34;
        }
    }
    ctx->pc = 0x2A3E18u;
    // 0x2a3e18: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3e1c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x2a3e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a3e20: 0xac3262e8  sw          $s2, 0x62E8($at)
    ctx->pc = 0x2a3e20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25320), GPR_U32(ctx, 18));
    // 0x2a3e24: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3E24u;
    SET_GPR_U32(ctx, 31, 0x2A3E2Cu);
    ctx->pc = 0x2A3E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E24u;
            // 0x2a3e28: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E2Cu; }
        if (ctx->pc != 0x2A3E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E2Cu; }
        if (ctx->pc != 0x2A3E2Cu) { return; }
    }
    ctx->pc = 0x2A3E2Cu;
label_2a3e2c:
    // 0x2a3e2c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2A3E2Cu;
    {
        const bool branch_taken_0x2a3e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e2c) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3E34u;
label_2a3e34:
    // 0x2a3e34: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2A3E34u;
    {
        const bool branch_taken_0x2a3e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E34u;
            // 0x2a3e38: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e34) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3E3Cu;
    // 0x2a3e3c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E44u);
    ctx->pc = 0x2A3E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E3Cu;
            // 0x2a3e40: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E44u; }
        if (ctx->pc != 0x2A3E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E44u; }
        if (ctx->pc != 0x2A3E44u) { return; }
    }
    ctx->pc = 0x2A3E44u;
label_2a3e44:
    // 0x2a3e44: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2A3E44u;
    {
        const bool branch_taken_0x2a3e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e44) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3E4Cu;
label_2a3e4c:
    // 0x2a3e4c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a3e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a3e50: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a3e54: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A3E54u;
    SET_GPR_U32(ctx, 31, 0x2A3E5Cu);
    ctx->pc = 0x2A3E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E54u;
            // 0x2a3e58: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E5Cu; }
        if (ctx->pc != 0x2A3E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E5Cu; }
        if (ctx->pc != 0x2A3E5Cu) { return; }
    }
    ctx->pc = 0x2A3E5Cu;
label_2a3e5c:
    // 0x2a3e5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3E5Cu;
    {
        const bool branch_taken_0x2a3e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e5c) {
            ctx->pc = 0x2A3E7Cu;
            goto label_2a3e7c;
        }
    }
    ctx->pc = 0x2A3E64u;
    // 0x2a3e64: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a3e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a3e68: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a3e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a3e6c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A3E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E74u);
    ctx->pc = 0x2A3E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E6Cu;
            // 0x2a3e70: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E74u; }
        if (ctx->pc != 0x2A3E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E74u; }
        if (ctx->pc != 0x2A3E74u) { return; }
    }
    ctx->pc = 0x2A3E74u;
label_2a3e74:
    // 0x2a3e74: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2A3E74u;
    {
        const bool branch_taken_0x2a3e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e74) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3E7Cu;
label_2a3e7c:
    // 0x2a3e7c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3e80: 0x8c2262d0  lw          $v0, 0x62D0($at)
    ctx->pc = 0x2a3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25296)));
    // 0x2a3e84: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a3e84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3e88: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3E88u;
    {
        const bool branch_taken_0x2a3e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E88u;
            // 0x2a3e8c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e88) {
            ctx->pc = 0x2A3EB8u;
            goto label_2a3eb8;
        }
    }
    ctx->pc = 0x2A3E90u;
    // 0x2a3e90: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3e94: 0x8c2262d8  lw          $v0, 0x62D8($at)
    ctx->pc = 0x2a3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25304)));
    // 0x2a3e98: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a3e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3e9c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3E9Cu;
    {
        const bool branch_taken_0x2a3e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3E9Cu;
            // 0x2a3ea0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e9c) {
            ctx->pc = 0x2A3EBCu;
            goto label_2a3ebc;
        }
    }
    ctx->pc = 0x2A3EA4u;
    // 0x2a3ea4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3ea8: 0x8c2262e8  lw          $v0, 0x62E8($at)
    ctx->pc = 0x2a3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25320)));
    // 0x2a3eac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3EACu;
    {
        const bool branch_taken_0x2a3eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3eac) {
            ctx->pc = 0x2A3EB8u;
            goto label_2a3eb8;
        }
    }
    ctx->pc = 0x2A3EB4u;
    // 0x2a3eb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a3eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3eb8:
    // 0x2a3eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3ebc:
    // 0x2a3ebc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3EBCu;
    SET_GPR_U32(ctx, 31, 0x2A3EC4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3EC4u; }
        if (ctx->pc != 0x2A3EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3EC4u; }
        if (ctx->pc != 0x2A3EC4u) { return; }
    }
    ctx->pc = 0x2A3EC4u;
label_2a3ec4:
    // 0x2a3ec4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2A3EC4u;
    {
        const bool branch_taken_0x2a3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3ec4) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3ECCu;
label_2a3ecc:
    // 0x2a3ecc: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a3eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a3ed0: 0xc087654  jal         func_21D950
    ctx->pc = 0x2A3ED0u;
    SET_GPR_U32(ctx, 31, 0x2A3ED8u);
    ctx->pc = 0x2A3ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3ED0u;
            // 0x2a3ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3ED8u; }
        if (ctx->pc != 0x2A3ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3ED8u; }
        if (ctx->pc != 0x2A3ED8u) { return; }
    }
    ctx->pc = 0x2A3ED8u;
label_2a3ed8:
    // 0x2a3ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3edc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3EDCu;
    {
        const bool branch_taken_0x2a3edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A3EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3EDCu;
            // 0x2a3ee0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3edc) {
            ctx->pc = 0x2A3EE8u;
            goto label_2a3ee8;
        }
    }
    ctx->pc = 0x2A3EE4u;
    // 0x2a3ee4: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x2a3ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a3ee8:
    // 0x2a3ee8: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A3EE8u;
    {
        const bool branch_taken_0x2a3ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a3ee8) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3EF0u;
    // 0x2a3ef0: 0xc0c707c  jal         func_31C1F0
    ctx->pc = 0x2A3EF0u;
    SET_GPR_U32(ctx, 31, 0x2A3EF8u);
    ctx->pc = 0x31C1F0u;
    if (runtime->hasFunction(0x31C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x31C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3EF8u; }
        if (ctx->pc != 0x2A3EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InstallPause__Fv_0x31c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3EF8u; }
        if (ctx->pc != 0x2A3EF8u) { return; }
    }
    ctx->pc = 0x2A3EF8u;
label_2a3ef8:
    // 0x2a3ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3efc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a3f00: 0xa3829a18  sb          $v0, -0x65E8($gp)
    ctx->pc = 0x2a3f00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941208), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3f04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3f08: 0xa3809a20  sb          $zero, -0x65E0($gp)
    ctx->pc = 0x2a3f08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3f0c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A3F14u);
    ctx->pc = 0x2A3F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F0Cu;
            // 0x2a3f10: 0xa7829a0c  sh          $v0, -0x65F4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941196), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F14u; }
        if (ctx->pc != 0x2A3F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F14u; }
        if (ctx->pc != 0x2A3F14u) { return; }
    }
    ctx->pc = 0x2A3F14u;
label_2a3f14:
    // 0x2a3f14: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2A3F14u;
    {
        const bool branch_taken_0x2a3f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f14) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3F1Cu;
label_2a3f1c:
    // 0x2a3f1c: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x2A3F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A3F24u);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F24u; }
        if (ctx->pc != 0x2A3F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F24u; }
        if (ctx->pc != 0x2A3F24u) { return; }
    }
    ctx->pc = 0x2A3F24u;
label_2a3f24:
    // 0x2a3f24: 0x1c40002a  bgtz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A3F24u;
    {
        const bool branch_taken_0x2a3f24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2a3f24) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3F2Cu;
    // 0x2a3f2c: 0xc0c7054  jal         func_31C150
    ctx->pc = 0x2A3F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A3F34u);
    ctx->pc = 0x31C150u;
    if (runtime->hasFunction(0x31C150u)) {
        auto targetFn = runtime->lookupFunction(0x31C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F34u; }
        if (ctx->pc != 0x2A3F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteInstallThread__Fv_0x31c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F34u; }
        if (ctx->pc != 0x2A3F34u) { return; }
    }
    ctx->pc = 0x2A3F34u;
label_2a3f34:
    // 0x2a3f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3f38: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3F38u;
    SET_GPR_U32(ctx, 31, 0x2A3F40u);
    ctx->pc = 0x2A3F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F38u;
            // 0x2a3f3c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F40u; }
        if (ctx->pc != 0x2A3F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F40u; }
        if (ctx->pc != 0x2A3F40u) { return; }
    }
    ctx->pc = 0x2A3F40u;
label_2a3f40:
    // 0x2a3f40: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A3F40u;
    {
        const bool branch_taken_0x2a3f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f40) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3F48u;
label_2a3f48:
    // 0x2a3f48: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2A3F48u;
    {
        const bool branch_taken_0x2a3f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F48u;
            // 0x2a3f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3f48) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3F50u;
    // 0x2a3f50: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3F50u;
    SET_GPR_U32(ctx, 31, 0x2A3F58u);
    ctx->pc = 0x2A3F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F50u;
            // 0x2a3f54: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F58u; }
        if (ctx->pc != 0x2A3F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F58u; }
        if (ctx->pc != 0x2A3F58u) { return; }
    }
    ctx->pc = 0x2A3F58u;
label_2a3f58:
    // 0x2a3f58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A3F58u;
    {
        const bool branch_taken_0x2a3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f58) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3F60u;
label_2a3f60:
    // 0x2a3f60: 0x87839a14  lh          $v1, -0x65EC($gp)
    ctx->pc = 0x2a3f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941204)));
    // 0x2a3f64: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2a3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x2a3f68: 0x244262a0  addiu       $v0, $v0, 0x62A0
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25248));
    // 0x2a3f6c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x2a3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2a3f70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3f78: 0xc094558  jal         func_251560
    ctx->pc = 0x2A3F78u;
    SET_GPR_U32(ctx, 31, 0x2A3F80u);
    ctx->pc = 0x2A3F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F78u;
            // 0x2a3f7c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F80u; }
        if (ctx->pc != 0x2A3F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F80u; }
        if (ctx->pc != 0x2A3F80u) { return; }
    }
    ctx->pc = 0x2A3F80u;
label_2a3f80:
    // 0x2a3f80: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a3f80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3f84: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A3F84u;
    {
        const bool branch_taken_0x2a3f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f84) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3F8Cu;
    // 0x2a3f8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A3F8Cu;
    {
        const bool branch_taken_0x2a3f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F8Cu;
            // 0x2a3f90: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3f8c) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3F94u;
label_2a3f94:
    // 0x2a3f94: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a3f98: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a3f9c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A3F9Cu;
    SET_GPR_U32(ctx, 31, 0x2A3FA4u);
    ctx->pc = 0x2A3FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3F9Cu;
            // 0x2a3fa0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FA4u; }
        if (ctx->pc != 0x2A3FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FA4u; }
        if (ctx->pc != 0x2A3FA4u) { return; }
    }
    ctx->pc = 0x2A3FA4u;
label_2a3fa4:
    // 0x2a3fa4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3FA4u;
    {
        const bool branch_taken_0x2a3fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3FA4u;
            // 0x2a3fa8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fa4) {
            ctx->pc = 0x2A3FC8u;
            goto label_2a3fc8;
        }
    }
    ctx->pc = 0x2A3FACu;
    // 0x2a3fac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2a3facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2a3fb0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2a3fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a3fb4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2A3FB4u;
    SET_GPR_U32(ctx, 31, 0x2A3FBCu);
    ctx->pc = 0x2A3FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3FB4u;
            // 0x2a3fb8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FBCu; }
        if (ctx->pc != 0x2A3FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FBCu; }
        if (ctx->pc != 0x2A3FBCu) { return; }
    }
    ctx->pc = 0x2A3FBCu;
label_2a3fbc:
    // 0x2a3fbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3FBCu;
    {
        const bool branch_taken_0x2a3fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3fbc) {
            ctx->pc = 0x2A3FD0u;
            goto label_2a3fd0;
        }
    }
    ctx->pc = 0x2A3FC4u;
    // 0x2a3fc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a3fc8:
    // 0x2a3fc8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2A3FC8u;
    SET_GPR_U32(ctx, 31, 0x2A3FD0u);
    ctx->pc = 0x2A3FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3FC8u;
            // 0x2a3fcc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FD0u; }
        if (ctx->pc != 0x2A3FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3FD0u; }
        if (ctx->pc != 0x2A3FD0u) { return; }
    }
    ctx->pc = 0x2A3FD0u;
label_2a3fd0:
    // 0x2a3fd0: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x2a3fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2a3fd4:
    // 0x2a3fd4: 0x14200188  bnez        $at, . + 4 + (0x188 << 2)
    ctx->pc = 0x2A3FD4u;
    {
        const bool branch_taken_0x2a3fd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3FD4u;
            // 0x2a3fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fd4) {
            ctx->pc = 0x2A45F8u;
            goto label_2a45f8;
        }
    }
    ctx->pc = 0x2A3FDCu;
    // 0x2a3fdc: 0x2e01000b  sltiu       $at, $s0, 0xB
    ctx->pc = 0x2a3fdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2a3fe0: 0x10200182  beqz        $at, . + 4 + (0x182 << 2)
    ctx->pc = 0x2A3FE0u;
    {
        const bool branch_taken_0x2a3fe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3FE0u;
            // 0x2a3fe4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fe0) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A3FE8u;
    // 0x2a3fe8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a3fec: 0x2463e2d0  addiu       $v1, $v1, -0x1D30
    ctx->pc = 0x2a3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959824));
    // 0x2a3ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3ff8: 0x400008  jr          $v0
    ctx->pc = 0x2A3FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4000u: goto label_2a4000;
            case 0x2A4008u: goto label_2a4008;
            case 0x2A4114u: goto label_2a4114;
            case 0x2A430Cu: goto label_2a430c;
            case 0x2A4334u: goto label_2a4334;
            case 0x2A43E0u: goto label_2a43e0;
            case 0x2A44B8u: goto label_2a44b8;
            case 0x2A4500u: goto label_2a4500;
            case 0x2A4548u: goto label_2a4548;
            case 0x2A455Cu: goto label_2a455c;
            case 0x2A45ECu: goto label_2a45ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4000u;
label_2a4000:
    // 0x2a4000: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2A4000u;
    {
        const bool branch_taken_0x2a4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4000u;
            // 0x2a4004: 0xa3809a20  sb          $zero, -0x65E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4000) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4008u;
label_2a4008:
    // 0x2a4008: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a400c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4010: 0xa3829a20  sb          $v0, -0x65E0($gp)
    ctx->pc = 0x2a4010u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a4014: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4014u;
    SET_GPR_U32(ctx, 31, 0x2A401Cu);
    ctx->pc = 0x2A4018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4014u;
            // 0x2a4018: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A401Cu; }
        if (ctx->pc != 0x2A401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A401Cu; }
        if (ctx->pc != 0x2A401Cu) { return; }
    }
    ctx->pc = 0x2A401Cu;
label_2a401c:
    // 0x2a401c: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4020: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a4020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4024: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4028: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a4028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a402c: 0x8c2262d0  lw          $v0, 0x62D0($at)
    ctx->pc = 0x2a402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25296)));
    // 0x2a4030: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A4030u;
    {
        const bool branch_taken_0x2a4030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4030u;
            // 0x2a4034: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4030) {
            ctx->pc = 0x2A406Cu;
            goto label_2a406c;
        }
    }
    ctx->pc = 0x2A4038u;
    // 0x2a4038: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a403c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A403Cu;
    SET_GPR_U32(ctx, 31, 0x2A4044u);
    ctx->pc = 0x2A4040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A403Cu;
            // 0x2a4040: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4044u; }
        if (ctx->pc != 0x2A4044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4044u; }
        if (ctx->pc != 0x2A4044u) { return; }
    }
    ctx->pc = 0x2A4044u;
label_2a4044:
    // 0x2a4044: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4048: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a404c: 0x8c2362d4  lw          $v1, 0x62D4($at)
    ctx->pc = 0x2a404cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25300)));
    // 0x2a4050: 0x14620166  bne         $v1, $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x2A4050u;
    {
        const bool branch_taken_0x2a4050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4050) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4058u;
    // 0x2a4058: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a405c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A405Cu;
    SET_GPR_U32(ctx, 31, 0x2A4064u);
    ctx->pc = 0x2A4060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A405Cu;
            // 0x2a4060: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4064u; }
        if (ctx->pc != 0x2A4064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4064u; }
        if (ctx->pc != 0x2A4064u) { return; }
    }
    ctx->pc = 0x2A4064u;
label_2a4064:
    // 0x2a4064: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x2A4064u;
    {
        const bool branch_taken_0x2a4064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4064) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A406Cu;
label_2a406c:
    // 0x2a406c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2A406Cu;
    {
        const bool branch_taken_0x2a406c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a406c) {
            ctx->pc = 0x2A409Cu;
            goto label_2a409c;
        }
    }
    ctx->pc = 0x2A4074u;
    // 0x2a4074: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a407c: 0x8c2362d4  lw          $v1, 0x62D4($at)
    ctx->pc = 0x2a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25300)));
    // 0x2a4080: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4080u;
    {
        const bool branch_taken_0x2a4080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4080) {
            ctx->pc = 0x2A409Cu;
            goto label_2a409c;
        }
    }
    ctx->pc = 0x2A4088u;
    // 0x2a4088: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a408c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A408Cu;
    SET_GPR_U32(ctx, 31, 0x2A4094u);
    ctx->pc = 0x2A4090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A408Cu;
            // 0x2a4090: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4094u; }
        if (ctx->pc != 0x2A4094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4094u; }
        if (ctx->pc != 0x2A4094u) { return; }
    }
    ctx->pc = 0x2A4094u;
label_2a4094:
    // 0x2a4094: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x2A4094u;
    {
        const bool branch_taken_0x2a4094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4094) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A409Cu;
label_2a409c:
    // 0x2a409c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a409cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a40a0: 0x8c2262d8  lw          $v0, 0x62D8($at)
    ctx->pc = 0x2a40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25304)));
    // 0x2a40a4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a40a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a40a8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A40A8u;
    {
        const bool branch_taken_0x2a40a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40a8) {
            ctx->pc = 0x2A40C4u;
            goto label_2a40c4;
        }
    }
    ctx->pc = 0x2A40B0u;
    // 0x2a40b0: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a40b4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A40B4u;
    SET_GPR_U32(ctx, 31, 0x2A40BCu);
    ctx->pc = 0x2A40B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A40B4u;
            // 0x2a40b8: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40BCu; }
        if (ctx->pc != 0x2A40BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40BCu; }
        if (ctx->pc != 0x2A40BCu) { return; }
    }
    ctx->pc = 0x2A40BCu;
label_2a40bc:
    // 0x2a40bc: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x2A40BCu;
    {
        const bool branch_taken_0x2a40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40bc) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A40C4u;
label_2a40c4:
    // 0x2a40c4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A40C4u;
    {
        const bool branch_taken_0x2a40c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A40C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A40C4u;
            // 0x2a40c8: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a40c4) {
            ctx->pc = 0x2A40E0u;
            goto label_2a40e0;
        }
    }
    ctx->pc = 0x2A40CCu;
    // 0x2a40cc: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a40ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a40d0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A40D0u;
    SET_GPR_U32(ctx, 31, 0x2A40D8u);
    ctx->pc = 0x2A40D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A40D0u;
            // 0x2a40d4: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40D8u; }
        if (ctx->pc != 0x2A40D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40D8u; }
        if (ctx->pc != 0x2A40D8u) { return; }
    }
    ctx->pc = 0x2A40D8u;
label_2a40d8:
    // 0x2a40d8: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x2A40D8u;
    {
        const bool branch_taken_0x2a40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40d8) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A40E0u;
label_2a40e0:
    // 0x2a40e0: 0x8c2262dc  lw          $v0, 0x62DC($at)
    ctx->pc = 0x2a40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25308)));
    // 0x2a40e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A40E4u;
    {
        const bool branch_taken_0x2a40e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a40e4) {
            ctx->pc = 0x2A4100u;
            goto label_2a4100;
        }
    }
    ctx->pc = 0x2A40ECu;
    // 0x2a40ec: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a40f0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A40F0u;
    SET_GPR_U32(ctx, 31, 0x2A40F8u);
    ctx->pc = 0x2A40F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A40F0u;
            // 0x2a40f4: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40F8u; }
        if (ctx->pc != 0x2A40F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A40F8u; }
        if (ctx->pc != 0x2A40F8u) { return; }
    }
    ctx->pc = 0x2A40F8u;
label_2a40f8:
    // 0x2a40f8: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2A40F8u;
    {
        const bool branch_taken_0x2a40f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40f8) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4100u;
label_2a4100:
    // 0x2a4100: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4104: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A4104u;
    SET_GPR_U32(ctx, 31, 0x2A410Cu);
    ctx->pc = 0x2A4108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4104u;
            // 0x2a4108: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A410Cu; }
        if (ctx->pc != 0x2A410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A410Cu; }
        if (ctx->pc != 0x2A410Cu) { return; }
    }
    ctx->pc = 0x2A410Cu;
label_2a410c:
    // 0x2a410c: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x2A410Cu;
    {
        const bool branch_taken_0x2a410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a410c) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4114u;
label_2a4114:
    // 0x2a4114: 0x87829a10  lh          $v0, -0x65F0($gp)
    ctx->pc = 0x2a4114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941200)));
    // 0x2a4118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a411c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A411Cu;
    {
        const bool branch_taken_0x2a411c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A4120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A411Cu;
            // 0x2a4120: 0xa3839a20  sb          $v1, -0x65E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a411c) {
            ctx->pc = 0x2A415Cu;
            goto label_2a415c;
        }
    }
    ctx->pc = 0x2A4124u;
    // 0x2a4124: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4128: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4128u;
    SET_GPR_U32(ctx, 31, 0x2A4130u);
    ctx->pc = 0x2A412Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4128u;
            // 0x2a412c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4130u; }
        if (ctx->pc != 0x2A4130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4130u; }
        if (ctx->pc != 0x2A4130u) { return; }
    }
    ctx->pc = 0x2A4130u;
label_2a4130:
    // 0x2a4130: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4134: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a4134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4138: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a4138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a413c: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4140: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A4140u;
    SET_GPR_U32(ctx, 31, 0x2A4148u);
    ctx->pc = 0x2A4144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4140u;
            // 0x2a4144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4148u; }
        if (ctx->pc != 0x2A4148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4148u; }
        if (ctx->pc != 0x2A4148u) { return; }
    }
    ctx->pc = 0x2A4148u;
label_2a4148:
    // 0x2a4148: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a414c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2A414Cu;
    SET_GPR_U32(ctx, 31, 0x2A4154u);
    ctx->pc = 0x2A4150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A414Cu;
            // 0x2a4150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4154u; }
        if (ctx->pc != 0x2A4154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4154u; }
        if (ctx->pc != 0x2A4154u) { return; }
    }
    ctx->pc = 0x2A4154u;
label_2a4154:
    // 0x2a4154: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x2A4154u;
    {
        const bool branch_taken_0x2a4154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4154) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A415Cu;
label_2a415c:
    // 0x2a415c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a415cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4160: 0x8c2262d0  lw          $v0, 0x62D0($at)
    ctx->pc = 0x2a4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25296)));
    // 0x2a4164: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A4164u;
    {
        const bool branch_taken_0x2a4164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4164u;
            // 0x2a4168: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4164) {
            ctx->pc = 0x2A41CCu;
            goto label_2a41cc;
        }
    }
    ctx->pc = 0x2A416Cu;
    // 0x2a416c: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4170: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4170u;
    SET_GPR_U32(ctx, 31, 0x2A4178u);
    ctx->pc = 0x2A4174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4170u;
            // 0x2a4174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4178u; }
        if (ctx->pc != 0x2A4178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4178u; }
        if (ctx->pc != 0x2A4178u) { return; }
    }
    ctx->pc = 0x2A4178u;
label_2a4178:
    // 0x2a4178: 0x8f839a28  lw          $v1, -0x65D8($gp)
    ctx->pc = 0x2a4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a417c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4180: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4184: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a4184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4188: 0xac64014c  sw          $a0, 0x14C($v1)
    ctx->pc = 0x2a4188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 4));
    // 0x2a418c: 0x8c2362d4  lw          $v1, 0x62D4($at)
    ctx->pc = 0x2a418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25300)));
    // 0x2a4190: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4190u;
    {
        const bool branch_taken_0x2a4190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4190) {
            ctx->pc = 0x2A41A4u;
            goto label_2a41a4;
        }
    }
    ctx->pc = 0x2A4198u;
    // 0x2a4198: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a419c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A419Cu;
    SET_GPR_U32(ctx, 31, 0x2A41A4u);
    ctx->pc = 0x2A41A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A419Cu;
            // 0x2a41a0: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41A4u; }
        if (ctx->pc != 0x2A41A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41A4u; }
        if (ctx->pc != 0x2A41A4u) { return; }
    }
    ctx->pc = 0x2A41A4u;
label_2a41a4:
    // 0x2a41a4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a41a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a41a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a41ac: 0x8c2362d4  lw          $v1, 0x62D4($at)
    ctx->pc = 0x2a41acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25300)));
    // 0x2a41b0: 0x1462010e  bne         $v1, $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x2A41B0u;
    {
        const bool branch_taken_0x2a41b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a41b0) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A41B8u;
    // 0x2a41b8: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a41bc: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A41BCu;
    SET_GPR_U32(ctx, 31, 0x2A41C4u);
    ctx->pc = 0x2A41C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A41BCu;
            // 0x2a41c0: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41C4u; }
        if (ctx->pc != 0x2A41C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41C4u; }
        if (ctx->pc != 0x2A41C4u) { return; }
    }
    ctx->pc = 0x2A41C4u;
label_2a41c4:
    // 0x2a41c4: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x2A41C4u;
    {
        const bool branch_taken_0x2a41c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41c4) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A41CCu;
label_2a41cc:
    // 0x2a41cc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a41ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a41d0: 0x8c2262d8  lw          $v0, 0x62D8($at)
    ctx->pc = 0x2a41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25304)));
    // 0x2a41d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a41d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a41d8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2A41D8u;
    {
        const bool branch_taken_0x2a41d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41d8) {
            ctx->pc = 0x2A4208u;
            goto label_2a4208;
        }
    }
    ctx->pc = 0x2A41E0u;
    // 0x2a41e0: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a41e4: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A41E4u;
    SET_GPR_U32(ctx, 31, 0x2A41ECu);
    ctx->pc = 0x2A41E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A41E4u;
            // 0x2a41e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41ECu; }
        if (ctx->pc != 0x2A41ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41ECu; }
        if (ctx->pc != 0x2A41ECu) { return; }
    }
    ctx->pc = 0x2A41ECu;
label_2a41ec:
    // 0x2a41ec: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a41f0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A41F0u;
    SET_GPR_U32(ctx, 31, 0x2A41F8u);
    ctx->pc = 0x2A41F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A41F0u;
            // 0x2a41f4: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41F8u; }
        if (ctx->pc != 0x2A41F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A41F8u; }
        if (ctx->pc != 0x2A41F8u) { return; }
    }
    ctx->pc = 0x2A41F8u;
label_2a41f8:
    // 0x2a41f8: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a41fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4200: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x2A4200u;
    {
        const bool branch_taken_0x2a4200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4200u;
            // 0x2a4204: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4200) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4208u;
label_2a4208:
    // 0x2a4208: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A4208u;
    {
        const bool branch_taken_0x2a4208 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A420Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4208u;
            // 0x2a420c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4208) {
            ctx->pc = 0x2A4264u;
            goto label_2a4264;
        }
    }
    ctx->pc = 0x2A4210u;
    // 0x2a4210: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4214: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4214u;
    SET_GPR_U32(ctx, 31, 0x2A421Cu);
    ctx->pc = 0x2A4218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4214u;
            // 0x2a4218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A421Cu; }
        if (ctx->pc != 0x2A421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A421Cu; }
        if (ctx->pc != 0x2A421Cu) { return; }
    }
    ctx->pc = 0x2A421Cu;
label_2a421c:
    // 0x2a421c: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4220: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a4220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4224: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a4224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a4228: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a422c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A422Cu;
    SET_GPR_U32(ctx, 31, 0x2A4234u);
    ctx->pc = 0x2A4230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A422Cu;
            // 0x2a4230: 0x24050067  addiu       $a1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4234u; }
        if (ctx->pc != 0x2A4234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4234u; }
        if (ctx->pc != 0x2A4234u) { return; }
    }
    ctx->pc = 0x2A4234u;
label_2a4234:
    // 0x2a4234: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4238: 0x2402fc18  addiu       $v0, $zero, -0x3E8
    ctx->pc = 0x2a4238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x2a423c: 0x8c2362d8  lw          $v1, 0x62D8($at)
    ctx->pc = 0x2a423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25304)));
    // 0x2a4240: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4240u;
    {
        const bool branch_taken_0x2a4240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4240u;
            // 0x2a4244: 0x2402fc17  addiu       $v0, $zero, -0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4240) {
            ctx->pc = 0x2A4250u;
            goto label_2a4250;
        }
    }
    ctx->pc = 0x2A4248u;
    // 0x2a4248: 0x146200e8  bne         $v1, $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2A4248u;
    {
        const bool branch_taken_0x2a4248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4248) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4250u;
label_2a4250:
    // 0x2a4250: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4254: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A4254u;
    SET_GPR_U32(ctx, 31, 0x2A425Cu);
    ctx->pc = 0x2A4258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4254u;
            // 0x2a4258: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A425Cu; }
        if (ctx->pc != 0x2A425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A425Cu; }
        if (ctx->pc != 0x2A425Cu) { return; }
    }
    ctx->pc = 0x2A425Cu;
label_2a425c:
    // 0x2a425c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2A425Cu;
    {
        const bool branch_taken_0x2a425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a425c) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4264u;
label_2a4264:
    // 0x2a4264: 0x8c2262dc  lw          $v0, 0x62DC($at)
    ctx->pc = 0x2a4264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25308)));
    // 0x2a4268: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4268u;
    {
        const bool branch_taken_0x2a4268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4268) {
            ctx->pc = 0x2A429Cu;
            goto label_2a429c;
        }
    }
    ctx->pc = 0x2A4270u;
    // 0x2a4270: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4274: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4274u;
    SET_GPR_U32(ctx, 31, 0x2A427Cu);
    ctx->pc = 0x2A4278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4274u;
            // 0x2a4278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A427Cu; }
        if (ctx->pc != 0x2A427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A427Cu; }
        if (ctx->pc != 0x2A427Cu) { return; }
    }
    ctx->pc = 0x2A427Cu;
label_2a427c:
    // 0x2a427c: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4280: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a4280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4284: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a4284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a4288: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a428c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A428Cu;
    SET_GPR_U32(ctx, 31, 0x2A4294u);
    ctx->pc = 0x2A4290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A428Cu;
            // 0x2a4290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4294u; }
        if (ctx->pc != 0x2A4294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4294u; }
        if (ctx->pc != 0x2A4294u) { return; }
    }
    ctx->pc = 0x2A4294u;
label_2a4294:
    // 0x2a4294: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2A4294u;
    {
        const bool branch_taken_0x2a4294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4294) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A429Cu;
label_2a429c:
    // 0x2a429c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A429Cu;
    {
        const bool branch_taken_0x2a429c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a429c) {
            ctx->pc = 0x2A42D0u;
            goto label_2a42d0;
        }
    }
    ctx->pc = 0x2A42A4u;
    // 0x2a42a4: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a42a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a42a8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A42A8u;
    SET_GPR_U32(ctx, 31, 0x2A42B0u);
    ctx->pc = 0x2A42ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42A8u;
            // 0x2a42ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42B0u; }
        if (ctx->pc != 0x2A42B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42B0u; }
        if (ctx->pc != 0x2A42B0u) { return; }
    }
    ctx->pc = 0x2A42B0u;
label_2a42b0:
    // 0x2a42b0: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a42b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a42b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a42b8: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a42bc: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a42c0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A42C0u;
    SET_GPR_U32(ctx, 31, 0x2A42C8u);
    ctx->pc = 0x2A42C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42C0u;
            // 0x2a42c4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42C8u; }
        if (ctx->pc != 0x2A42C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42C8u; }
        if (ctx->pc != 0x2A42C8u) { return; }
    }
    ctx->pc = 0x2A42C8u;
label_2a42c8:
    // 0x2a42c8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2A42C8u;
    {
        const bool branch_taken_0x2a42c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a42c8) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A42D0u;
label_2a42d0:
    // 0x2a42d0: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a42d4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a42d8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A42D8u;
    SET_GPR_U32(ctx, 31, 0x2A42E0u);
    ctx->pc = 0x2A42DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42D8u;
            // 0x2a42dc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42E0u; }
        if (ctx->pc != 0x2A42E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42E0u; }
        if (ctx->pc != 0x2A42E0u) { return; }
    }
    ctx->pc = 0x2A42E0u;
label_2a42e0:
    // 0x2a42e0: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a42e4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A42E4u;
    SET_GPR_U32(ctx, 31, 0x2A42ECu);
    ctx->pc = 0x2A42E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42E4u;
            // 0x2a42e8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42ECu; }
        if (ctx->pc != 0x2A42ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42ECu; }
        if (ctx->pc != 0x2A42ECu) { return; }
    }
    ctx->pc = 0x2A42ECu;
label_2a42ec:
    // 0x2a42ec: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a42f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a42f4: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a42f8: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a42fc: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2A42FCu;
    SET_GPR_U32(ctx, 31, 0x2A4304u);
    ctx->pc = 0x2A4300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42FCu;
            // 0x2a4300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4304u; }
        if (ctx->pc != 0x2A4304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4304u; }
        if (ctx->pc != 0x2A4304u) { return; }
    }
    ctx->pc = 0x2A4304u;
label_2a4304:
    // 0x2a4304: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2A4304u;
    {
        const bool branch_taken_0x2a4304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4304) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A430Cu;
label_2a430c:
    // 0x2a430c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a4310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a4310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4314: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2a4314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a4318: 0xa3809a20  sb          $zero, -0x65E0($gp)
    ctx->pc = 0x2a4318u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a431c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a431cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a4320: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2a4320u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2a4324: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2A4324u;
    SET_GPR_U32(ctx, 31, 0x2A432Cu);
    ctx->pc = 0x2A4328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4324u;
            // 0x2a4328: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A432Cu; }
        if (ctx->pc != 0x2A432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A432Cu; }
        if (ctx->pc != 0x2A432Cu) { return; }
    }
    ctx->pc = 0x2A432Cu;
label_2a432c:
    // 0x2a432c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2A432Cu;
    {
        const bool branch_taken_0x2a432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a432c) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4334u;
label_2a4334:
    // 0x2a4334: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4338: 0x8c2462f0  lw          $a0, 0x62F0($at)
    ctx->pc = 0x2a4338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25328)));
    // 0x2a433c: 0xc0c6ffc  jal         func_31BFF0
    ctx->pc = 0x2A433Cu;
    SET_GPR_U32(ctx, 31, 0x2A4344u);
    ctx->pc = 0x2A4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A433Cu;
            // 0x2a4340: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BFF0u;
    if (runtime->hasFunction(0x31BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x31BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4344u; }
        if (ctx->pc != 0x2A4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateInstallThread__FP1i_0x31bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4344u; }
        if (ctx->pc != 0x2A4344u) { return; }
    }
    ctx->pc = 0x2A4344u;
label_2a4344:
    // 0x2a4344: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A4344u;
    {
        const bool branch_taken_0x2a4344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4344) {
            ctx->pc = 0x2A43B4u;
            goto label_2a43b4;
        }
    }
    ctx->pc = 0x2A434Cu;
    // 0x2a434c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a434cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a4350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4354: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a4354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a435c: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2A435Cu;
    SET_GPR_U32(ctx, 31, 0x2A4364u);
    ctx->pc = 0x2A4360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A435Cu;
            // 0x2a4360: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4364u; }
        if (ctx->pc != 0x2A4364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4364u; }
        if (ctx->pc != 0x2A4364u) { return; }
    }
    ctx->pc = 0x2A4364u;
label_2a4364:
    // 0x2a4364: 0x8f849a2c  lw          $a0, -0x65D4($gp)
    ctx->pc = 0x2a4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941228)));
    // 0x2a4368: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a436c: 0xac2062ec  sw          $zero, 0x62EC($at)
    ctx->pc = 0x2a436cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25324), GPR_U32(ctx, 0));
    // 0x2a4370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4374: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4378: 0xa3829a18  sb          $v0, -0x65E8($gp)
    ctx->pc = 0x2a4378u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941208), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a437c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4380: 0xac2262e4  sw          $v0, 0x62E4($at)
    ctx->pc = 0x2a4380u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25316), GPR_U32(ctx, 2));
    // 0x2a4384: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4384u;
    SET_GPR_U32(ctx, 31, 0x2A438Cu);
    ctx->pc = 0x2A4388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4384u;
            // 0x2a4388: 0xa3809a20  sb          $zero, -0x65E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A438Cu; }
        if (ctx->pc != 0x2A438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A438Cu; }
        if (ctx->pc != 0x2A438Cu) { return; }
    }
    ctx->pc = 0x2A438Cu;
label_2a438c:
    // 0x2a438c: 0x8f829a2c  lw          $v0, -0x65D4($gp)
    ctx->pc = 0x2a438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941228)));
    // 0x2a4390: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2a4390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4394: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a4394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a4398: 0x8f849a2c  lw          $a0, -0x65D4($gp)
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941228)));
    // 0x2a439c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A439Cu;
    SET_GPR_U32(ctx, 31, 0x2A43A4u);
    ctx->pc = 0x2A43A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A439Cu;
            // 0x2a43a0: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43A4u; }
        if (ctx->pc != 0x2A43A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43A4u; }
        if (ctx->pc != 0x2A43A4u) { return; }
    }
    ctx->pc = 0x2A43A4u;
label_2a43a4:
    // 0x2a43a4: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x2A43A4u;
    SET_GPR_U32(ctx, 31, 0x2A43ACu);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43ACu; }
        if (ctx->pc != 0x2A43ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43ACu; }
        if (ctx->pc != 0x2A43ACu) { return; }
    }
    ctx->pc = 0x2A43ACu;
label_2a43ac:
    // 0x2a43ac: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2A43ACu;
    {
        const bool branch_taken_0x2a43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a43ac) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A43B4u;
label_2a43b4:
    // 0x2a43b4: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a43b8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A43B8u;
    SET_GPR_U32(ctx, 31, 0x2A43C0u);
    ctx->pc = 0x2A43BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43B8u;
            // 0x2a43bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43C0u; }
        if (ctx->pc != 0x2A43C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43C0u; }
        if (ctx->pc != 0x2A43C0u) { return; }
    }
    ctx->pc = 0x2A43C0u;
label_2a43c0:
    // 0x2a43c0: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a43c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a43c8: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a43cc: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a43d0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A43D0u;
    SET_GPR_U32(ctx, 31, 0x2A43D8u);
    ctx->pc = 0x2A43D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43D0u;
            // 0x2a43d4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43D8u; }
        if (ctx->pc != 0x2A43D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43D8u; }
        if (ctx->pc != 0x2A43D8u) { return; }
    }
    ctx->pc = 0x2A43D8u;
label_2a43d8:
    // 0x2a43d8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2A43D8u;
    {
        const bool branch_taken_0x2a43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A43DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43D8u;
            // 0x2a43dc: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43d8) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A43E0u;
label_2a43e0:
    // 0x2a43e0: 0xc0c7054  jal         func_31C150
    ctx->pc = 0x2A43E0u;
    SET_GPR_U32(ctx, 31, 0x2A43E8u);
    ctx->pc = 0x31C150u;
    if (runtime->hasFunction(0x31C150u)) {
        auto targetFn = runtime->lookupFunction(0x31C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43E8u; }
        if (ctx->pc != 0x2A43E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteInstallThread__Fv_0x31c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43E8u; }
        if (ctx->pc != 0x2A43E8u) { return; }
    }
    ctx->pc = 0x2A43E8u;
label_2a43e8:
    // 0x2a43e8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2a43e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2a43ec: 0xc0c6e90  jal         func_31BA40
    ctx->pc = 0x2A43ECu;
    SET_GPR_U32(ctx, 31, 0x2A43F4u);
    ctx->pc = 0x2A43F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43ECu;
            // 0x2a43f0: 0x248462d4  addiu       $a0, $a0, 0x62D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43F4u; }
        if (ctx->pc != 0x2A43F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A43F4u; }
        if (ctx->pc != 0x2A43F4u) { return; }
    }
    ctx->pc = 0x2A43F4u;
label_2a43f4:
    // 0x2a43f4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a43f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a43f8: 0xc0a9340  jal         func_2A4D00
    ctx->pc = 0x2A43F8u;
    SET_GPR_U32(ctx, 31, 0x2A4400u);
    ctx->pc = 0x2A43FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43F8u;
            // 0x2a43fc: 0xac2262d0  sw          $v0, 0x62D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4D00u;
    if (runtime->hasFunction(0x2A4D00u)) {
        auto targetFn = runtime->lookupFunction(0x2A4D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4400u; }
        if (ctx->pc != 0x2A4400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstallForTitle__Fv_0x2a4d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4400u; }
        if (ctx->pc != 0x2A4400u) { return; }
    }
    ctx->pc = 0x2A4400u;
label_2a4400:
    // 0x2a4400: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4404: 0xc0c6f98  jal         func_31BE60
    ctx->pc = 0x2A4404u;
    SET_GPR_U32(ctx, 31, 0x2A440Cu);
    ctx->pc = 0x2A4408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4404u;
            // 0x2a4408: 0xac2262d8  sw          $v0, 0x62D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BE60u;
    if (runtime->hasFunction(0x31BE60u)) {
        auto targetFn = runtime->lookupFunction(0x31BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A440Cu; }
        if (ctx->pc != 0x2A440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInstallSpace__Fv_0x31be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A440Cu; }
        if (ctx->pc != 0x2A440Cu) { return; }
    }
    ctx->pc = 0x2A440Cu;
label_2a440c:
    // 0x2a440c: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a440cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4410: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4414: 0xac2262dc  sw          $v0, 0x62DC($at)
    ctx->pc = 0x2a4414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25308), GPR_U32(ctx, 2));
    // 0x2a4418: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2a4418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a441c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4420: 0xa3809a18  sb          $zero, -0x65E8($gp)
    ctx->pc = 0x2a4420u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4424: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4424u;
    SET_GPR_U32(ctx, 31, 0x2A442Cu);
    ctx->pc = 0x2A4428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4424u;
            // 0x2a4428: 0xa3829a20  sb          $v0, -0x65E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A442Cu; }
        if (ctx->pc != 0x2A442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A442Cu; }
        if (ctx->pc != 0x2A442Cu) { return; }
    }
    ctx->pc = 0x2A442Cu;
label_2a442c:
    // 0x2a442c: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4430: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a4430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4434: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a4434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a4438: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a443c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2A443Cu;
    SET_GPR_U32(ctx, 31, 0x2A4444u);
    ctx->pc = 0x2A4440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A443Cu;
            // 0x2a4440: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4444u; }
        if (ctx->pc != 0x2A4444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4444u; }
        if (ctx->pc != 0x2A4444u) { return; }
    }
    ctx->pc = 0x2A4444u;
label_2a4444:
    // 0x2a4444: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a4444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a4448: 0x8c2362e8  lw          $v1, 0x62E8($at)
    ctx->pc = 0x2a4448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25320)));
    // 0x2a444c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A444Cu;
    {
        const bool branch_taken_0x2a444c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2A4450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A444Cu;
            // 0x2a4450: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a444c) {
            ctx->pc = 0x2A4468u;
            goto label_2a4468;
        }
    }
    ctx->pc = 0x2A4454u;
    // 0x2a4454: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4458: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A4458u;
    SET_GPR_U32(ctx, 31, 0x2A4460u);
    ctx->pc = 0x2A445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4458u;
            // 0x2a445c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4460u; }
        if (ctx->pc != 0x2A4460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4460u; }
        if (ctx->pc != 0x2A4460u) { return; }
    }
    ctx->pc = 0x2A4460u;
label_2a4460:
    // 0x2a4460: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2A4460u;
    {
        const bool branch_taken_0x2a4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4460) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4468u;
label_2a4468:
    // 0x2a4468: 0x8c2262d0  lw          $v0, 0x62D0($at)
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25296)));
    // 0x2a446c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a446cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4470: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4470u;
    {
        const bool branch_taken_0x2a4470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4470u;
            // 0x2a4474: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4470) {
            ctx->pc = 0x2A44A4u;
            goto label_2a44a4;
        }
    }
    ctx->pc = 0x2A4478u;
    // 0x2a4478: 0x8c2262d8  lw          $v0, 0x62D8($at)
    ctx->pc = 0x2a4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25304)));
    // 0x2a447c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2a447cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4480: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4480u;
    {
        const bool branch_taken_0x2a4480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4480) {
            ctx->pc = 0x2A44A4u;
            goto label_2a44a4;
        }
    }
    ctx->pc = 0x2A4488u;
    // 0x2a4488: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4488u;
    {
        const bool branch_taken_0x2a4488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4488) {
            ctx->pc = 0x2A44A4u;
            goto label_2a44a4;
        }
    }
    ctx->pc = 0x2A4490u;
    // 0x2a4490: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4494: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A4494u;
    SET_GPR_U32(ctx, 31, 0x2A449Cu);
    ctx->pc = 0x2A4498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4494u;
            // 0x2a4498: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A449Cu; }
        if (ctx->pc != 0x2A449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A449Cu; }
        if (ctx->pc != 0x2A449Cu) { return; }
    }
    ctx->pc = 0x2A449Cu;
label_2a449c:
    // 0x2a449c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2A449Cu;
    {
        const bool branch_taken_0x2a449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a449c) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A44A4u;
label_2a44a4:
    // 0x2a44a4: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a44a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a44a8: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A44A8u;
    SET_GPR_U32(ctx, 31, 0x2A44B0u);
    ctx->pc = 0x2A44ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44A8u;
            // 0x2a44ac: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44B0u; }
        if (ctx->pc != 0x2A44B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44B0u; }
        if (ctx->pc != 0x2A44B0u) { return; }
    }
    ctx->pc = 0x2A44B0u;
label_2a44b0:
    // 0x2a44b0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2A44B0u;
    {
        const bool branch_taken_0x2a44b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a44b0) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A44B8u;
label_2a44b8:
    // 0x2a44b8: 0xc0c707c  jal         func_31C1F0
    ctx->pc = 0x2A44B8u;
    SET_GPR_U32(ctx, 31, 0x2A44C0u);
    ctx->pc = 0x31C1F0u;
    if (runtime->hasFunction(0x31C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x31C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44C0u; }
        if (ctx->pc != 0x2A44C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InstallPause__Fv_0x31c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44C0u; }
        if (ctx->pc != 0x2A44C0u) { return; }
    }
    ctx->pc = 0x2A44C0u;
label_2a44c0:
    // 0x2a44c0: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a44c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a44c4: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A44C4u;
    SET_GPR_U32(ctx, 31, 0x2A44CCu);
    ctx->pc = 0x2A44C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44C4u;
            // 0x2a44c8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44CCu; }
        if (ctx->pc != 0x2A44CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44CCu; }
        if (ctx->pc != 0x2A44CCu) { return; }
    }
    ctx->pc = 0x2A44CCu;
label_2a44cc:
    // 0x2a44cc: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a44d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a44d4: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a44d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a44d8: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a44dc: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A44DCu;
    SET_GPR_U32(ctx, 31, 0x2A44E4u);
    ctx->pc = 0x2A44E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44DCu;
            // 0x2a44e0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44E4u; }
        if (ctx->pc != 0x2A44E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44E4u; }
        if (ctx->pc != 0x2A44E4u) { return; }
    }
    ctx->pc = 0x2A44E4u;
label_2a44e4:
    // 0x2a44e4: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a44e8: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2A44E8u;
    SET_GPR_U32(ctx, 31, 0x2A44F0u);
    ctx->pc = 0x2A44ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44E8u;
            // 0x2a44ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44F0u; }
        if (ctx->pc != 0x2A44F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44F0u; }
        if (ctx->pc != 0x2A44F0u) { return; }
    }
    ctx->pc = 0x2A44F0u;
label_2a44f0:
    // 0x2a44f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a44f4: 0xa3809a18  sb          $zero, -0x65E8($gp)
    ctx->pc = 0x2a44f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a44f8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A44F8u;
    {
        const bool branch_taken_0x2a44f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44F8u;
            // 0x2a44fc: 0xa3829a20  sb          $v0, -0x65E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44f8) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4500u;
label_2a4500:
    // 0x2a4500: 0xc0c707c  jal         func_31C1F0
    ctx->pc = 0x2A4500u;
    SET_GPR_U32(ctx, 31, 0x2A4508u);
    ctx->pc = 0x31C1F0u;
    if (runtime->hasFunction(0x31C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x31C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4508u; }
        if (ctx->pc != 0x2A4508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InstallPause__Fv_0x31c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4508u; }
        if (ctx->pc != 0x2A4508u) { return; }
    }
    ctx->pc = 0x2A4508u;
label_2a4508:
    // 0x2a4508: 0xc0c7098  jal         func_31C260
    ctx->pc = 0x2A4508u;
    SET_GPR_U32(ctx, 31, 0x2A4510u);
    ctx->pc = 0x31C260u;
    if (runtime->hasFunction(0x31C260u)) {
        auto targetFn = runtime->lookupFunction(0x31C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4510u; }
        if (ctx->pc != 0x2A4510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InstallCancel__Fv_0x31c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4510u; }
        if (ctx->pc != 0x2A4510u) { return; }
    }
    ctx->pc = 0x2A4510u;
label_2a4510:
    // 0x2a4510: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4518: 0xa3829a20  sb          $v0, -0x65E0($gp)
    ctx->pc = 0x2a4518u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a451c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4520: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2A4520u;
    SET_GPR_U32(ctx, 31, 0x2A4528u);
    ctx->pc = 0x2A4524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4520u;
            // 0x2a4524: 0xa3809a18  sb          $zero, -0x65E8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941208), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4528u; }
        if (ctx->pc != 0x2A4528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4528u; }
        if (ctx->pc != 0x2A4528u) { return; }
    }
    ctx->pc = 0x2A4528u;
label_2a4528:
    // 0x2a4528: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a4528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a452c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4530: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2a4530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2a4534: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a4538: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A4538u;
    SET_GPR_U32(ctx, 31, 0x2A4540u);
    ctx->pc = 0x2A453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4538u;
            // 0x2a453c: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4540u; }
        if (ctx->pc != 0x2A4540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4540u; }
        if (ctx->pc != 0x2A4540u) { return; }
    }
    ctx->pc = 0x2A4540u;
label_2a4540:
    // 0x2a4540: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A4540u;
    {
        const bool branch_taken_0x2a4540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4540) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4548u;
label_2a4548:
    // 0x2a4548: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a4548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a454c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2A454Cu;
    SET_GPR_U32(ctx, 31, 0x2A4554u);
    ctx->pc = 0x2A4550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A454Cu;
            // 0x2a4550: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4554u; }
        if (ctx->pc != 0x2A4554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4554u; }
        if (ctx->pc != 0x2A4554u) { return; }
    }
    ctx->pc = 0x2A4554u;
label_2a4554:
    // 0x2a4554: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A4554u;
    {
        const bool branch_taken_0x2a4554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4554) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A455Cu;
label_2a455c:
    // 0x2a455c: 0x87879a14  lh          $a3, -0x65EC($gp)
    ctx->pc = 0x2a455cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941204)));
    // 0x2a4560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4564: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x2a4564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a4568: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A4568u;
    {
        const bool branch_taken_0x2a4568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4568u;
            // 0x2a456c: 0xa3809a20  sb          $zero, -0x65E0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4568) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A4570u;
    // 0x2a4570: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x2a4570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a4574: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A4574u;
    {
        const bool branch_taken_0x2a4574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4574u;
            // 0x2a4578: 0x24e5fff8  addiu       $a1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4574) {
            ctx->pc = 0x2A45BCu;
            goto label_2a45bc;
        }
    }
    ctx->pc = 0x2A457Cu;
    // 0x2a457c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a457cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4580: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2a4584: 0x246362a0  addiu       $v1, $v1, 0x62A0
    ctx->pc = 0x2a4584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25248));
label_2a4588:
    // 0x2a4588: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x2a4588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a458c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2a458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2a4590: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2a4590u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2a4594: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2a4594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a4598: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2a4598u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2a459c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a459cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2a45a0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x2a45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x2a45a4: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x2a45a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x2a45a8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x2a45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x2a45ac: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x2a45acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x2a45b0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x2a45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x2a45b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A45B4u;
    {
        const bool branch_taken_0x2a45b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A45B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A45B4u;
            // 0x2a45b8: 0xad00001c  sw          $zero, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45b4) {
            ctx->pc = 0x2A4588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4588;
        }
    }
    ctx->pc = 0x2A45BCu;
label_2a45bc:
    // 0x2a45bc: 0x0  nop
    ctx->pc = 0x2a45bcu;
    // NOP
    // 0x2a45c0: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2a45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2a45c4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2a45c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a45c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A45C8u;
    {
        const bool branch_taken_0x2a45c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A45C8u;
            // 0x2a45cc: 0x246362a0  addiu       $v1, $v1, 0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45c8) {
            ctx->pc = 0x2A45E0u;
            goto label_2a45e0;
        }
    }
    ctx->pc = 0x2A45D0u;
label_2a45d0:
    // 0x2a45d0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2a45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a45d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a45d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a45dc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a45dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a45e0:
    // 0x2a45e0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2a45e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a45e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A45E4u;
    {
        const bool branch_taken_0x2a45e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a45e4) {
            ctx->pc = 0x2A45D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a45d0;
        }
    }
    ctx->pc = 0x2A45ECu;
label_2a45ec:
    // 0x2a45ec: 0x0  nop
    ctx->pc = 0x2a45ecu;
    // NOP
    // 0x2a45f0: 0xa7909a0c  sh          $s0, -0x65F4($gp)
    ctx->pc = 0x2a45f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941196), (uint16_t)GPR_U32(ctx, 16));
    // 0x2a45f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a45f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a45f8:
    // 0x2a45f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a45f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a45fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a45fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a4600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a460c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a460cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4610: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4610u;
            // 0x2a4614: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4618u;
}
