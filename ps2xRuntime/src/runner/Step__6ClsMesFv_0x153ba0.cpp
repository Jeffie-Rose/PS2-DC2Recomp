#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__6ClsMesFv
// Address: 0x153ba0 - 0x153e10
void Step__6ClsMesFv_0x153ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__6ClsMesFv_0x153ba0");
#endif

    switch (ctx->pc) {
        case 0x153be8u: goto label_153be8;
        case 0x153c20u: goto label_153c20;
        case 0x153c48u: goto label_153c48;
        case 0x153c50u: goto label_153c50;
        case 0x153c64u: goto label_153c64;
        case 0x153ca8u: goto label_153ca8;
        case 0x153d08u: goto label_153d08;
        case 0x153d80u: goto label_153d80;
        case 0x153ddcu: goto label_153ddc;
        default: break;
    }

    ctx->pc = 0x153ba0u;

    // 0x153ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153bac: 0x8c821b28  lw          $v0, 0x1B28($a0)
    ctx->pc = 0x153bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6952)));
    // 0x153bb0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x153BB0u;
    {
        const bool branch_taken_0x153bb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x153BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BB0u;
            // 0x153bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb0) {
            ctx->pc = 0x153C20u;
            goto label_153c20;
        }
    }
    ctx->pc = 0x153BB8u;
    // 0x153bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x153bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153bbc: 0xae021b28  sw          $v0, 0x1B28($s0)
    ctx->pc = 0x153bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6952), GPR_U32(ctx, 2));
    // 0x153bc0: 0x8e021b28  lw          $v0, 0x1B28($s0)
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6952)));
    // 0x153bc4: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x153BC4u;
    {
        const bool branch_taken_0x153bc4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x153bc4) {
            ctx->pc = 0x153C20u;
            goto label_153c20;
        }
    }
    ctx->pc = 0x153BCCu;
    // 0x153bcc: 0x8e021ae4  lw          $v0, 0x1AE4($s0)
    ctx->pc = 0x153bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6884)));
    // 0x153bd0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x153BD0u;
    {
        const bool branch_taken_0x153bd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x153BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153BD0u;
            // 0x153bd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bd0) {
            ctx->pc = 0x153BDCu;
            goto label_153bdc;
        }
    }
    ctx->pc = 0x153BD8u;
    // 0x153bd8: 0xae001b00  sw          $zero, 0x1B00($s0)
    ctx->pc = 0x153bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6912), GPR_U32(ctx, 0));
label_153bdc:
    // 0x153bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153be0: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x153BE0u;
    SET_GPR_U32(ctx, 31, 0x153BE8u);
    ctx->pc = 0x153BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153BE0u;
            // 0x153be4: 0xae021ae4  sw          $v0, 0x1AE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153BE8u; }
        if (ctx->pc != 0x153BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153BE8u; }
        if (ctx->pc != 0x153BE8u) { return; }
    }
    ctx->pc = 0x153BE8u;
label_153be8:
    // 0x153be8: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x153be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x153bec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x153becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153bf0: 0xae0317e4  sw          $v1, 0x17E4($s0)
    ctx->pc = 0x153bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 3));
    // 0x153bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153bf8: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x153bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x153bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c00: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x153c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x153c04: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x153c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x153c08: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x153c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x153c0c: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x153c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x153c10: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x153c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
    // 0x153c14: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x153c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x153c18: 0xc054cdc  jal         func_153370
    ctx->pc = 0x153C18u;
    SET_GPR_U32(ctx, 31, 0x153C20u);
    ctx->pc = 0x153C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153C18u;
            // 0x153c1c: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C20u; }
        if (ctx->pc != 0x153C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C20u; }
        if (ctx->pc != 0x153C20u) { return; }
    }
    ctx->pc = 0x153C20u;
label_153c20:
    // 0x153c20: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x153c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x153c24: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x153C24u;
    {
        const bool branch_taken_0x153c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C24u;
            // 0x153c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c24) {
            ctx->pc = 0x153C5Cu;
            goto label_153c5c;
        }
    }
    ctx->pc = 0x153C2Cu;
    // 0x153c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153c30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153C30u;
    {
        const bool branch_taken_0x153c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x153C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C30u;
            // 0x153c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c30) {
            ctx->pc = 0x153C40u;
            goto label_153c40;
        }
    }
    ctx->pc = 0x153C38u;
    // 0x153c38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153C38u;
    {
        const bool branch_taken_0x153c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c38) {
            ctx->pc = 0x153C58u;
            goto label_153c58;
        }
    }
    ctx->pc = 0x153C40u;
