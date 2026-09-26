#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRoadLinkMark__11CAutoMapGenFiii
// Address: 0x1d6050 - 0x1d6188
void SetRoadLinkMark__11CAutoMapGenFiii_0x1d6050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRoadLinkMark__11CAutoMapGenFiii_0x1d6050");
#endif

    ctx->pc = 0x1d6050u;

    // 0x1d6050: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1d6050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d6054: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1d6054u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6058: 0x10e90014  beq         $a3, $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D6058u;
    {
        const bool branch_taken_0x1d6058 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x1D605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6058u;
            // 0x1d605c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6058) {
            ctx->pc = 0x1D60ACu;
            goto label_1d60ac;
        }
    }
    ctx->pc = 0x1D6060u;
    // 0x1d6060: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d6060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6064: 0x10e8000e  beq         $a3, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D6064u;
    {
        const bool branch_taken_0x1d6064 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1d6064) {
            ctx->pc = 0x1D60A0u;
            goto label_1d60a0;
        }
    }
    ctx->pc = 0x1D606Cu;
    // 0x1d606c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d606cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6070: 0x10e90008  beq         $a3, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6070u;
    {
        const bool branch_taken_0x1d6070 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x1D6074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6070u;
            // 0x1d6074: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6070) {
            ctx->pc = 0x1D6094u;
            goto label_1d6094;
        }
    }
    ctx->pc = 0x1D6078u;
    // 0x1d6078: 0x10e80003  beq         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6078u;
    {
        const bool branch_taken_0x1d6078 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1d6078) {
            ctx->pc = 0x1D6088u;
            goto label_1d6088;
        }
    }
    ctx->pc = 0x1D6080u;
    // 0x1d6080: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D6080u;
    {
        const bool branch_taken_0x1d6080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6080u;
            // 0x1d6084: 0x314b00ff  andi        $t3, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6080) {
            ctx->pc = 0x1D60B8u;
            goto label_1d60b8;
        }
    }
    ctx->pc = 0x1D6088u;
label_1d6088:
    // 0x1d6088: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1d6088u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d608c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D608Cu;
    {
        const bool branch_taken_0x1d608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D608Cu;
            // 0x1d6090: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d608c) {
            ctx->pc = 0x1D60B4u;
            goto label_1d60b4;
        }
    }
    ctx->pc = 0x1D6094u;
label_1d6094:
    // 0x1d6094: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d6098: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6098u;
    {
        const bool branch_taken_0x1d6098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6098u;
            // 0x1d609c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6098) {
            ctx->pc = 0x1D60B4u;
            goto label_1d60b4;
        }
    }
    ctx->pc = 0x1D60A0u;
label_1d60a0:
    // 0x1d60a0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1d60a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D60A4u;
    {
        const bool branch_taken_0x1d60a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60A4u;
            // 0x1d60a8: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60a4) {
            ctx->pc = 0x1D60B4u;
            goto label_1d60b4;
        }
    }
    ctx->pc = 0x1D60ACu;
label_1d60ac:
    // 0x1d60ac: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1d60acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1d60b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d60b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d60b4:
    // 0x1d60b4: 0x314b00ff  andi        $t3, $t2, 0xFF
    ctx->pc = 0x1d60b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1d60b8:
    // 0x1d60b8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1d60b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d60bc: 0x848a01b8  lh          $t2, 0x1B8($a0)
    ctx->pc = 0x1d60bcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d60c0: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x1d60c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d60c4: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d60c8: 0x8c8901cc  lw          $t1, 0x1CC($a0)
    ctx->pc = 0x1d60c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d60cc: 0xc38c0  sll         $a3, $t4, 3
    ctx->pc = 0x1d60ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1d60d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d60d4: 0xec3823  subu        $a3, $a3, $t4
    ctx->pc = 0x1d60d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1d60d8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1d60d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1d60dc: 0xca6018  mult        $t4, $a2, $t2
    ctx->pc = 0x1d60dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d60e0: 0xc50c0  sll         $t2, $t4, 3
    ctx->pc = 0x1d60e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1d60e4: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x1d60e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x1d60e8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1d60ec: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1d60ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1d60f0: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1d60f4: 0x9149000b  lbu         $t1, 0xB($t2)
    ctx->pc = 0x1d60f4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 11)));
    // 0x1d60f8: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x1d60f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x1d60fc: 0xa149000b  sb          $t1, 0xB($t2)
    ctx->pc = 0x1d60fcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 11), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d6100: 0x848a01b8  lh          $t2, 0x1B8($a0)
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d6104: 0x8c8901cc  lw          $t1, 0x1CC($a0)
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d6108: 0x70ca5018  mult1       $t2, $a2, $t2
    ctx->pc = 0x1d6108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d610c: 0xa30c0  sll         $a2, $t2, 3
    ctx->pc = 0x1d610cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d6110: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x1d6110u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1d6114: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d6118: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1d611c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d6120: 0x90c5000a  lbu         $a1, 0xA($a2)
    ctx->pc = 0x1d6120u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x1d6124: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x1d6124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x1d6128: 0xa0c5000a  sb          $a1, 0xA($a2)
    ctx->pc = 0x1d6128u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d612c: 0x848601b8  lh          $a2, 0x1B8($a0)
    ctx->pc = 0x1d612cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d6130: 0x8c8501cc  lw          $a1, 0x1CC($a0)
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d6134: 0x664818  mult        $t1, $v1, $a2
    ctx->pc = 0x1d6134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1d6138: 0x930c0  sll         $a2, $t1, 3
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d613c: 0xc93023  subu        $a2, $a2, $t1
    ctx->pc = 0x1d613cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1d6140: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6140u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d6144: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1d6144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d6148: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d614c: 0x90c5000b  lbu         $a1, 0xB($a2)
    ctx->pc = 0x1d614cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x1d6150: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1d6150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1d6154: 0xa0c5000b  sb          $a1, 0xB($a2)
    ctx->pc = 0x1d6154u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d6158: 0x848501b8  lh          $a1, 0x1B8($a0)
    ctx->pc = 0x1d6158u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d615c: 0x8c8401cc  lw          $a0, 0x1CC($a0)
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d6160: 0x70652818  mult1       $a1, $v1, $a1
    ctx->pc = 0x1d6160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d6164: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d6164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d6168: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d616c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d616cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d6170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d6170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6174: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x1d6174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d6178: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x1d6178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1d617c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1d617cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1d6180: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6180u;
            // 0x1d6184: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6188u;
}
