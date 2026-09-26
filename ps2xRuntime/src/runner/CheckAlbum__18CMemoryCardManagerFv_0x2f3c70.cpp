#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckAlbum__18CMemoryCardManagerFv
// Address: 0x2f3c70 - 0x2f3e10
void CheckAlbum__18CMemoryCardManagerFv_0x2f3c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckAlbum__18CMemoryCardManagerFv_0x2f3c70");
#endif

    switch (ctx->pc) {
        case 0x2f3cb8u: goto label_2f3cb8;
        case 0x2f3cc8u: goto label_2f3cc8;
        case 0x2f3cd4u: goto label_2f3cd4;
        case 0x2f3cf0u: goto label_2f3cf0;
        case 0x2f3d1cu: goto label_2f3d1c;
        case 0x2f3d64u: goto label_2f3d64;
        case 0x2f3d84u: goto label_2f3d84;
        case 0x2f3d94u: goto label_2f3d94;
        case 0x2f3ddcu: goto label_2f3ddc;
        default: break;
    }

    ctx->pc = 0x2f3c70u;

    // 0x2f3c70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f3c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f3c74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f3c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f3c78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f3c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f3c7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f3c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3c84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f3c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3c8c: 0x265104d0  addiu       $s1, $s2, 0x4D0
    ctx->pc = 0x2f3c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x2f3c90: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2f3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2f3c94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3c98: 0x1044001d  beq         $v0, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3C98u;
    {
        const bool branch_taken_0x2f3c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F3C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C98u;
            // 0x2f3c9c: 0x265010e0  addiu       $s0, $s2, 0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c98) {
            ctx->pc = 0x2F3D10u;
            goto label_2f3d10;
        }
    }
    ctx->pc = 0x2F3CA0u;
    // 0x2f3ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3CA0u;
    {
        const bool branch_taken_0x2f3ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CA0u;
            // 0x2f3ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ca0) {
            ctx->pc = 0x2F3CB0u;
            goto label_2f3cb0;
        }
    }
    ctx->pc = 0x2F3CA8u;
    // 0x2f3ca8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2F3CA8u;
    {
        const bool branch_taken_0x2f3ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CA8u;
            // 0x2f3cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ca8) {
            ctx->pc = 0x2F3DF4u;
            goto label_2f3df4;
        }
    }
    ctx->pc = 0x2F3CB0u;
label_2f3cb0:
    // 0x2f3cb0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3CB0u;
    SET_GPR_U32(ctx, 31, 0x2F3CB8u);
    ctx->pc = 0x2F3CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CB0u;
            // 0x2f3cb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CB8u; }
        if (ctx->pc != 0x2F3CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CB8u; }
        if (ctx->pc != 0x2F3CB8u) { return; }
    }
    ctx->pc = 0x2F3CB8u;
label_2f3cb8:
    // 0x2f3cb8: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F3CB8u;
    {
        const bool branch_taken_0x2f3cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CB8u;
            // 0x2f3cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cb8) {
            ctx->pc = 0x2F3DF0u;
            goto label_2f3df0;
        }
    }
    ctx->pc = 0x2F3CC0u;
    // 0x2f3cc0: 0xc0bc610  jal         func_2F1840
    ctx->pc = 0x2F3CC0u;
    SET_GPR_U32(ctx, 31, 0x2F3CC8u);
    ctx->pc = 0x2F1840u;
    if (runtime->hasFunction(0x2F1840u)) {
        auto targetFn = runtime->lookupFunction(0x2F1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CC8u; }
        if (ctx->pc != 0x2F3CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveFileInfoTable__18CMemoryCardManagerFv_0x2f1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CC8u; }
        if (ctx->pc != 0x2F3CC8u) { return; }
    }
    ctx->pc = 0x2F3CC8u;
label_2f3cc8:
    // 0x2f3cc8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f3cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3ccc: 0xc0bc53c  jal         func_2F14F0
    ctx->pc = 0x2F3CCCu;
    SET_GPR_U32(ctx, 31, 0x2F3CD4u);
    ctx->pc = 0x2F3CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CCCu;
            // 0x2f3cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F14F0u;
    if (runtime->hasFunction(0x2F14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CD4u; }
        if (ctx->pc != 0x2F3CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMemoryCardAlbumName__FPci_0x2f14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CD4u; }
        if (ctx->pc != 0x2F3CD4u) { return; }
    }
    ctx->pc = 0x2F3CD4u;