label_153c40:
    // 0x153c40: 0xc054d70  jal         func_1535C0
    ctx->pc = 0x153C40u;
    SET_GPR_U32(ctx, 31, 0x153C48u);
    ctx->pc = 0x1535C0u;
    if (runtime->hasFunction(0x1535C0u)) {
        auto targetFn = runtime->lookupFunction(0x1535C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C48u; }
        if (ctx->pc != 0x153C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepNpcName__6ClsMesFv_0x1535c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C48u; }
        if (ctx->pc != 0x153C48u) { return; }
    }
    ctx->pc = 0x153C48u;
label_153c48:
    // 0x153c48: 0xc054e30  jal         func_1538C0
    ctx->pc = 0x153C48u;
    SET_GPR_U32(ctx, 31, 0x153C50u);
    ctx->pc = 0x153C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153C48u;
            // 0x153c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1538C0u;
    if (runtime->hasFunction(0x1538C0u)) {
        auto targetFn = runtime->lookupFunction(0x1538C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C50u; }
        if (ctx->pc != 0x153C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepNormal__6ClsMesFv_0x1538c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C50u; }
        if (ctx->pc != 0x153C50u) { return; }
    }
    ctx->pc = 0x153C50u;
label_153c50:
    // 0x153c50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153C50u;
    {
        const bool branch_taken_0x153c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C50u;
            // 0x153c54: 0x8e0317cc  lw          $v1, 0x17CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c50) {
            ctx->pc = 0x153C68u;
            goto label_153c68;
        }
    }
    ctx->pc = 0x153C58u;
label_153c58:
    // 0x153c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153c5c:
    // 0x153c5c: 0xc054e30  jal         func_1538C0
    ctx->pc = 0x153C5Cu;
    SET_GPR_U32(ctx, 31, 0x153C64u);
    ctx->pc = 0x1538C0u;
    if (runtime->hasFunction(0x1538C0u)) {
        auto targetFn = runtime->lookupFunction(0x1538C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C64u; }
        if (ctx->pc != 0x153C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepNormal__6ClsMesFv_0x1538c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153C64u; }
        if (ctx->pc != 0x153C64u) { return; }
    }
    ctx->pc = 0x153C64u;
label_153c64:
    // 0x153c64: 0x8e0317cc  lw          $v1, 0x17CC($s0)
    ctx->pc = 0x153c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
label_153c68:
    // 0x153c68: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153C68u;
    {
        const bool branch_taken_0x153c68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x153c68) {
            ctx->pc = 0x153C78u;
            goto label_153c78;
        }
    }
    ctx->pc = 0x153C70u;
    // 0x153c70: 0x31823  negu        $v1, $v1
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x153c74: 0xae0317cc  sw          $v1, 0x17CC($s0)
    ctx->pc = 0x153c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6092), GPR_U32(ctx, 3));
label_153c78:
    // 0x153c78: 0x8e0317c8  lw          $v1, 0x17C8($s0)
    ctx->pc = 0x153c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6088)));
    // 0x153c7c: 0x8e0517cc  lw          $a1, 0x17CC($s0)
    ctx->pc = 0x153c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
    // 0x153c80: 0x8e0417c4  lw          $a0, 0x17C4($s0)
    ctx->pc = 0x153c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6084)));
    // 0x153c84: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x153c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153c88: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x153c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x153c8c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x153C8Cu;
    {
        const bool branch_taken_0x153c8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x153C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153C8Cu;
            // 0x153c90: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c8c) {
            ctx->pc = 0x153CD0u;
            goto label_153cd0;
        }
    }
    ctx->pc = 0x153C94u;
    // 0x153c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x153c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c98: 0xae0317c4  sw          $v1, 0x17C4($s0)
    ctx->pc = 0x153c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 3));
    // 0x153c9c: 0x8e0617cc  lw          $a2, 0x17CC($s0)
    ctx->pc = 0x153c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
    // 0x153ca0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153CA0u;
    {
        const bool branch_taken_0x153ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153CA0u;
            // 0x153ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ca0) {
            ctx->pc = 0x153CBCu;
            goto label_153cbc;
        }
    }
    ctx->pc = 0x153CA8u;
