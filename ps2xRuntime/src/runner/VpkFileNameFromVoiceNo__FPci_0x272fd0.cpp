#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: VpkFileNameFromVoiceNo__FPci
// Address: 0x272fd0 - 0x273120
void VpkFileNameFromVoiceNo__FPci_0x272fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VpkFileNameFromVoiceNo__FPci_0x272fd0");
#endif

    switch (ctx->pc) {
        case 0x273094u: goto label_273094;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730f8u: goto label_2730f8;
        default: break;
    }

    ctx->pc = 0x272fd0u;

    // 0x272fd0: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x272fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
    // 0x272fd4: 0x27bdf5b0  addiu       $sp, $sp, -0xA50
    ctx->pc = 0x272fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964656));
    // 0x272fd8: 0x34428bad  ori         $v0, $v0, 0x8BAD
    ctx->pc = 0x272fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
    // 0x272fdc: 0x53fc2  srl         $a3, $a1, 31
    ctx->pc = 0x272fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x272fe0: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x272fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x272fe4: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x272fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x272fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272fec: 0x3010  mfhi        $a2
    ctx->pc = 0x272fecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x272ff0: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x272ff0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x272ff4: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x272ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x272ff8: 0x11230022  beq         $t1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x272FF8u;
    {
        const bool branch_taken_0x272ff8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x272FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272FF8u;
            // 0x272ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ff8) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x273000u;
    // 0x273000: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x273000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x273004: 0x1123001f  beq         $t1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x273004u;
    {
        const bool branch_taken_0x273004 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x273004) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x27300Cu;
    // 0x27300c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x273010: 0x1123001c  beq         $t1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x273010u;
    {
        const bool branch_taken_0x273010 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x273010) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x273018u;
    // 0x273018: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x273018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x27301c: 0x11230019  beq         $t1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x27301Cu;
    {
        const bool branch_taken_0x27301c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x27301c) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x273024u;
    // 0x273024: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x273024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x273028: 0x11230016  beq         $t1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x273028u;
    {
        const bool branch_taken_0x273028 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x273028) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x273030u;
    // 0x273030: 0x24030069  addiu       $v1, $zero, 0x69
    ctx->pc = 0x273030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x273034: 0x11230013  beq         $t1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x273034u;
    {
        const bool branch_taken_0x273034 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x273034) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x27303Cu;
    // 0x27303c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27303cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273040: 0x11260003  beq         $t1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x273040u;
    {
        const bool branch_taken_0x273040 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        ctx->pc = 0x273044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273040u;
            // 0x273044: 0x28a329d1  slti        $v1, $a1, 0x29D1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10705) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273040) {
            ctx->pc = 0x273050u;
            goto label_273050;
        }
    }
    ctx->pc = 0x273048u;
    // 0x273048: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x273048u;
    {
        const bool branch_taken_0x273048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273048) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x273050u;
label_273050:
    // 0x273050: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x273050u;
    {
        const bool branch_taken_0x273050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273050u;
            // 0x273054: 0x28a3283c  slti        $v1, $a1, 0x283C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273050) {
            ctx->pc = 0x27306Cu;
            goto label_27306c;
        }
    }
    ctx->pc = 0x273058u;
    // 0x273058: 0x28a129e1  slti        $at, $a1, 0x29E1
    ctx->pc = 0x273058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10721) ? 1 : 0);
    // 0x27305c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x27305Cu;
    {
        const bool branch_taken_0x27305c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27305c) {
            ctx->pc = 0x273068u;
            goto label_273068;
        }
    }
    ctx->pc = 0x273064u;
    // 0x273064: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x273064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_273068:
    // 0x273068: 0x28a3283c  slti        $v1, $a1, 0x283C
    ctx->pc = 0x273068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10300) ? 1 : 0);
label_27306c:
    // 0x27306c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27306Cu;
    {
        const bool branch_taken_0x27306c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27306c) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x273074u;
    // 0x273074: 0x28a129cd  slti        $at, $a1, 0x29CD
    ctx->pc = 0x273074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10701) ? 1 : 0);
    // 0x273078: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x273078u;
    {
        const bool branch_taken_0x273078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273078) {
            ctx->pc = 0x273084u;
            goto label_273084;
        }
    }
    ctx->pc = 0x273080u;
    // 0x273080: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_273084:
    // 0x273084: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x273084u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x273088: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x273088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27308c: 0x25081e20  addiu       $t0, $t0, 0x1E20
    ctx->pc = 0x27308cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7712));
    // 0x273090: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x273090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_273094:
    // 0x273094: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x273094u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x273098: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x273098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x27309c: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x27309cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2730a0: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x2730a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x2730a4: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2730a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x2730a8: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x2730a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x2730ac: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2730ACu;
    {
        const bool branch_taken_0x2730ac = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2730B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730ACu;
            // 0x2730b0: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730ac) {
            ctx->pc = 0x273094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273094;
        }
    }
    ctx->pc = 0x2730B4u;
    // 0x2730b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2730b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2730b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2730bc:
    // 0x2730bc: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x2730bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2730c0: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x2730c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2730c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2730c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2730c8: 0x1523000d  bne         $t1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2730C8u;
    {
        const bool branch_taken_0x2730c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x2730c8) {
            ctx->pc = 0x273100u;
            goto label_273100;
        }
    }
    ctx->pc = 0x2730D0u;
    // 0x2730d0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2730d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2730d4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2730D4u;
    {
        const bool branch_taken_0x2730d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2730d4) {
            ctx->pc = 0x273100u;
            goto label_273100;
        }
    }
    ctx->pc = 0x2730DCu;
    // 0x2730dc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2730dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2730e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2730e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2730e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2730e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2730e8: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2730e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2730ec: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x2730ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2730f0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2730F0u;
    SET_GPR_U32(ctx, 31, 0x2730F8u);
    ctx->pc = 0x2730F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2730F0u;
            // 0x2730f4: 0x24a5cab8  addiu       $a1, $a1, -0x3548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2730F8u; }
        if (ctx->pc != 0x2730F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2730F8u; }
        if (ctx->pc != 0x2730F8u) { return; }
    }
    ctx->pc = 0x2730F8u;
label_2730f8:
    // 0x2730f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2730F8u;
    {
        const bool branch_taken_0x2730f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2730F8u;
            // 0x2730fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730f8) {
            ctx->pc = 0x273114u;
            goto label_273114;
        }
    }
    ctx->pc = 0x273100u;
label_273100:
    // 0x273100: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x273100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x273104: 0x28a300a4  slti        $v1, $a1, 0xA4
    ctx->pc = 0x273104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)164) ? 1 : 0);
    // 0x273108: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x273108u;
    {
        const bool branch_taken_0x273108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273108u;
            // 0x27310c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273108) {
            ctx->pc = 0x2730BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2730bc;
        }
    }
    ctx->pc = 0x273110u;
    // 0x273110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273114:
    // 0x273114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273118: 0x3e00008  jr          $ra
    ctx->pc = 0x273118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273118u;
            // 0x27311c: 0x27bd0a50  addiu       $sp, $sp, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273120u;
}
