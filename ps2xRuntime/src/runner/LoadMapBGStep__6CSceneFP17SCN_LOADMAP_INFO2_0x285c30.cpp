#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapBGStep__6CSceneFP17SCN_LOADMAP_INFO2
// Address: 0x285c30 - 0x285cd8
void LoadMapBGStep__6CSceneFP17SCN_LOADMAP_INFO2_0x285c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapBGStep__6CSceneFP17SCN_LOADMAP_INFO2_0x285c30");
#endif

    switch (ctx->pc) {
        case 0x285c5cu: goto label_285c5c;
        case 0x285c94u: goto label_285c94;
        default: break;
    }

    ctx->pc = 0x285c30u;

    // 0x285c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x285c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x285c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285c40: 0x8c822ca0  lw          $v0, 0x2CA0($a0)
    ctx->pc = 0x285c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11424)));
    // 0x285c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285C44u;
    {
        const bool branch_taken_0x285c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C44u;
            // 0x285c48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c44) {
            ctx->pc = 0x285C54u;
            goto label_285c54;
        }
    }
    ctx->pc = 0x285C4Cu;
    // 0x285c4c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x285C4Cu;
    {
        const bool branch_taken_0x285c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C4Cu;
            // 0x285c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c4c) {
            ctx->pc = 0x285CC4u;
            goto label_285cc4;
        }
    }
    ctx->pc = 0x285C54u;
label_285c54:
    // 0x285c54: 0xc05239c  jal         func_148E70
    ctx->pc = 0x285C54u;
    SET_GPR_U32(ctx, 31, 0x285C5Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C5Cu; }
        if (ctx->pc != 0x285C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C5Cu; }
        if (ctx->pc != 0x285C5Cu) { return; }
    }
    ctx->pc = 0x285C5Cu;
label_285c5c:
    // 0x285c5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285C5Cu;
    {
        const bool branch_taken_0x285c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C5Cu;
            // 0x285c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c5c) {
            ctx->pc = 0x285C6Cu;
            goto label_285c6c;
        }
    }
    ctx->pc = 0x285C64u;
    // 0x285c64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x285C64u;
    {
        const bool branch_taken_0x285c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C64u;
            // 0x285c68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c64) {
            ctx->pc = 0x285CC8u;
            goto label_285cc8;
        }
    }
    ctx->pc = 0x285C6Cu;
label_285c6c:
    // 0x285c6c: 0x8e222e44  lw          $v0, 0x2E44($s1)
    ctx->pc = 0x285c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11844)));
    // 0x285c70: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x285C70u;
    {
        const bool branch_taken_0x285c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C70u;
            // 0x285c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c70) {
            ctx->pc = 0x285CC4u;
            goto label_285cc4;
        }
    }
    ctx->pc = 0x285C78u;
    // 0x285c78: 0x8e222ca0  lw          $v0, 0x2CA0($s1)
    ctx->pc = 0x285c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11424)));
    // 0x285c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c80: 0x8e252e48  lw          $a1, 0x2E48($s1)
    ctx->pc = 0x285c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11848)));
    // 0x285c84: 0x26272ca8  addiu       $a3, $s1, 0x2CA8
    ctx->pc = 0x285c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 11432));
    // 0x285c88: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x285c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285c8c: 0xc0a15bc  jal         func_2856F0
    ctx->pc = 0x285C8Cu;
    SET_GPR_U32(ctx, 31, 0x285C94u);
    ctx->pc = 0x285C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285C8Cu;
            // 0x285c90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2856F0u;
    if (runtime->hasFunction(0x2856F0u)) {
        auto targetFn = runtime->lookupFunction(0x2856F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C94u; }
        if (ctx->pc != 0x285C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapFromMemory__6CSceneFiiP17SCN_LOADMAP_INFO2_0x2856f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C94u; }
        if (ctx->pc != 0x285C94u) { return; }
    }
    ctx->pc = 0x285C94u;
label_285c94:
    // 0x285c94: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285C94u;
    {
        const bool branch_taken_0x285c94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x285c94) {
            ctx->pc = 0x285CA4u;
            goto label_285ca4;
        }
    }
    ctx->pc = 0x285C9Cu;
    // 0x285c9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x285C9Cu;
    {
        const bool branch_taken_0x285c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C9Cu;
            // 0x285ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c9c) {
            ctx->pc = 0x285CC4u;
            goto label_285cc4;
        }
    }
    ctx->pc = 0x285CA4u;
label_285ca4:
    // 0x285ca4: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285CA4u;
    {
        const bool branch_taken_0x285ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x285ca4) {
            ctx->pc = 0x285CB8u;
            goto label_285cb8;
        }
    }
    ctx->pc = 0x285CACu;
    // 0x285cac: 0xae202ca0  sw          $zero, 0x2CA0($s1)
    ctx->pc = 0x285cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11424), GPR_U32(ctx, 0));
    // 0x285cb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285CB0u;
    {
        const bool branch_taken_0x285cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285CB0u;
            // 0x285cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cb0) {
            ctx->pc = 0x285CC4u;
            goto label_285cc4;
        }
    }
    ctx->pc = 0x285CB8u;
label_285cb8:
    // 0x285cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285cbc: 0xae222ca0  sw          $v0, 0x2CA0($s1)
    ctx->pc = 0x285cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11424), GPR_U32(ctx, 2));
    // 0x285cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285cc4:
    // 0x285cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_285cc8:
    // 0x285cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x285CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285CD0u;
            // 0x285cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285CD8u;
}
