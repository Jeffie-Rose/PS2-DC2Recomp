#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommandStreamPlay__Fii
// Address: 0x273240 - 0x273318
void CommandStreamPlay__Fii_0x273240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandStreamPlay__Fii_0x273240");
#endif

    switch (ctx->pc) {
        case 0x273268u: goto label_273268;
        case 0x273274u: goto label_273274;
        case 0x273288u: goto label_273288;
        case 0x273294u: goto label_273294;
        case 0x2732a4u: goto label_2732a4;
        case 0x2732b0u: goto label_2732b0;
        case 0x2732b8u: goto label_2732b8;
        case 0x2732d0u: goto label_2732d0;
        case 0x2732ecu: goto label_2732ec;
        case 0x2732f8u: goto label_2732f8;
        default: break;
    }

    ctx->pc = 0x273240u;

    // 0x273240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x273240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x273244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x273244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x273248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27324c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x273250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x273258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27325c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27325cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273260: 0xc06326c  jal         func_18C9B0
    ctx->pc = 0x273260u;
    SET_GPR_U32(ctx, 31, 0x273268u);
    ctx->pc = 0x273264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273260u;
            // 0x273264: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C9B0u;
    if (runtime->hasFunction(0x18C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x18C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273268u; }
        if (ctx->pc != 0x273268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetReverbDepth__Fi_0x18c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273268u; }
        if (ctx->pc != 0x273268u) { return; }
    }
    ctx->pc = 0x273268u;
label_273268:
    // 0x273268: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x273268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27326c: 0xc0a215c  jal         func_288570
    ctx->pc = 0x27326Cu;
    SET_GPR_U32(ctx, 31, 0x273274u);
    ctx->pc = 0x273270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27326Cu;
            // 0x273270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273274u; }
        if (ctx->pc != 0x273274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273274u; }
        if (ctx->pc != 0x273274u) { return; }
    }
    ctx->pc = 0x273274u;
label_273274:
    // 0x273274: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x273274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27327c: 0x3c023ff8  lui         $v0, 0x3FF8
    ctx->pc = 0x27327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16376 << 16));
    // 0x273280: 0xc0a215c  jal         func_288570
    ctx->pc = 0x273280u;
    SET_GPR_U32(ctx, 31, 0x273288u);
    ctx->pc = 0x273284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273280u;
            // 0x273284: 0x2903c  dsll32      $s2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273288u; }
        if (ctx->pc != 0x273288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273288u; }
        if (ctx->pc != 0x273288u) { return; }
    }
    ctx->pc = 0x273288u;
label_273288:
    // 0x273288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27328c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x27328Cu;
    SET_GPR_U32(ctx, 31, 0x273294u);
    ctx->pc = 0x273290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27328Cu;
            // 0x273290: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273294u; }
        if (ctx->pc != 0x273294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273294u; }
        if (ctx->pc != 0x273294u) { return; }
    }
    ctx->pc = 0x273294u;
label_273294:
    // 0x273294: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x273294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x273298: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27329c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x27329Cu;
    SET_GPR_U32(ctx, 31, 0x2732A4u);
    ctx->pc = 0x2732A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27329Cu;
            // 0x2732a0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732A4u; }
        if (ctx->pc != 0x2732A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732A4u; }
        if (ctx->pc != 0x2732A4u) { return; }
    }
    ctx->pc = 0x2732A4u;
label_2732a4:
    // 0x2732a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2732a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732a8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x2732A8u;
    SET_GPR_U32(ctx, 31, 0x2732B0u);
    ctx->pc = 0x2732ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2732A8u;
            // 0x2732ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732B0u; }
        if (ctx->pc != 0x2732B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732B0u; }
        if (ctx->pc != 0x2732B0u) { return; }
    }
    ctx->pc = 0x2732B0u;
label_2732b0:
    // 0x2732b0: 0xc0a218a  jal         func_288628
    ctx->pc = 0x2732B0u;
    SET_GPR_U32(ctx, 31, 0x2732B8u);
    ctx->pc = 0x2732B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2732B0u;
            // 0x2732b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732B8u; }
        if (ctx->pc != 0x2732B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732B8u; }
        if (ctx->pc != 0x2732B8u) { return; }
    }
    ctx->pc = 0x2732B8u;
label_2732b8:
    // 0x2732b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2732b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2732bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2732c0: 0x2484cad0  addiu       $a0, $a0, -0x3530
    ctx->pc = 0x2732c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953680));
    // 0x2732c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2732c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732c8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2732C8u;
    SET_GPR_U32(ctx, 31, 0x2732D0u);
    ctx->pc = 0x2732CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2732C8u;
            // 0x2732cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732D0u; }
        if (ctx->pc != 0x2732D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732D0u; }
        if (ctx->pc != 0x2732D0u) { return; }
    }
    ctx->pc = 0x2732D0u;
label_2732d0:
    // 0x2732d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2732d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2732d4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2732d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2732d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2732d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2732dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2732e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732e4: 0xc062c28  jal         func_18B0A0
    ctx->pc = 0x2732E4u;
    SET_GPR_U32(ctx, 31, 0x2732ECu);
    ctx->pc = 0x2732E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2732E4u;
            // 0x2732e8: 0xac30e630  sw          $s0, -0x19D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960688), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732ECu; }
        if (ctx->pc != 0x2732ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732ECu; }
        if (ctx->pc != 0x2732ECu) { return; }
    }
    ctx->pc = 0x2732ECu;
label_2732ec:
    // 0x2732ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2732ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732f0: 0xc062bf0  jal         func_18AFC0
    ctx->pc = 0x2732F0u;
    SET_GPR_U32(ctx, 31, 0x2732F8u);
    ctx->pc = 0x2732F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2732F0u;
            // 0x2732f4: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFC0u;
    if (runtime->hasFunction(0x18AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732F8u; }
        if (ctx->pc != 0x2732F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamPlay__6CSoundFi_0x18afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2732F8u; }
        if (ctx->pc != 0x2732F8u) { return; }
    }
    ctx->pc = 0x2732F8u;
label_2732f8:
    // 0x2732f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2732f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2732fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2732fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x273300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x273304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27330c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27330cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273310: 0x3e00008  jr          $ra
    ctx->pc = 0x273310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273310u;
            // 0x273314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273318u;
}