label_2f3cd4:
    // 0x2f3cd4: 0x8e4404c8  lw          $a0, 0x4C8($s2)
    ctx->pc = 0x2f3cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x2f3cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3cdc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f3cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ce4: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x2f3ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2f3ce8: 0xc048c46  jal         func_123118
    ctx->pc = 0x2F3CE8u;
    SET_GPR_U32(ctx, 31, 0x2F3CF0u);
    ctx->pc = 0x2F3CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CE8u;
            // 0x2f3cec: 0x26490080  addiu       $t1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CF0u; }
        if (ctx->pc != 0x2F3CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3CF0u; }
        if (ctx->pc != 0x2F3CF0u) { return; }
    }
    ctx->pc = 0x2F3CF0u;
label_2f3cf0:
    // 0x2f3cf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3CF0u;
    {
        const bool branch_taken_0x2f3cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CF0u;
            // 0x2f3cf4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cf0) {
            ctx->pc = 0x2F3D04u;
            goto label_2f3d04;
        }
    }
    ctx->pc = 0x2F3CF8u;
    // 0x2f3cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3cfc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F3CFCu;
    {
        const bool branch_taken_0x2f3cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CFCu;
            // 0x2f3d00: 0xae420058  sw          $v0, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cfc) {
            ctx->pc = 0x2F3DF0u;
            goto label_2f3df0;
        }
    }
    ctx->pc = 0x2F3D04u;
label_2f3d04:
    // 0x2f3d04: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f3d08: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2F3D08u;
    {
        const bool branch_taken_0x2f3d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D08u;
            // 0x2f3d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d08) {
            ctx->pc = 0x2F3DF4u;
            goto label_2f3df4;
        }
    }
    ctx->pc = 0x2F3D10u;
label_2f3d10:
    // 0x2f3d10: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x2f3d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2f3d14: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3D14u;
    SET_GPR_U32(ctx, 31, 0x2F3D1Cu);
    ctx->pc = 0x2F3D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D14u;
            // 0x2f3d18: 0x27a600dc  addiu       $a2, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D1Cu; }
        if (ctx->pc != 0x2F3D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D1Cu; }
        if (ctx->pc != 0x2F3D1Cu) { return; }
    }
    ctx->pc = 0x2F3D1Cu;
label_2f3d1c:
    // 0x2f3d1c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F3D1Cu;
    {
        const bool branch_taken_0x2f3d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3d1c) {
            ctx->pc = 0x2F3DF0u;
            goto label_2f3df0;
        }
    }
    ctx->pc = 0x2F3D24u;
    // 0x2f3d24: 0xae4004c0  sw          $zero, 0x4C0($s2)
    ctx->pc = 0x2f3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 0));
    // 0x2f3d28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f3d2c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x2f3d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f3d30: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F3D30u;
    {
        const bool branch_taken_0x2f3d30 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F3D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D30u;
            // 0x2f3d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d30) {
            ctx->pc = 0x2F3D8Cu;
            goto label_2f3d8c;
        }
    }
    ctx->pc = 0x2F3D38u;
    // 0x2f3d38: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f3d3c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2f3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f3d40: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3D40u;
    {
        const bool branch_taken_0x2f3d40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F3D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D40u;
            // 0x2f3d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d40) {
            ctx->pc = 0x2F3D4Cu;
            goto label_2f3d4c;
        }
    }
    ctx->pc = 0x2F3D48u;
    // 0x2f3d48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f3d4c:
    // 0x2f3d4c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2f3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f3d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d54: 0xae4204c0  sw          $v0, 0x4C0($s2)
    ctx->pc = 0x2f3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 2));
    // 0x2f3d58: 0x8e530090  lw          $s3, 0x90($s2)
    ctx->pc = 0x2f3d58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2f3d5c: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2F3D5Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D64u);
    ctx->pc = 0x2F3D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D5Cu;
            // 0x2f3d60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D64u; }
        if (ctx->pc != 0x2F3D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D64u; }
        if (ctx->pc != 0x2F3D64u) { return; }
    }
    ctx->pc = 0x2F3D64u;
