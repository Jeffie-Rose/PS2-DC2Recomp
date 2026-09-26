#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceMSIn_PutMsg
// Address: 0x123d38 - 0x123de8
void sceMSIn_PutMsg_0x123d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMSIn_PutMsg_0x123d38");
#endif

    switch (ctx->pc) {
        case 0x123ddcu: goto label_123ddc;
        default: break;
    }

    ctx->pc = 0x123d38u;

    // 0x123d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123d3c: 0x30c300f0  andi        $v1, $a2, 0xF0
    ctx->pc = 0x123d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x123d40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123d44: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x123d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x123d48: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x123D48u;
    {
        const bool branch_taken_0x123d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D48u;
            // 0x123d4c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d48) {
            ctx->pc = 0x123DD0u;
            goto label_123dd0;
        }
    }
    ctx->pc = 0x123D50u;
    // 0x123d50: 0x2c6200b1  sltiu       $v0, $v1, 0xB1
    ctx->pc = 0x123d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)177) ? 1 : 0);
    // 0x123d54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x123D54u;
    {
        const bool branch_taken_0x123d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D54u;
            // 0x123d58: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d54) {
            ctx->pc = 0x123D90u;
            goto label_123d90;
        }
    }
    ctx->pc = 0x123D5Cu;
    // 0x123d5c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x123D5Cu;
    {
        const bool branch_taken_0x123d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D5Cu;
            // 0x123d60: 0x2c620091  sltiu       $v0, $v1, 0x91 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)145) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d5c) {
            ctx->pc = 0x123DD0u;
            goto label_123dd0;
        }
    }
    ctx->pc = 0x123D64u;
    // 0x123d64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123D64u;
    {
        const bool branch_taken_0x123d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D64u;
            // 0x123d68: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d64) {
            ctx->pc = 0x123D7Cu;
            goto label_123d7c;
        }
    }
    ctx->pc = 0x123D6Cu;
    // 0x123d6c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x123D6Cu;
    {
        const bool branch_taken_0x123d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D6Cu;
            // 0x123d70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d6c) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123D74u;
    // 0x123d74: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x123D74u;
    {
        const bool branch_taken_0x123d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D74u;
            // 0x123d78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d74) {
            ctx->pc = 0x123DE0u;
            goto label_123de0;
        }
    }
    ctx->pc = 0x123D7Cu;
label_123d7c:
    // 0x123d7c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x123d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x123d80: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x123D80u;
    {
        const bool branch_taken_0x123d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D80u;
            // 0x123d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d80) {
            ctx->pc = 0x123DD0u;
            goto label_123dd0;
        }
    }
    ctx->pc = 0x123D88u;
    // 0x123d88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x123D88u;
    {
        const bool branch_taken_0x123d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D88u;
            // 0x123d8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d88) {
            ctx->pc = 0x123DE0u;
            goto label_123de0;
        }
    }
    ctx->pc = 0x123D90u;
label_123d90:
    // 0x123d90: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x123d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x123d94: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x123D94u;
    {
        const bool branch_taken_0x123d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D94u;
            // 0x123d98: 0x2c6200d1  sltiu       $v0, $v1, 0xD1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)209) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d94) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123D9Cu;
    // 0x123d9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123D9Cu;
    {
        const bool branch_taken_0x123d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D9Cu;
            // 0x123da0: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d9c) {
            ctx->pc = 0x123DB4u;
            goto label_123db4;
        }
    }
    ctx->pc = 0x123DA4u;
    // 0x123da4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123DA4u;
    {
        const bool branch_taken_0x123da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DA4u;
            // 0x123da8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123da4) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123DACu;
    // 0x123dac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x123DACu;
    {
        const bool branch_taken_0x123dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DACu;
            // 0x123db0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dac) {
            ctx->pc = 0x123DE0u;
            goto label_123de0;
        }
    }
    ctx->pc = 0x123DB4u;
label_123db4:
    // 0x123db4: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x123db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x123db8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123DB8u;
    {
        const bool branch_taken_0x123db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x123DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DB8u;
            // 0x123dbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123db8) {
            ctx->pc = 0x123DD0u;
            goto label_123dd0;
        }
    }
    ctx->pc = 0x123DC0u;
    // 0x123dc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x123DC0u;
    {
        const bool branch_taken_0x123dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DC0u;
            // 0x123dc4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dc0) {
            ctx->pc = 0x123DE0u;
            goto label_123de0;
        }
    }
    ctx->pc = 0x123DC8u;
label_123dc8:
    // 0x123dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123DC8u;
    {
        const bool branch_taken_0x123dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DC8u;
            // 0x123dcc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dc8) {
            ctx->pc = 0x123DD4u;
            goto label_123dd4;
        }
    }
    ctx->pc = 0x123DD0u;
label_123dd0:
    // 0x123dd0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x123dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_123dd4:
    // 0x123dd4: 0xc048f28  jal         func_123CA0
    ctx->pc = 0x123DD4u;
    SET_GPR_U32(ctx, 31, 0x123DDCu);
    ctx->pc = 0x123DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123DD4u;
            // 0x123dd8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123CA0u;
    if (runtime->hasFunction(0x123CA0u)) {
        auto targetFn = runtime->lookupFunction(0x123CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123DDCu; }
        if (ctx->pc != 0x123DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        put_message_0x123ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123DDCu; }
        if (ctx->pc != 0x123DDCu) { return; }
    }
    ctx->pc = 0x123DDCu;
label_123ddc:
    // 0x123ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_123de0:
    // 0x123de0: 0x3e00008  jr          $ra
    ctx->pc = 0x123DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DE0u;
            // 0x123de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123DE8u;
}
