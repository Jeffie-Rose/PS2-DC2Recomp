#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG__FP9SPI_STACKi
// Address: 0x175990 - 0x175a68
void ps2__IMG__FP9SPI_STACKi_0x175990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG__FP9SPI_STACKi_0x175990");
#endif

    switch (ctx->pc) {
        case 0x1759bcu: goto label_1759bc;
        case 0x1759e8u: goto label_1759e8;
        case 0x1759f8u: goto label_1759f8;
        case 0x175a2cu: goto label_175a2c;
        case 0x175a50u: goto label_175a50;
        default: break;
    }

    ctx->pc = 0x175990u;

    // 0x175990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x175998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17599c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1759a0: 0x8f8289e4  lw          $v0, -0x761C($gp)
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x1759a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1759A4u;
    {
        const bool branch_taken_0x1759a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1759A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759A4u;
            // 0x1759a8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759a4) {
            ctx->pc = 0x1759B4u;
            goto label_1759b4;
        }
    }
    ctx->pc = 0x1759ACu;
    // 0x1759ac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1759ACu;
    {
        const bool branch_taken_0x1759ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1759B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759ACu;
            // 0x1759b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759ac) {
            ctx->pc = 0x175A54u;
            goto label_175a54;
        }
    }
    ctx->pc = 0x1759B4u;
label_1759b4:
    // 0x1759b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1759B4u;
    SET_GPR_U32(ctx, 31, 0x1759BCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759BCu; }
        if (ctx->pc != 0x1759BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759BCu; }
        if (ctx->pc != 0x1759BCu) { return; }
    }
    ctx->pc = 0x1759BCu;
label_1759bc:
    // 0x1759bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1759bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759c0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1759C0u;
    {
        const bool branch_taken_0x1759c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1759C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759C0u;
            // 0x1759c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759c0) {
            ctx->pc = 0x1759D8u;
            goto label_1759d8;
        }
    }
    ctx->pc = 0x1759C8u;
    // 0x1759c8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1759c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1759cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1759CCu;
    {
        const bool branch_taken_0x1759cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1759D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759CCu;
            // 0x1759d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759cc) {
            ctx->pc = 0x1759E0u;
            goto label_1759e0;
        }
    }
    ctx->pc = 0x1759D4u;
    // 0x1759d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1759d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1759d8:
    // 0x1759d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1759D8u;
    {
        const bool branch_taken_0x1759d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1759DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759D8u;
            // 0x1759dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759d8) {
            ctx->pc = 0x175A58u;
            goto label_175a58;
        }
    }
    ctx->pc = 0x1759E0u;
label_1759e0:
    // 0x1759e0: 0xc05191c  jal         func_146470
    ctx->pc = 0x1759E0u;
    SET_GPR_U32(ctx, 31, 0x1759E8u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759E8u; }
        if (ctx->pc != 0x1759E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759E8u; }
        if (ctx->pc != 0x1759E8u) { return; }
    }
    ctx->pc = 0x1759E8u;
label_1759e8:
    // 0x1759e8: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x1759ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1759ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759f0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1759F0u;
    SET_GPR_U32(ctx, 31, 0x1759F8u);
    ctx->pc = 0x1759F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1759F0u;
            // 0x1759f4: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759F8u; }
        if (ctx->pc != 0x1759F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759F8u; }
        if (ctx->pc != 0x1759F8u) { return; }
    }
    ctx->pc = 0x1759F8u;
label_1759f8:
    // 0x1759f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1759f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759fc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1759FCu;
    {
        const bool branch_taken_0x1759fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x175A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1759FCu;
            // 0x175a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1759fc) {
            ctx->pc = 0x175A0Cu;
            goto label_175a0c;
        }
    }
    ctx->pc = 0x175A04u;
    // 0x175a04: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x175A04u;
    {
        const bool branch_taken_0x175a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a04) {
            ctx->pc = 0x175A54u;
            goto label_175a54;
        }
    }
    ctx->pc = 0x175A0Cu;
label_175a0c:
    // 0x175a0c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x175a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x175a10: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175A10u;
    {
        const bool branch_taken_0x175a10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x175A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A10u;
            // 0x175a14: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a10) {
            ctx->pc = 0x175A20u;
            goto label_175a20;
        }
    }
    ctx->pc = 0x175A18u;
    // 0x175a18: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x175a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x175a1c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_175a20:
    // 0x175a20: 0x8f8489e4  lw          $a0, -0x761C($gp)
    ctx->pc = 0x175a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x175a24: 0xc04e704  jal         func_139C10
    ctx->pc = 0x175A24u;
    SET_GPR_U32(ctx, 31, 0x175A2Cu);
    ctx->pc = 0x175A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A24u;
            // 0x175a28: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A2Cu; }
        if (ctx->pc != 0x175A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A2Cu; }
        if (ctx->pc != 0x175A2Cu) { return; }
    }
    ctx->pc = 0x175A2Cu;
label_175a2c:
    // 0x175a2c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x175a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x175a30: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x175a34: 0x24630670  addiu       $v1, $v1, 0x670
    ctx->pc = 0x175a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1648));
    // 0x175a38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175a3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x175a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x175a40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175a44: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x175a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x175a48: 0xc049c18  jal         func_127060
    ctx->pc = 0x175A48u;
    SET_GPR_U32(ctx, 31, 0x175A50u);
    ctx->pc = 0x175A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175A48u;
            // 0x175a4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A50u; }
        if (ctx->pc != 0x175A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A50u; }
        if (ctx->pc != 0x175A50u) { return; }
    }
    ctx->pc = 0x175A50u;
label_175a50:
    // 0x175a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175a54:
    // 0x175a54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175a58:
    // 0x175a58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a60: 0x3e00008  jr          $ra
    ctx->pc = 0x175A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175A60u;
            // 0x175a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175A68u;
}