label_153ca8:
    // 0x153ca8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x153ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x153cac: 0x848301e4  lh          $v1, 0x1E4($a0)
    ctx->pc = 0x153cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x153cb0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x153cb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x153cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x153cb8: 0xa48301e4  sh          $v1, 0x1E4($a0)
    ctx->pc = 0x153cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 484), (uint16_t)GPR_U32(ctx, 3));
label_153cbc:
    // 0x153cbc: 0x0  nop
    ctx->pc = 0x153cbcu;
    // NOP
    // 0x153cc0: 0x8e0317c0  lw          $v1, 0x17C0($s0)
    ctx->pc = 0x153cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x153cc4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x153cc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153cc8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x153CC8u;
    {
        const bool branch_taken_0x153cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153CC8u;
            // 0x153ccc: 0x2072021  addu        $a0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cc8) {
            ctx->pc = 0x153CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153CD0u;
label_153cd0:
    // 0x153cd0: 0x8e0417c8  lw          $a0, 0x17C8($s0)
    ctx->pc = 0x153cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6088)));
    // 0x153cd4: 0x8e0317cc  lw          $v1, 0x17CC($s0)
    ctx->pc = 0x153cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
    // 0x153cd8: 0x8e0717c4  lw          $a3, 0x17C4($s0)
    ctx->pc = 0x153cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6084)));
    // 0x153cdc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x153cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153ce0: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x153ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x153ce4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x153CE4u;
    {
        const bool branch_taken_0x153ce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153CE4u;
            // 0x153ce8: 0xe4082a  slt         $at, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ce4) {
            ctx->pc = 0x153D30u;
            goto label_153d30;
        }
    }
    ctx->pc = 0x153CECu;
    // 0x153cec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x153CECu;
    {
        const bool branch_taken_0x153cec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153CECu;
            // 0x153cf0: 0xe42823  subu        $a1, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cec) {
            ctx->pc = 0x153D30u;
            goto label_153d30;
        }
    }
    ctx->pc = 0x153CF4u;
    // 0x153cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153cf8: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x153cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x153cfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x153cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153D00u;
    {
        const bool branch_taken_0x153d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D00u;
            // 0x153d04: 0xae0317c4  sw          $v1, 0x17C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d00) {
            ctx->pc = 0x153D1Cu;
            goto label_153d1c;
        }
    }
    ctx->pc = 0x153D08u;
label_153d08:
    // 0x153d08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x153d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x153d0c: 0x848301e4  lh          $v1, 0x1E4($a0)
    ctx->pc = 0x153d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x153d10: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x153d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x153d14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153d18: 0xa48301e4  sh          $v1, 0x1E4($a0)
    ctx->pc = 0x153d18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 484), (uint16_t)GPR_U32(ctx, 3));
label_153d1c:
    // 0x153d1c: 0x0  nop
    ctx->pc = 0x153d1cu;
    // NOP
    // 0x153d20: 0x8e0317c0  lw          $v1, 0x17C0($s0)
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x153d24: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x153d24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153d28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x153D28u;
    {
        const bool branch_taken_0x153d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D28u;
            // 0x153d2c: 0x2072021  addu        $a0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d28) {
            ctx->pc = 0x153D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153d08;
        }
    }
    ctx->pc = 0x153D30u;
label_153d30:
    // 0x153d30: 0x8e0417c4  lw          $a0, 0x17C4($s0)
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6084)));
    // 0x153d34: 0x8e0317c8  lw          $v1, 0x17C8($s0)
    ctx->pc = 0x153d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6088)));
    // 0x153d38: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x153D38u;
    {
        const bool branch_taken_0x153d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153d38) {
            ctx->pc = 0x153D44u;
            goto label_153d44;
        }
    }
    ctx->pc = 0x153D40u;
    // 0x153d40: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x153d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
