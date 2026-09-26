#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WriteFile__FPcPvi
// Address: 0x149bf0 - 0x149ccc
void WriteFile__FPcPvi_0x149bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteFile__FPcPvi_0x149bf0");
#endif

    switch (ctx->pc) {
        case 0x149c20u: goto label_149c20;
        case 0x149c4cu: goto label_149c4c;
        case 0x149c68u: goto label_149c68;
        case 0x149c78u: goto label_149c78;
        case 0x149c88u: goto label_149c88;
        case 0x149ca8u: goto label_149ca8;
        case 0x149cb0u: goto label_149cb0;
        default: break;
    }

    ctx->pc = 0x149bf0u;

    // 0x149bf0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x149bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x149bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x149bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x149c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x149c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x149c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c10: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x149c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149c14: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x149c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x149c18: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x149c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x149c1c: 0x24c6b090  addiu       $a2, $a2, -0x4F70
    ctx->pc = 0x149c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946960));
label_149c20:
    // 0x149c20: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x149c20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149c24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x149c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x149c28: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x149c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x149c2c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x149c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x149c30: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x149c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x149c34: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x149c34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x149c38: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x149C38u;
    {
        const bool branch_taken_0x149c38 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x149C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C38u;
            // 0x149c3c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c38) {
            ctx->pc = 0x149C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149c20;
        }
    }
    ctx->pc = 0x149C40u;
    // 0x149c40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c44: 0xc052490  jal         func_149240
    ctx->pc = 0x149C44u;
    SET_GPR_U32(ctx, 31, 0x149C4Cu);
    ctx->pc = 0x149C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C44u;
            // 0x149c48: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149240u;
    if (runtime->hasFunction(0x149240u)) {
        auto targetFn = runtime->lookupFunction(0x149240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C4Cu; }
        if (ctx->pc != 0x149C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFullPath__FPcPc_0x149240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C4Cu; }
        if (ctx->pc != 0x149C4Cu) { return; }
    }
    ctx->pc = 0x149C4Cu;
label_149c4c:
    // 0x149c4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x149c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149c50: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x149C50u;
    {
        const bool branch_taken_0x149c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x149C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C50u;
            // 0x149c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c50) {
            ctx->pc = 0x149C80u;
            goto label_149c80;
        }
    }
    ctx->pc = 0x149C58u;
    // 0x149c58: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x149c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x149c5c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x149c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149c60: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x149C60u;
    SET_GPR_U32(ctx, 31, 0x149C68u);
    ctx->pc = 0x149C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C60u;
            // 0x149c64: 0x24842820  addiu       $a0, $a0, 0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C68u; }
        if (ctx->pc != 0x149C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C68u; }
        if (ctx->pc != 0x149C68u) { return; }
    }
    ctx->pc = 0x149C68u;
label_149c68:
    // 0x149c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x149c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x149c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c70: 0xc0a2504  jal         func_289410
    ctx->pc = 0x149C70u;
    SET_GPR_U32(ctx, 31, 0x149C78u);
    ctx->pc = 0x149C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C70u;
            // 0x149c74: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289410u;
    if (runtime->hasFunction(0x289410u)) {
        auto targetFn = runtime->lookupFunction(0x289410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C78u; }
        if (ctx->pc != 0x149C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WriteFileSocket__FPcPUii_0x289410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C78u; }
        if (ctx->pc != 0x149C78u) { return; }
    }
    ctx->pc = 0x149C78u;
label_149c78:
    // 0x149c78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x149C78u;
    {
        const bool branch_taken_0x149c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C78u;
            // 0x149c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c78) {
            ctx->pc = 0x149CB4u;
            goto label_149cb4;
        }
    }
    ctx->pc = 0x149C80u;
label_149c80:
    // 0x149c80: 0xc0450a6  jal         func_114298
    ctx->pc = 0x149C80u;
    SET_GPR_U32(ctx, 31, 0x149C88u);
    ctx->pc = 0x149C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C80u;
            // 0x149c84: 0x24050602  addiu       $a1, $zero, 0x602 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C88u; }
        if (ctx->pc != 0x149C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C88u; }
        if (ctx->pc != 0x149C88u) { return; }
    }
    ctx->pc = 0x149C88u;
label_149c88:
    // 0x149c88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c8c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x149C8Cu;
    {
        const bool branch_taken_0x149c8c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x149C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C8Cu;
            // 0x149c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c8c) {
            ctx->pc = 0x149C9Cu;
            goto label_149c9c;
        }
    }
    ctx->pc = 0x149C94u;
    // 0x149c94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149C94u;
    {
        const bool branch_taken_0x149c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149C94u;
            // 0x149c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c94) {
            ctx->pc = 0x149CB4u;
            goto label_149cb4;
        }
    }
    ctx->pc = 0x149C9Cu;
label_149c9c:
    // 0x149c9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x149c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ca0: 0xc0452d2  jal         func_114B48
    ctx->pc = 0x149CA0u;
    SET_GPR_U32(ctx, 31, 0x149CA8u);
    ctx->pc = 0x149CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CA0u;
            // 0x149ca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CA8u; }
        if (ctx->pc != 0x149CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CA8u; }
        if (ctx->pc != 0x149CA8u) { return; }
    }
    ctx->pc = 0x149CA8u;
label_149ca8:
    // 0x149ca8: 0xc045148  jal         func_114520
    ctx->pc = 0x149CA8u;
    SET_GPR_U32(ctx, 31, 0x149CB0u);
    ctx->pc = 0x149CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CA8u;
            // 0x149cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CB0u; }
        if (ctx->pc != 0x149CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CB0u; }
        if (ctx->pc != 0x149CB0u) { return; }
    }
    ctx->pc = 0x149CB0u;
label_149cb0:
    // 0x149cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149cb4:
    // 0x149cb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x149cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x149CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149CC4u;
            // 0x149cc8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149CCCu;
}
