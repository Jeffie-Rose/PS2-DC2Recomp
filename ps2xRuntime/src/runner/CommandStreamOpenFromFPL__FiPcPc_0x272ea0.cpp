#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommandStreamOpenFromFPL__FiPcPc
// Address: 0x272ea0 - 0x272f58
void CommandStreamOpenFromFPL__FiPcPc_0x272ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandStreamOpenFromFPL__FiPcPc_0x272ea0");
#endif

    switch (ctx->pc) {
        case 0x272ed0u: goto label_272ed0;
        case 0x272ee0u: goto label_272ee0;
        case 0x272ef0u: goto label_272ef0;
        case 0x272efcu: goto label_272efc;
        case 0x272f0cu: goto label_272f0c;
        case 0x272f18u: goto label_272f18;
        case 0x272f28u: goto label_272f28;
        case 0x272f3cu: goto label_272f3c;
        default: break;
    }

    ctx->pc = 0x272ea0u;

    // 0x272ea0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x272ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x272ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x272ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x272ea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x272ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x272eac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272eb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x272eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x272eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272ebc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x272ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x272ec0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x272ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ec4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x272ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272ec8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x272EC8u;
    SET_GPR_U32(ctx, 31, 0x272ED0u);
    ctx->pc = 0x272ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272EC8u;
            // 0x272ecc: 0x24a5ca78  addiu       $a1, $a1, -0x3588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272ED0u; }
        if (ctx->pc != 0x272ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272ED0u; }
        if (ctx->pc != 0x272ED0u) { return; }
    }
    ctx->pc = 0x272ED0u;
label_272ed0:
    // 0x272ed0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x272ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ed8: 0xc04a470  jal         func_1291C0
    ctx->pc = 0x272ED8u;
    SET_GPR_U32(ctx, 31, 0x272EE0u);
    ctx->pc = 0x272EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272ED8u;
            // 0x272edc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1291C0u;
    if (runtime->hasFunction(0x1291C0u)) {
        auto targetFn = runtime->lookupFunction(0x1291C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EE0u; }
        if (ctx->pc != 0x272EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x1291c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EE0u; }
        if (ctx->pc != 0x272EE0u) { return; }
    }
    ctx->pc = 0x272EE0u;
label_272ee0:
    // 0x272ee0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x272ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x272ee4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x272ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272ee8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x272EE8u;
    SET_GPR_U32(ctx, 31, 0x272EF0u);
    ctx->pc = 0x272EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272EE8u;
            // 0x272eec: 0x24a5ca88  addiu       $a1, $a1, -0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EF0u; }
        if (ctx->pc != 0x272EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EF0u; }
        if (ctx->pc != 0x272EF0u) { return; }
    }
    ctx->pc = 0x272EF0u;
label_272ef0:
    // 0x272ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ef4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x272EF4u;
    SET_GPR_U32(ctx, 31, 0x272EFCu);
    ctx->pc = 0x272EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272EF4u;
            // 0x272ef8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EFCu; }
        if (ctx->pc != 0x272EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272EFCu; }
        if (ctx->pc != 0x272EFCu) { return; }
    }
    ctx->pc = 0x272EFCu;
label_272efc:
    // 0x272efc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x272efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x272f00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x272f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272f04: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x272F04u;
    SET_GPR_U32(ctx, 31, 0x272F0Cu);
    ctx->pc = 0x272F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272F04u;
            // 0x272f08: 0x24a5ca90  addiu       $a1, $a1, -0x3570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F0Cu; }
        if (ctx->pc != 0x272F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F0Cu; }
        if (ctx->pc != 0x272F0Cu) { return; }
    }
    ctx->pc = 0x272F0Cu;
label_272f0c:
    // 0x272f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x272f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f10: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x272F10u;
    SET_GPR_U32(ctx, 31, 0x272F18u);
    ctx->pc = 0x272F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272F10u;
            // 0x272f14: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F18u; }
        if (ctx->pc != 0x272F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F18u; }
        if (ctx->pc != 0x272F18u) { return; }
    }
    ctx->pc = 0x272F18u;
label_272f18:
    // 0x272f18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x272f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x272f1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x272f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272f20: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x272F20u;
    SET_GPR_U32(ctx, 31, 0x272F28u);
    ctx->pc = 0x272F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272F20u;
            // 0x272f24: 0x24a5ca98  addiu       $a1, $a1, -0x3568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F28u; }
        if (ctx->pc != 0x272F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F28u; }
        if (ctx->pc != 0x272F28u) { return; }
    }
    ctx->pc = 0x272F28u;
label_272f28:
    // 0x272f28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x272f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f2c: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x272f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x272f30: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x272f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272f34: 0xc062bd4  jal         func_18AF50
    ctx->pc = 0x272F34u;
    SET_GPR_U32(ctx, 31, 0x272F3Cu);
    ctx->pc = 0x272F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272F34u;
            // 0x272f38: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AF50u;
    if (runtime->hasFunction(0x18AF50u)) {
        auto targetFn = runtime->lookupFunction(0x18AF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F3Cu; }
        if (ctx->pc != 0x272F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenFromFPLFast__6CSoundFiPcPc_0x18af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272F3Cu; }
        if (ctx->pc != 0x272F3Cu) { return; }
    }
    ctx->pc = 0x272F3Cu;
label_272f3c:
    // 0x272f3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x272f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272f50: 0x3e00008  jr          $ra
    ctx->pc = 0x272F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272F50u;
            // 0x272f54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272F58u;
}
