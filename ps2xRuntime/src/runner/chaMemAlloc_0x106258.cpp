#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: chaMemAlloc
// Address: 0x106258 - 0x1063d4
void chaMemAlloc_0x106258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chaMemAlloc_0x106258");
#endif

    switch (ctx->pc) {
        case 0x106310u: goto label_106310;
        default: break;
    }

    ctx->pc = 0x106258u;

    // 0x106258: 0x3c0c0032  lui         $t4, 0x32
    ctx->pc = 0x106258u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)50 << 16));
    // 0x10625c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10625cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x106260: 0x8d856420  lw          $a1, 0x6420($t4)
    ctx->pc = 0x106260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 25632)));
    // 0x106264: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x106264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x106268: 0x25866420  addiu       $a2, $t4, 0x6420
    ctx->pc = 0x106268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 25632));
    // 0x10626c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x10626cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106270: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x106270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x106274: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x106274u;
    {
        const bool branch_taken_0x106274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x106278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106274u;
            // 0x106278: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106274) {
            ctx->pc = 0x1062F0u;
            goto label_1062f0;
        }
    }
    ctx->pc = 0x10627Cu;
    // 0x10627c: 0xdd836420  ld          $v1, 0x6420($t4)
    ctx->pc = 0x10627cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 25632)));
    // 0x106280: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x106280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x106284: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x106284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x106288: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x106288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x10628c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x10628cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x106290: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x106290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x106294: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x106294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x106298: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x106298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10629c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10629cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1062a0: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1062a4: 0x240227fe  addiu       $v0, $zero, 0x27FE
    ctx->pc = 0x1062a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10238));
    // 0x1062a8: 0xdce41ff8  ld          $a0, 0x1FF8($a3)
    ctx->pc = 0x1062a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8184)));
    // 0x1062ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1062acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1062b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1062b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1062b4: 0x34c60fff  ori         $a2, $a2, 0xFFF
    ctx->pc = 0x1062b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4095);
    // 0x1062b8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1062b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1062bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1062bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1062c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1062c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1062c4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1062c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1062c8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1062c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1062cc: 0xfd836420  sd          $v1, 0x6420($t4)
    ctx->pc = 0x1062ccu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 25632), GPR_U64(ctx, 3));
    // 0x1062d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1062d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1062d4: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1062d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1062d8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1062d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1062dc: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x1062dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1062e0: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1062e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1062e4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1062e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1062e8: 0x8d856420  lw          $a1, 0x6420($t4)
    ctx->pc = 0x1062e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 25632)));
    // 0x1062ec: 0xfce41ff8  sd          $a0, 0x1FF8($a3)
    ctx->pc = 0x1062ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8184), GPR_U64(ctx, 4));
label_1062f0:
    // 0x1062f0: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x1062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1062f4: 0x51f02  srl         $v1, $a1, 28
    ctx->pc = 0x1062f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x1062f8: 0x24882  srl         $t1, $v0, 2
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1062fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1062fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106300: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x106300u;
    {
        const bool branch_taken_0x106300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106300u;
            // 0x106304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106300) {
            ctx->pc = 0x1063CCu;
            goto label_1063cc;
        }
    }
    ctx->pc = 0x106308u;
    // 0x106308: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x106308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10630c: 0x258b6420  addiu       $t3, $t4, 0x6420
    ctx->pc = 0x10630cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 25632));
label_106310:
    // 0x106310: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x106310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x106314: 0x14b4021  addu        $t0, $t2, $t3
    ctx->pc = 0x106314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x106318: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x106318u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x10631c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x10631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x106320: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x106324: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x106324u;
    {
        const bool branch_taken_0x106324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106324u;
            // 0x106328: 0x672824  and         $a1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106324) {
            ctx->pc = 0x1063A0u;
            goto label_1063a0;
        }
    }
    ctx->pc = 0x10632Cu;
    // 0x10632c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x10632cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x106330: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x106330u;
    {
        const bool branch_taken_0x106330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106330) {
            ctx->pc = 0x106334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106330u;
            // 0x106334: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1063A4u;
            goto label_1063a4;
        }
    }
    ctx->pc = 0x106338u;
    // 0x106338: 0x11250012  beq         $t1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x106338u;
    {
        const bool branch_taken_0x106338 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x10633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106338u;
            // 0x10633c: 0x25240001  addiu       $a0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106338) {
            ctx->pc = 0x106384u;
            goto label_106384;
        }
    }
    ctx->pc = 0x106340u;
    // 0x106340: 0xa91823  subu        $v1, $a1, $t1
    ctx->pc = 0x106340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x106344: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x106344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x106348: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x106348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x10634c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10634cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x106350: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x106350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x106354: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x106354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x106358: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x106358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x10635c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106360: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x106360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x106364: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x106364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x106368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x106368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10636c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x10636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x106370: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x106370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x106374: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x106374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x106378: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x106378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10637c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x106380: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x106380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_106384:
    // 0x106384: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x106384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x106388: 0x25640004  addiu       $a0, $t3, 0x4
    ctx->pc = 0x106388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x10638c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10638cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106390: 0x1446821  addu        $t5, $t2, $a0
    ctx->pc = 0x106390u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x106394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x106394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x106398: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x106398u;
    {
        const bool branch_taken_0x106398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106398u;
            // 0x10639c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106398) {
            ctx->pc = 0x1063CCu;
            goto label_1063cc;
        }
    }
    ctx->pc = 0x1063A0u;
label_1063a0:
    // 0x1063a0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1063a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1063a4:
    // 0x1063a4: 0x25836420  addiu       $v1, $t4, 0x6420
    ctx->pc = 0x1063a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 25632));
    // 0x1063a8: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1063a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1063ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1063acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1063b0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1063b4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1063b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063b8: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1063bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1063bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1063c0: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x1063c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1063c4: 0x1444ffd2  bne         $v0, $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1063C4u;
    {
        const bool branch_taken_0x1063c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1063C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1063C4u;
            // 0x1063c8: 0x258b6420  addiu       $t3, $t4, 0x6420 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 25632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063c4) {
            ctx->pc = 0x106310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106310;
        }
    }
    ctx->pc = 0x1063CCu;
label_1063cc:
    // 0x1063cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1063CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1063CCu;
            // 0x1063d0: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1063D4u;
}