label_2f3d64:
    // 0x2f3d64: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x2f3d64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f3d68: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3D68u;
    {
        const bool branch_taken_0x2f3d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D68u;
            // 0x2f3d6c: 0x264400a0  addiu       $a0, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d68) {
            ctx->pc = 0x2F3D7Cu;
            goto label_2f3d7c;
        }
    }
    ctx->pc = 0x2F3D70u;
    // 0x2f3d70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3d74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f3d78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f3d7c:
    // 0x2f3d7c: 0xc04a422  jal         func_129088
    ctx->pc = 0x2F3D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D84u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D84u; }
        if (ctx->pc != 0x2F3D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D84u; }
        if (ctx->pc != 0x2F3D84u) { return; }
    }
    ctx->pc = 0x2F3D84u;
label_2f3d84:
    // 0x2f3d84: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F3D84u;
    {
        const bool branch_taken_0x2f3d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D84u;
            // 0x2f3d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d84) {
            ctx->pc = 0x2F3DF4u;
            goto label_2f3df4;
        }
    }
    ctx->pc = 0x2F3D8Cu;
label_2f3d8c:
    // 0x2f3d8c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D94u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D94u; }
        if (ctx->pc != 0x2F3D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3D94u; }
        if (ctx->pc != 0x2F3D94u) { return; }
    }
    ctx->pc = 0x2F3D94u;
label_2f3d94:
    // 0x2f3d94: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2f3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f3d98: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f3d9c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3D9Cu;
    {
        const bool branch_taken_0x2f3d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3D9Cu;
            // 0x2f3da0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d9c) {
            ctx->pc = 0x2F3DB0u;
            goto label_2f3db0;
        }
    }
    ctx->pc = 0x2F3DA4u;
    // 0x2f3da4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f3da8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3DA8u;
    {
        const bool branch_taken_0x2f3da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3DA8u;
            // 0x2f3dac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3da8) {
            ctx->pc = 0x2F3DD0u;
            goto label_2f3dd0;
        }
    }
    ctx->pc = 0x2F3DB0u;
label_2f3db0:
    // 0x2f3db0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3DB0u;
    {
        const bool branch_taken_0x2f3db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3DB0u;
            // 0x2f3db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3db0) {
            ctx->pc = 0x2F3DD4u;
            goto label_2f3dd4;
        }
    }
    ctx->pc = 0x2F3DB8u;
    // 0x2f3db8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f3db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f3dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3dc0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f3dc4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2f3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2f3dc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F3DC8u;
    {
        const bool branch_taken_0x2f3dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3DC8u;
            // 0x2f3dcc: 0xae4304c0  sw          $v1, 0x4C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dc8) {
            ctx->pc = 0x2F3DF4u;
            goto label_2f3df4;
        }
    }
    ctx->pc = 0x2F3DD0u;
label_2f3dd0:
    // 0x2f3dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3dd4:
    // 0x2f3dd4: 0xc0bc748  jal         func_2F1D20
    ctx->pc = 0x2F3DD4u;
    SET_GPR_U32(ctx, 31, 0x2F3DDCu);
    ctx->pc = 0x2F1D20u;
    if (runtime->hasFunction(0x2F1D20u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3DDCu; }
        if (ctx->pc != 0x2F3DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFuncNo__18CMemoryCardManagerFv_0x2f1d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3DDCu; }
        if (ctx->pc != 0x2F3DDCu) { return; }
    }
    ctx->pc = 0x2F3DDCu;
label_2f3ddc:
    // 0x2f3ddc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2f3de0: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2f3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f3de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3DE8u;
    {
        const bool branch_taken_0x2f3de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3DE8u;
            // 0x2f3dec: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3de8) {
            ctx->pc = 0x2F3DF4u;
            goto label_2f3df4;
        }
    }
    ctx->pc = 0x2F3DF0u;
label_2f3df0:
    // 0x2f3df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3df4:
    // 0x2f3df4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f3df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3df8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3E08u;
            // 0x2f3e0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3E10u;
}