label_153d44:
    // 0x153d44: 0x8e0417c8  lw          $a0, 0x17C8($s0)
    ctx->pc = 0x153d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6088)));
    // 0x153d48: 0x8e0717c4  lw          $a3, 0x17C4($s0)
    ctx->pc = 0x153d48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6084)));
    // 0x153d4c: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x153d4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x153d50: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x153D50u;
    {
        const bool branch_taken_0x153d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153d50) {
            ctx->pc = 0x153DA8u;
            goto label_153da8;
        }
    }
    ctx->pc = 0x153D58u;
    // 0x153d58: 0x8e0317cc  lw          $v1, 0x17CC($s0)
    ctx->pc = 0x153d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
    // 0x153d5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153d60: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x153d60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153d64: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x153D64u;
    {
        const bool branch_taken_0x153d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D64u;
            // 0x153d68: 0x872823  subu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d64) {
            ctx->pc = 0x153DA8u;
            goto label_153da8;
        }
    }
    ctx->pc = 0x153D6Cu;
    // 0x153d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d70: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x153d74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x153d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153D78u;
    {
        const bool branch_taken_0x153d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153D78u;
            // 0x153d7c: 0xae0317c4  sw          $v1, 0x17C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d78) {
            ctx->pc = 0x153D94u;
            goto label_153d94;
        }
    }
    ctx->pc = 0x153D80u;
label_153d80:
    // 0x153d80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x153d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x153d84: 0x848301e4  lh          $v1, 0x1E4($a0)
    ctx->pc = 0x153d84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x153d88: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x153d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x153d8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153d90: 0xa48301e4  sh          $v1, 0x1E4($a0)
    ctx->pc = 0x153d90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 484), (uint16_t)GPR_U32(ctx, 3));
label_153d94:
    // 0x153d94: 0x0  nop
    ctx->pc = 0x153d94u;
    // NOP
    // 0x153d98: 0x8e0317c0  lw          $v1, 0x17C0($s0)
    ctx->pc = 0x153d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x153d9c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x153d9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153da0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x153DA0u;
    {
        const bool branch_taken_0x153da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153DA0u;
            // 0x153da4: 0x2072021  addu        $a0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153da0) {
            ctx->pc = 0x153D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153d80;
        }
    }
    ctx->pc = 0x153DA8u;
label_153da8:
    // 0x153da8: 0x8e0517cc  lw          $a1, 0x17CC($s0)
    ctx->pc = 0x153da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
    // 0x153dac: 0x8e0317c8  lw          $v1, 0x17C8($s0)
    ctx->pc = 0x153dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6088)));
    // 0x153db0: 0x8e0417c4  lw          $a0, 0x17C4($s0)
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6084)));
    // 0x153db4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153db8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x153db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153dbc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x153DBCu;
    {
        const bool branch_taken_0x153dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153DBCu;
            // 0x153dc0: 0x851823  subu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dbc) {
            ctx->pc = 0x153E00u;
            goto label_153e00;
        }
    }
    ctx->pc = 0x153DC4u;
    // 0x153dc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x153dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153dc8: 0xae0317c4  sw          $v1, 0x17C4($s0)
    ctx->pc = 0x153dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 3));
    // 0x153dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153dd0: 0x8e0317cc  lw          $v1, 0x17CC($s0)
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6092)));
    // 0x153dd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153DD4u;
    {
        const bool branch_taken_0x153dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153DD4u;
            // 0x153dd8: 0x33023  negu        $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dd4) {
            ctx->pc = 0x153DF0u;
            goto label_153df0;
        }
    }
    ctx->pc = 0x153DDCu;
label_153ddc:
    // 0x153ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x153ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x153de0: 0x848301e4  lh          $v1, 0x1E4($a0)
    ctx->pc = 0x153de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x153de4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x153de8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x153dec: 0xa48301e4  sh          $v1, 0x1E4($a0)
    ctx->pc = 0x153decu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 484), (uint16_t)GPR_U32(ctx, 3));
label_153df0:
    // 0x153df0: 0x8e0317c0  lw          $v1, 0x17C0($s0)
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6080)));
    // 0x153df4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x153df4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x153df8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x153DF8u;
    {
        const bool branch_taken_0x153df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153DF8u;
            // 0x153dfc: 0x2072021  addu        $a0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153df8) {
            ctx->pc = 0x153DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_153ddc;
        }
    }
    ctx->pc = 0x153E00u;
label_153e00:
    // 0x153e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153e08: 0x3e00008  jr          $ra
    ctx->pc = 0x153E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153E08u;
            // 0x153e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153E10u;
}
