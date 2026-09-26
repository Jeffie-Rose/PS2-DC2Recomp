#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPackFile__FPUiPcPi
// Address: 0x149cd0 - 0x149db8
void GetPackFile__FPUiPcPi_0x149cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPackFile__FPUiPcPi_0x149cd0");
#endif

    switch (ctx->pc) {
        case 0x149d24u: goto label_149d24;
        case 0x149d58u: goto label_149d58;
        case 0x149d60u: goto label_149d60;
        default: break;
    }

    ctx->pc = 0x149cd0u;

    // 0x149cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x149cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149ce4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149CE4u;
    {
        const bool branch_taken_0x149ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x149CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149CE4u;
            // 0x149ce8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ce4) {
            ctx->pc = 0x149CF4u;
            goto label_149cf4;
        }
    }
    ctx->pc = 0x149CECu;
    // 0x149cec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x149CECu;
    {
        const bool branch_taken_0x149cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149CECu;
            // 0x149cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cec) {
            ctx->pc = 0x149DA0u;
            goto label_149da0;
        }
    }
    ctx->pc = 0x149CF4u;
label_149cf4:
    // 0x149cf4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149CF4u;
    {
        const bool branch_taken_0x149cf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x149cf4) {
            ctx->pc = 0x149D04u;
            goto label_149d04;
        }
    }
    ctx->pc = 0x149CFCu;
    // 0x149cfc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x149CFCu;
    {
        const bool branch_taken_0x149cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149CFCu;
            // 0x149d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cfc) {
            ctx->pc = 0x149DA0u;
            goto label_149da0;
        }
    }
    ctx->pc = 0x149D04u;
label_149d04:
    // 0x149d04: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x149d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149d08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149D08u;
    {
        const bool branch_taken_0x149d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D08u;
            // 0x149d0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d08) {
            ctx->pc = 0x149D1Cu;
            goto label_149d1c;
        }
    }
    ctx->pc = 0x149D10u;
    // 0x149d10: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x149D10u;
    {
        const bool branch_taken_0x149d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D10u;
            // 0x149d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d10) {
            ctx->pc = 0x149DA0u;
            goto label_149da0;
        }
    }
    ctx->pc = 0x149D18u;
    // 0x149d18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x149d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_149d1c:
    // 0x149d1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149D1Cu;
    {
        const bool branch_taken_0x149d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D1Cu;
            // 0x149d20: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d1c) {
            ctx->pc = 0x149D3Cu;
            goto label_149d3c;
        }
    }
    ctx->pc = 0x149D24u;
label_149d24:
    // 0x149d24: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x149d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x149d28: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x149d28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x149d2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x149D2Cu;
    {
        const bool branch_taken_0x149d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x149d2c) {
            ctx->pc = 0x149D38u;
            goto label_149d38;
        }
    }
    ctx->pc = 0x149D34u;
    // 0x149d34: 0x24b10001  addiu       $s1, $a1, 0x1
    ctx->pc = 0x149d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_149d38:
    // 0x149d38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x149d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_149d3c:
    // 0x149d3c: 0x0  nop
    ctx->pc = 0x149d3cu;
    // NOP
    // 0x149d40: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x149d40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149d44: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x149D44u;
    {
        const bool branch_taken_0x149d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x149d44) {
            ctx->pc = 0x149D24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149d24;
        }
    }
    ctx->pc = 0x149D4Cu;
    // 0x149d4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x149D4Cu;
    {
        const bool branch_taken_0x149d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D4Cu;
            // 0x149d50: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d4c) {
            ctx->pc = 0x149D8Cu;
            goto label_149d8c;
        }
    }
    ctx->pc = 0x149D54u;
    // 0x149d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_149d58:
    // 0x149d58: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x149D58u;
    SET_GPR_U32(ctx, 31, 0x149D60u);
    ctx->pc = 0x149D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D58u;
            // 0x149d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D60u; }
        if (ctx->pc != 0x149D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D60u; }
        if (ctx->pc != 0x149D60u) { return; }
    }
    ctx->pc = 0x149D60u;
label_149d60:
    // 0x149d60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149D60u;
    {
        const bool branch_taken_0x149d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149d60) {
            ctx->pc = 0x149D84u;
            goto label_149d84;
        }
    }
    ctx->pc = 0x149D68u;
    // 0x149d68: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x149d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x149d6c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x149D6Cu;
    {
        const bool branch_taken_0x149d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D6Cu;
            // 0x149d70: 0x2421021  addu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d6c) {
            ctx->pc = 0x149DA0u;
            goto label_149da0;
        }
    }
    ctx->pc = 0x149D74u;
    // 0x149d74: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x149d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x149d78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x149d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x149d7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x149D7Cu;
    {
        const bool branch_taken_0x149d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D7Cu;
            // 0x149d80: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d7c) {
            ctx->pc = 0x149DA4u;
            goto label_149da4;
        }
    }
    ctx->pc = 0x149D84u;
label_149d84:
    // 0x149d84: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x149d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x149d88: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_149d8c:
    // 0x149d8c: 0x0  nop
    ctx->pc = 0x149d8cu;
    // NOP
    // 0x149d90: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x149d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149d94: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x149D94u;
    {
        const bool branch_taken_0x149d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D94u;
            // 0x149d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d94) {
            ctx->pc = 0x149D58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149d58;
        }
    }
    ctx->pc = 0x149D9Cu;
    // 0x149d9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149da0:
    // 0x149da0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x149da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_149da4:
    // 0x149da4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149db0: 0x3e00008  jr          $ra
    ctx->pc = 0x149DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149DB0u;
            // 0x149db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149DB8u;
}
