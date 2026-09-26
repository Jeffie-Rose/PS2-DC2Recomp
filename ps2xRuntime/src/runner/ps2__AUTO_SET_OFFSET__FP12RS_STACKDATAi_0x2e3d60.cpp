#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _AUTO_SET_OFFSET__FP12RS_STACKDATAi
// Address: 0x2e3d60 - 0x2e3df4
void ps2__AUTO_SET_OFFSET__FP12RS_STACKDATAi_0x2e3d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__AUTO_SET_OFFSET__FP12RS_STACKDATAi_0x2e3d60");
#endif

    switch (ctx->pc) {
        case 0x2e3d84u: goto label_2e3d84;
        case 0x2e3d9cu: goto label_2e3d9c;
        case 0x2e3dbcu: goto label_2e3dbc;
        case 0x2e3dd8u: goto label_2e3dd8;
        default: break;
    }

    ctx->pc = 0x2e3d60u;

    // 0x2e3d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3d64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3d70: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2e3d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e3d74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3d78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e3d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d7c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E3D7Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D84u);
    ctx->pc = 0x2E3D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D7Cu;
            // 0x2e3d80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D84u; }
        if (ctx->pc != 0x2E3D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D84u; }
        if (ctx->pc != 0x2E3D84u) { return; }
    }
    ctx->pc = 0x2E3D84u;
label_2e3d84:
    // 0x2e3d84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e3d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d88: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2e3d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3d8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3D8Cu;
    {
        const bool branch_taken_0x2e3d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D8Cu;
            // 0x2e3d90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d8c) {
            ctx->pc = 0x2E3DA0u;
            goto label_2e3da0;
        }
    }
    ctx->pc = 0x2E3D94u;
    // 0x2e3d94: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E3D94u;
    SET_GPR_U32(ctx, 31, 0x2E3D9Cu);
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D9Cu; }
        if (ctx->pc != 0x2E3D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D9Cu; }
        if (ctx->pc != 0x2E3D9Cu) { return; }
    }
    ctx->pc = 0x2E3D9Cu;
label_2e3d9c:
    // 0x2e3d9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3da0:
    // 0x2e3da0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3da4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3DA4u;
    {
        const bool branch_taken_0x2e3da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DA4u;
            // 0x2e3da8: 0xac4300c0  sw          $v1, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3da4) {
            ctx->pc = 0x2E3DC4u;
            goto label_2e3dc4;
        }
    }
    ctx->pc = 0x2E3DACu;
    // 0x2e3dac: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3db0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3db4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2E3DB4u;
    SET_GPR_U32(ctx, 31, 0x2E3DBCu);
    ctx->pc = 0x2E3DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DB4u;
            // 0x2e3db8: 0x244400c4  addiu       $a0, $v0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DBCu; }
        if (ctx->pc != 0x2E3DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DBCu; }
        if (ctx->pc != 0x2E3DBCu) { return; }
    }
    ctx->pc = 0x2E3DBCu;
label_2e3dbc:
    // 0x2e3dbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3DBCu;
    {
        const bool branch_taken_0x2e3dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DBCu;
            // 0x2e3dc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3dbc) {
            ctx->pc = 0x2E3DDCu;
            goto label_2e3ddc;
        }
    }
    ctx->pc = 0x2E3DC4u;
label_2e3dc4:
    // 0x2e3dc4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3dc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e3dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2e3dcc: 0x24a51258  addiu       $a1, $a1, 0x1258
    ctx->pc = 0x2e3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
    // 0x2e3dd0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2E3DD0u;
    SET_GPR_U32(ctx, 31, 0x2E3DD8u);
    ctx->pc = 0x2E3DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DD0u;
            // 0x2e3dd4: 0x244400c4  addiu       $a0, $v0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DD8u; }
        if (ctx->pc != 0x2E3DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3DD8u; }
        if (ctx->pc != 0x2E3DD8u) { return; }
    }
    ctx->pc = 0x2E3DD8u;
label_2e3dd8:
    // 0x2e3dd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e3dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e3ddc:
    // 0x2e3ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3de4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3dec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3DECu;
            // 0x2e3df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3DF4u;
}
